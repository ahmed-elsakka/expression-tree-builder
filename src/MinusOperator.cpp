#include "../inc/MinusOperator.h"

int MinusOperator::evaluate() const {
	return this->left->evaluate() - this->right->evaluate();
}