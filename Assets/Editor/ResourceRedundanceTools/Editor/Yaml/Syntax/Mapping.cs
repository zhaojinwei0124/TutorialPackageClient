﻿using System;
using System.Collections.Generic;
using System.Text;

namespace ResourceRedundance.Yaml.Grammar
{
    public partial class Mapping : DataItem
    {
        public List<MappingEntry> Enties = new List<MappingEntry>();

    }
}
