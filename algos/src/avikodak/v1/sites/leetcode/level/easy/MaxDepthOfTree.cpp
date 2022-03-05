/****************************************************************************************************************************************************
 *  File Name                   : MaxDepthOfTree.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/MaxDepthOfTree.cpp
 *  Created on                  : Mar 5, 2022 :: 12:00:07 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-depth-of-binary-tree/
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
public:
	int maxDepth(TreeNode *root) {
		if (root == nullptr) {
			return 0;
		}
		return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
	}
};

