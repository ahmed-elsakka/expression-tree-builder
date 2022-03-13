#pragma once
class Node {
public:
	virtual ~Node() {};
	virtual int evaluate() const = 0 {};
};