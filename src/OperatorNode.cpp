#include "../inc/OperatorNode.h"

OperatorNode::~OperatorNode() {
	delete this->right;
	delete this->left;
}