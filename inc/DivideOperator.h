#include "OperatorNode.h"

class DivideOperator : public OperatorNode {
public:
	DivideOperator(Node* left, Node* right): OperatorNode(left, right) {}
	int evaluate() const;
};