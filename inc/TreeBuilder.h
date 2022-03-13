#pragma once
#include "Node.h"
#include "PlusOperator.h"
#include "MultiplyOperator.h"
#include "MinusOperator.h"
#include "DivideOperator.h"
#include <string>
#include <stack>
#include <vector>

class TreeBuilder {
private:
	Node* createNode(string op, Node* left, Node* right);
public:
	Node* buildTree(vector<string>& postfix);
};