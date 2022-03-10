/****************************************************************************************************************************************************
 *  File Name                   : ContainsDuplicateII.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/ContainsDuplicateII.cpp
 *  Created on                  : Mar 9, 2022 :: 9:54:29 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/contains-duplicate-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool containsNearbyDuplicate(std::vector<int> &userInput, int k) {
		std::map<int, int> prevSeenIndex;
		for (int counter = 0; counter < userInput.size(); counter++) {
			auto itToSeenIndex = prevSeenIndex.find(userInput[counter]);
			if (itToSeenIndex == userInput.end()) {
				prevSeenIndex[userInput[counter]] = counter;
			} else {
				if (counter - prevSeenIndex[userInput[counter]] <= k) {
					return true;
				}
				prevSeenIndex[userInput[counter]] = counter;
			}
		}
		return false;
	}
};
