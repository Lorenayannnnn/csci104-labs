#include "bst.h"

using namespace std;

int rangeSum(Node *root, int L, int R) {
	if (!root) {
		return 0;
	}
	if (root->key < L) {
		return rangeSum(root->right, L, R);
	} else if (root->key > R) {
		return rangeSum(root->left, L, R);
	} else {
		return root->key + rangeSum(root->left, L, root->key) + rangeSum(root->right, root->key, R);
	}
}
