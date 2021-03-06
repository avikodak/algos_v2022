/****************************************************************************************************************************************************
 *  File Name                   : SumOfLeftLeaves.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/SumOfLeftLeaves.cpp
 *  Created on                  : Mar 9, 2022 :: 7:49:41 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/sum-of-left-leaves/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"


class Solution {
private:
	int sumOfLeftLeavesUtil(TreeNode *root, bool isLeft) {
		if (root == nullptr) {
			return 0;
		}
		if (isLeft && root->left == nullptr && root->right == nullptr) {
			return root->val;
		}
		return sumOfLeftLeavesUtil(root->left, true)
				+ sumOfLeftLeavesUtil(root->right, false);
	}

public:
	int sumOfLeftLeaves(TreeNode *root) {
		return sumOfLeftLeavesUtil(root, false);
	}
};
