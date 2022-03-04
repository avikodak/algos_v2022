/****************************************************************************************************************************************************
 *  File Name                   : MaximumSubarray.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/MaximumSubarray.cpp
 *  Created on                  : Mar 3, 2022 :: 10:37:10 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-subarray/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int maxSubArray(std::vector<int> &nums) {
		int currentSum = 0;
		int maxSum = INT_MIN;
		for (unsigned int counter = 0; counter < nums.size(); counter++) {
			currentSum = std::max(currentSum + nums[counter], nums[counter]);
			maxSum = std::max(maxSum, currentSum);
		}
		return maxSum;
	}
};

