/****************************************************************************************************************************************************
 *  File Name                   : LongestHarmonious.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/LongestHarmonious.cpp
 *  Created on                  : Mar 20, 2022 :: 7:42:04 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/longest-harmonious-subsequence/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int findLHS(std::vector<int> &nums) {
		int maxLength = 0;
		std::unordered_map<int, int> frequencyMap;
		std::unordered_map<int, int>::iterator itToFrequencyMap;
		for (int counter = 0; counter < nums.size(); counter++) {
			itToFrequencyMap = frequencyMap.find(nums[counter]);
			if (itToFrequencyMap == frequencyMap.end()) {
				frequencyMap[nums[counter]] = 1;
			} else {
				frequencyMap[nums[counter]] += 1;
			}
		}
		std::unordered_map<int, int>::iterator itToNextFrequencyMap;
		for (itToFrequencyMap = frequencyMap.begin();
				itToFrequencyMap != frequencyMap.end(); itToFrequencyMap++) {
			itToNextFrequencyMap = frequencyMap.find(
					itToFrequencyMap->first + 1);
			if (itToNextFrequencyMap != frequencyMap.end()) {
				maxLength = std::max(maxLength,
						itToFrequencyMap->second
								+ itToNextFrequencyMap->second);
			}
		}
		return maxLength;
	}
};

