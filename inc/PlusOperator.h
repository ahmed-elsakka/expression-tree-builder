#pragma once
#include "OperatorNode.h"

class PlusOperator : public OperatorNode {
public:
	PlusOperator(Node* left, Node* right): OperatorNode(left, right) {}
	int evaluate() const;
};