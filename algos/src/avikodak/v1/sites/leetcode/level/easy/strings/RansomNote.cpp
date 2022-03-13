/****************************************************************************************************************************************************
 *  File Name                   : RansomNote.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/strings/RansomNote.cpp
 *  Created on                  : Mar 12, 2022 :: 7:45:35 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/ransom-note/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool canConstruct(std::string ransomNote, std::string magazine) {
		std::unordered_map<char, int> frequencyMap;
		std::unordered_map<char, int>::iterator itToFrequencyMap;
		for (int counter = 0; counter < magazine.size(); counter++) {
			itToFrequencyMap = frequencyMap.find(magazine[counter]);
			if (itToFrequencyMap == frequencyMap.end()) {
				frequencyMap[magazine[counter]] = 1;
			} else {
				frequencyMap[magazine[counter]] += 1;
			}
		}
		for (int counter = 0; counter < ransomNote.size(); counter++) {
			itToFrequencyMap = frequencyMap.find(ransomNote[counter]);
			if (itToFrequencyMap == frequencyMap.end()) {
				return false;
			} else {
				if (frequencyMap[ransomNote[counter]] == 1) {
					frequencyMap.erase(itToFrequencyMap);
				} else {
					frequencyMap[ransomNote[counter]] -= 1;
				}
			}
		}
		return true;
	}
};
