#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "KEGGPlugin.h"

void KEGGPlugin::input(std::string file) {
 inputfile = file;
}

void KEGGPlugin::run() {}

void KEGGPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "kg";
myCommand += " ";
myCommand += "--species";
myCommand += " ";
myCommand += inputfile.substr(inputfile.find_last_of('/')+1)+ " ";
myCommand += "-d";
myCommand += " ";
myCommand += "-q";
myCommand += " ";
myCommand += " > ";
myCommand += outputfile;
myCommand += " 2>&1";
std::cout << myCommand << std::endl;
 system(myCommand.c_str());
}

PluginProxy<KEGGPlugin> KEGGPluginProxy = PluginProxy<KEGGPlugin>("KEGG", PluginManager::getInstance());
