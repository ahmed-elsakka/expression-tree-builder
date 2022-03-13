#pragma once
#include "Node.h"

class NumericNode : public Node {
public:
	NumericNode(int value) : value(value) {}
	int evaluate() const;
private:
	int value;
};