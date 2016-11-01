﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Collections;
using ResourceRedundance.CodeLib;
using ResourceRedundance.Yaml.Grammar;
using UnityEngine;

class YamlEmittor
{
    public List<string> mGuidList = new List<string>();

    public bool AnalyzeYAMLFile(string name)
    {
        bool success = false;
        string text = File.ReadAllText(name);
        TextInput input = new TextInput(text);

        YamlParser parser = new YamlParser();
        YamlStream yamlStream = parser.ParseYamlStream(input, out success);
        if (success)
        {
            foreach (YamlDocument doc in yamlStream.Documents)
            {
                AnalyzeYAMLNode(doc.Root);
            }
        }
        else
        {
            Debug.LogError(parser.GetEorrorMessages());
        }

        return success;
    }

    private bool AnalyzeYAMLNode(DataItem item)
    {
        if (item is Scalar)
        {
            return AnalyzeNodeForScalar(item as Scalar);
        }
        else if (item is Sequence)
        {
            return AnalyzeNodeForSequence(item as Sequence);
        }
        else if (item is Mapping)
        {
            return AnalyzeNodeForMapping(item as Mapping);
        }
        else
        {
            return false;
        }

    }

    private bool AnalyzeNodeForScalar(Scalar scalar)
    {
        if ("guid" == scalar.Text)
        {
            return true;
        }

        return false;
    }

    private bool AnalyzeNodeForSequence(Sequence sequence)
    {
        foreach (DataItem item in sequence.Enties)
        {
            AnalyzeYAMLNode(item);
        }

        return false;
    }

    private bool AnalyzeNodeForMapping(Mapping mapping)
    {
        foreach (MappingEntry entry in mapping.Enties)
        {
            if (AnalyzeYAMLNode(entry.Key))
            {
                Scalar scalar = (Scalar)(entry.Value);
                if (!mGuidList.Contains(scalar.Text))
                {
                    mGuidList.Add(scalar.Text);
                }
            }
            else
            {
                AnalyzeYAMLNode(entry.Value);
            }
        }

        return false;
    }


}    

