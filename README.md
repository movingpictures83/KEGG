# KEGG
# Language: C++
# Input: KEGG organism
# Output: TXT
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependency: kg 0.10.0

PluMA plugin to obtain all KEGG (Kanehisa and Goto, 2000) pathways associated with a particular organism.

The KEGG ID for the organism should be supplied as the inputfile.  You can find this list here: https://www.genome.jp/kegg/catalog/org_list.

All genes and associated paths will then be output to a table in TXT format.

