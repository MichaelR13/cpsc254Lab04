#include <vector>
#include <iostream>
#include <fstream>

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


}
