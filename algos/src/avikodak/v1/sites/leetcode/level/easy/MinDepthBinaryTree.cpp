/****************************************************************************************************************************************************
 *  File Name                   : MinDepthBinaryTree.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/MinDepthBinaryTree.cpp
 *  Created on                  : Mar 4, 2022 :: 10:05:31 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/minimum-depth-of-binary-tree
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
	int minDepthUtil(TreeNode *root) {
		if (root == nullptr) {
			return INT_MAX;
		}
		if (root->left == nullptr && root->right == nullptr) {
			return 1;
		}
		return 1 + std::min(minDepthUtil(root->left), minDepthUtil(root->right));
	}

public:
	int minDepth(TreeNode *root) {
		if (root == nullptr) {
			return 0;
		}
		return minDepthUtil(root);
	}
};
