/****************************************************************************************************************************************************
 *  File Name                   : MinAbsoluteDiffBst.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/trees/MinAbsoluteDiffBst.cpp
 *  Created on                  : Mar 18, 2022 :: 7:38:43 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
	int prevValue = 0;
	int minDiff = INT_MAX;
	bool firstValueSeen = false;
	void getMinimumDifferenceUtil(TreeNode *root) {
		if (root == nullptr) {
			return;
		}
		getMinimumDifferenceUtil(root->left);
		if (firstValueSeen) {
			minDiff = std::min(minDiff, abs(root->val - prevValue));
		} else {
            firstValueSeen = true;
        }
		prevValue = root->val;
		getMinimumDifferenceUtil(root->right);
	}
public:
	int getMinimumDifference(TreeNode *root) {
		getMinimumDifferenceUtil(root);
		return minDiff;
	}
};
