#include "symmetrical.h"

bool helper(Node *left, Node* right)
{
    if (!left && !right) {
		return true;
	}
	// Only have one child
	if (!left || !right) {
		return false;
	}
	if (left->key == right->key) {
		return helper(left->right, right->left) && helper(left->left, right->right);
	}
	return false;
}

bool isSymmetrical(Node *root)
{
    if (!root) {
		return true;
	}
	return helper(root->left, root->right);
}
