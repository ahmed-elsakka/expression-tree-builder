#include "../inc/MultiplyOperator.h"

int MultiplyOperator::evaluate() const {
	return this->left->evaluate() * this->right->evaluate();
}