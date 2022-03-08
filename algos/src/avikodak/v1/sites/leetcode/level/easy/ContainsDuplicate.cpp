/****************************************************************************************************************************************************
 *  File Name                   : ContainsDuplicate.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/ContainsDuplicate.cpp
 *  Created on                  : Mar 7, 2022 :: 6:09:23 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/contains-duplicate/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool containsDuplicate(std::vector<int> &nums) {
		std::unordered_map<int, int> auxSpace;
		for (int counter = 0; counter < nums.size(); counter++) {
			if (auxSpace.find(nums[counter]) != auxSpace.end()) {
				return true;
			}
			auxSpace[nums[counter]] = 1;
		}
		return false;
	}
};
