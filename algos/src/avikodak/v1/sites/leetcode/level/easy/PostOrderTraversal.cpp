/****************************************************************************************************************************************************
 *  File Name                   : PostOrderTraversal.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/PostOrderTraversal.cpp
 *  Created on                  : Mar 5, 2022 :: 11:09:01 AM
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
	void postorderTraversalUtil(TreeNode *root, std::vector<int> &auxSpace) {
		if (root == nullptr) {
			return;
		}
		postorderTraversalUtil(root->left, auxSpace);
		postorderTraversalUtil(root->right, auxSpace);
		auxSpace.push_back(root->val);
	}

public:
	std::vector<int> postorderTraversal(TreeNode *root) {
		std::vector<int> result;
		postorderTraversalUtil(root, result);
		return result;
	}
};

