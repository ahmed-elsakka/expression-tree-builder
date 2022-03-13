#include "../inc/TreeBuilder.h"
#include "../inc/Node.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	// Testing the functionality of the TreeBuilder
	vector<string> postfix = { "3", "4", "+", "2", "*", "7", "/" };
	TreeBuilder* objTreeBuilder = new TreeBuilder();
	Node* expTree = objTreeBuilder->buildTree(postfix);
	int expResult = expTree->evaluate();

	cout << "The expression tree result is : " << expResult << endl;
	return 0;
}