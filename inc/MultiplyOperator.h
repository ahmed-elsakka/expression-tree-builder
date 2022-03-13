#include "OperatorNode.h"

class MultiplyOperator : public OperatorNode {
public:
	MultiplyOperator(Node* left, Node* right): OperatorNode(left, right) {}
	int evaluate() const;
};