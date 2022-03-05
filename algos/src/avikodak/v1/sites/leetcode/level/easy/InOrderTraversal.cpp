/****************************************************************************************************************************************************
 *  File Name                   : InOrderTraversal.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/InOrderTraversal.cpp
 *  Created on                  : Mar 4, 2022 :: 8:02:15 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-inorder-traversal/
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
	void inorderTraversalUtil(TreeNode *root, std::vector<int> &auxSpace) {
		if (root == nullptr) {
			return;
		}
		inorderTraversalUtil(root->left, auxSpace);
		auxSpace.push_back(root->val);
		inorderTraversalUtil(root->right, auxSpace);
	}

public:
	std::vector<int> inorderTraversal(TreeNode *root) {
		std::vector<int> result;
		inorderTraversalUtil(root, result);
		return result;
	}
};
