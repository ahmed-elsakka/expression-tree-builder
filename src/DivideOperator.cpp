#include "../inc/DivideOperator.h"

int DivideOperator::evaluate() const {
	return this->left->evaluate() / this->right->evaluate();
}