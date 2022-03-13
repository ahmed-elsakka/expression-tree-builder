#include "OperatorNode.h"

class MinusOperator : public OperatorNode {
public:
	MinusOperator(Node* left, Node* right): OperatorNode(left, right){}
	int evaluate() const;
};