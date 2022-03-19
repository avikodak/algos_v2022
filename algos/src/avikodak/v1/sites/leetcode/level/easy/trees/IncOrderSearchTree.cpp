/****************************************************************************************************************************************************
 *  File Name                   : IncOrderSearchTree.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/trees/IncOrderSearchTree.cpp
 *  Created on                  : Mar 18, 2022 :: 9:32:50 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/increasing-order-search-tree
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
	TreeNode *result = nullptr;
	TreeNode *prevNode = nullptr;

	void increasingBSTUtil(TreeNode *root) {
		if (root == nullptr) {
			return;
		}
		increasingBSTUtil(root->left);
		if (prevNode != nullptr) {
			prevNode->left = nullptr;
			prevNode->right = root;
		} else {
			result = root;
			root->left = nullptr;
		}
		prevNode = root;
		increasingBSTUtil(root->right);
	}

public:
	TreeNode* increasingBST(TreeNode *root) {
		increasingBSTUtil(root);
		prevNode->left = nullptr;
		prevNode->right = nullptr;
		return result;
	}
};
