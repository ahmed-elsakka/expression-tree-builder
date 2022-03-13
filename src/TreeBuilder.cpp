#include "../inc/TreeBuilder.h"
#include "../inc/NumericNode.h"

Node* TreeBuilder::buildTree(vector<string>& postfix) {
    stack<Node*> expStack;
    for (string& token : postfix) {
        if (isdigit(token[0])) {
            NumericNode* newNode = new NumericNode(stoi(token));
            expStack.push(newNode);
        }
        else {
            Node* right = expStack.top();
            expStack.pop();
            Node* left = expStack.top();
            expStack.pop();

            Node* newNode = createNode(token, left, right);
            expStack.push(newNode);
        }
    }
    return expStack.top();
}

Node* TreeBuilder::createNode(string op, Node* left, Node* right) {
    switch (op[0]) {
    case '+':
        return new PlusOperator(left, right);
    case '-':
        return new MinusOperator(left, right);
    case '*':
        return new MultiplyOperator(left, right);
    case '/':
        return new DivideOperator(left, right);
    default:
        return nullptr;
    }
}