/****************************************************************************************************************************************************
 *  File Name                   : BalancedBinaryTree.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/BalancedBinaryTree.cpp
 *  Created on                  : Mar 8, 2022 :: 10:01:48 AM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() :
			val(0), left(nullptr), right(nullptr) {
	}
	TreeNode(int x) :
			val(x), left(nullptr), right(nullptr) {
	}
	TreeNode(int x, TreeNode *left, TreeNode *right) :
			val(x), left(left), right(right) {
	}
};

class Solution {
private:
	bool isBalancedUtil(TreeNode *root, int &height) {
		if (root == nullptr) {
			height = 0;
			return true;
		}
		int leftHeight;
		bool isLeftBalanced = isBalancedUtil(root->left, leftHeight);
		int rightHeight;
		bool isRightBalanced = isBalancedUtil(root->right, rightHeight);
		height = 1 + std::max(leftHeight, rightHeight);
		return abs(leftHeight - rightHeight) <= 1 && isLeftBalanced
				&& isRightBalanced;
	}
public:
	bool isBalanced(TreeNode *root) {
		int height;
		return isBalancedUtil(root, height);
	}
};
