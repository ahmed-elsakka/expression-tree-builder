#include "OperatorNode.h"

class MinusOperator : public OperatorNode {
public:
	MinusOperator(): OperatorNode(left, right){}
	int evaluate() const;
};