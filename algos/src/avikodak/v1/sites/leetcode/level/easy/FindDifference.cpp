/****************************************************************************************************************************************************
 *  File Name                   : FindDifference.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/FindDifference.cpp
 *  Created on                  : Mar 10, 2022 :: 10:00:30 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-the-difference
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	char findTheDifference(std::string first, std::string second) {
		std::map<char, int> frequencyMap;
		std::map<char, int>::iterator itToFrequencyMap;
		for (int counter = 0; counter < first.size(); counter++) {
			itToFrequencyMap = frequencyMap.find(first[counter]);
			if (itToFrequencyMap == frequencyMap.end()) {
				frequencyMap[first[counter]] = 1;
			} else {
				frequencyMap[first[counter]] += 1;
			}
		}

		for (int counter = 0; counter < second.size(); counter++) {
			itToFrequencyMap = frequencyMap.find(second[counter]);
			if (itToFrequencyMap == frequencyMap.end()) {
				return second[counter];
			} else {
				if (itToFrequencyMap->second == 1) {
					frequencyMap.erase(itToFrequencyMap);
				} else {
					frequencyMap[second[counter]] -= 1;
				}
			}
		}
		return '\0';
	}
};

