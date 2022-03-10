/****************************************************************************************************************************************************
 *  File Name                   : InvertTree.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/InvertTree.cpp
 *  Created on                  : Mar 9, 2022 :: 8:44:02 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/invert-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

/**
 * Definition for a binary tree node.
 */

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
	TreeNode* invertTree(TreeNode *root) {
		if (root == nullptr) {
			return nullptr;
		}
		TreeNode *temp = root->left;
		root->left = root->right;
		root->right = temp;
		invertTree(root->left);
		invertTree(root->right);
		return root;
	}
};
