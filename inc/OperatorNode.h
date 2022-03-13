#pragma once
#include "Node.h"

class OperatorNode : public Node {
public:
	OperatorNode(Node* left, Node* right): left(left), right(right) {}
	~OperatorNode();
protected:
	Node* right;
	Node* left;
};