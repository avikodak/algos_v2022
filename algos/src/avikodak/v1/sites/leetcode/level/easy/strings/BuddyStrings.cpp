/****************************************************************************************************************************************************
 *  File Name                   : BuddyStrings.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/strings/BuddyStrings.cpp
 *  Created on                  : Mar 19, 2022 :: 9:10:48 AM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool buddyStrings(std::string s, std::string goal) {
		if (s.length() != goal.length()) {
			return false;
		}
		int diffCount = 0;
		std::vector<int> diffIndexes;
		std::map<int, int> frequencyMap;
		std::map<int, int>::iterator itToFrequencyMap;
		for (int counter = 0; counter < s.length(); counter++) {
			if(s[counter] != goal[counter]) {
				diffCount++;
				diffIndexes.push_back(counter);
			}
			if(diffCount > 2) {
				return false;
			}

		}
		if(diffCount == 1) {
			return false;
		}
		if(diffCount == 0) {
			return true;
		}
		return s[diffCount[0]] == goal[diffCount[1]] && goal[diffCount[0]] == s[diffCount[1]];
	}
};
