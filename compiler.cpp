/**
* Original Author: Chandler Bryant
* Created: 2023/02/16   
* Last Updated by: student2
* Contact information: cbryant126@gmail.com
* Main class and class creation
* (c) Copyright/license info
**/

#include <vector>
#include <iostream>
#include <fstream>

#include "LexicalAnalyzer.h"
#include "SyntaxAnalyzer.h"

using namespace std;

class Compiler{

private: 
    
    vector<string> tokenStream;
    
    vector<string> synTree;

public:

    string LexicalAnalyzer(tokenStream);

    string SyntaxAnalyzer(tokenStream);

    bool SemanticAnalyzer(tokenStream, synTree);

    ofstream TargetCodeGenerator(tokenStream, synTree);


};