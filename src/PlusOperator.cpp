#include "../inc/PlusOperator.h"

int PlusOperator::evaluate() const {
	return this->left->evaluate() + this->right->evaluate();
}