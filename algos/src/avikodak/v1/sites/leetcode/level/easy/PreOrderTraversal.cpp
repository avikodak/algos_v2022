/****************************************************************************************************************************************************
 *  File Name                   : PreOrderTraversal.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/PreOrderTraversal.cpp
 *  Created on                  : Mar 5, 2022 :: 11:08:16 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-preorder-traversal/
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
	void preorderTraversalUtil(TreeNode *root, std::vector<int> &auxSpace) {
		if (root == nullptr) {
			return;
		}
		preorderTraversalUtil(root->left, auxSpace);
		preorderTraversalUtil(root->right, auxSpace);
		auxSpace.push_back(root->val);
	}

public:
	std::vector<int> preorderTraversal(TreeNode *root) {
		std::vector<int> result;
		preorderTraversalUtil(root, result);
		return result;
	}
};

