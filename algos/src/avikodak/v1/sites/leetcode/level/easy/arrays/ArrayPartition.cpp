/****************************************************************************************************************************************************
 *  File Name                   : ArrayPartition.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/ArrayPartition.cpp
 *  Created on                  : Mar 21, 2022 :: 9:02:52 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/array-partition-i
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int arrayPairSum(std::vector<int> &nums) {
		int sum = 0;
		std::sort(nums.begin(), nums.end());
		for (int counter = 0; counter < nums.size(); counter += 2) {
			sum += nums[counter];
		}
		return sum;
	}
};
