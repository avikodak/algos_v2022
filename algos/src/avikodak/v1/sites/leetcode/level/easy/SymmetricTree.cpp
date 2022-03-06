/****************************************************************************************************************************************************
 *  File Name                   : SymmetricTree.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/SymmetricTree.cpp
 *  Created on                  : Mar 5, 2022 :: 6:25:28 PM
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
	bool isSymmetricUtil(TreeNode *firstTree, TreeNode *secondTree) {
		if (firstTree == nullptr && secondTree == nullptr) {
			return true;
		}
		if (firstTree == nullptr || secondTree == nullptr) {
			return false;
		}
		if (firstTree->val != secondTree->val) {
			return false;
		}
		return isSymmetricUtil(firstTree->left, secondTree->right)
				&& isSymmetricUtil(firstTree->right, secondTree->left);
	}
public:
	bool isSymmetric(TreeNode *root) {
		if (root == nullptr) {
			return true;
		}
		return isSymmetricUtil(root->left, root->right);
	}
};
