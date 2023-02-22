/**
* Original Author: Alfredo Llamas
* Created: 2023/02/16   
* Last Updated by: Alfredo Llamas
* Contact information: frankllamas@csu.fullerton.edu
* Purpose of this file
* Description of Classes, Functions, etc. in the file.
* The SemanticAnalyzer class uses the syntax tree, created from the token stream,
* that is passed from the SyntaxAnalyzer class. The boolean function traverses
* the syntax tree and returns True if it's valid or False if there is a syntax error.
* (c) Copyright/license info
**/

#ifndef SEMANTIC_ANALYZER_H
#define SEMANTIC_ANALYZER_H

#include <cstddef>
#include <iostream>
#include "SyntaxAnalyzer.h"

class SemanticAnalyzer {
public:
  bool is_valid_syntax_tree(char *syntax_tree);
  char *left;
  char *right;
private:
  // TODO
};

bool SemanticAnalyzer::is_valid_syntax_tree(char *syntax_tree)
{
  if (syntax_tree == nullptr) {
    return true;
  }

  /* first recursive on left node */
  is_valid_syntax_tree(syntax_tree = left);

  /* then verify the data of node */
  if (is_keyword) {
    // TODO: verify if it's a keyword.
  } else if (is_identifier) {
    // TODO: verify if it's an identifier.
  } else if (is_statement) {
    // TODO: verify if it's a statement.
  } else if (is_block) {
    // TODO: check if it's a block such as a for loop, while loop, etc.
  } else {
    return false;
  }

  /* now recursive on right node */
  is_valid_syntax_tree(syntax_tree = right);
}

#endif
