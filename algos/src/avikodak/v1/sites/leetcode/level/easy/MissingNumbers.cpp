/****************************************************************************************************************************************************
 *  File Name                   : MissingNumbers.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/MissingNumbers.cpp
 *  Created on                  : Mar 9, 2022 :: 8:37:30 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/missing-number
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int missingNumber(std::vector<int> &nums) {
		int sumOfInputs = 0;
		int sumOfValue = 0;
		for (int counter = 0; counter < nums.size(); counter++) {
			sumOfInputs += nums[counter];
			sumOfValue += counter;
		}
		sumOfValue += nums.size();
		return sumOfValue - sumOfInputs;
	}
};
