/****************************************************************************************************************************************************
 *  File Name                   : ModeBst.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/trees/ModeBst.cpp
 *  Created on                  : Mar 16, 2022 :: 11:35:08 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
	int maxFrequency = 0;
	int maxValue = INT_MIN;
	int prevValue;
	bool seenFirstValue = false;

	void findModeUtil(TreeNode *root, std::vector<int> &result) {
		if (root == nullptr) {
			return;
		}
	}
public:
	std::vector<int> findMode(TreeNode *root) {
		if (root == nullptr) {

		}
	}
};
