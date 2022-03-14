/****************************************************************************************************************************************************
 *  File Name                   : LongestPalindrome.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/strings/LongestPalindrome.cpp
 *  Created on                  : Mar 13, 2022 :: 12:06:08 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/longest-palindrome/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int longestPalindrome(std::string userInput) {
		std::unordered_map<char, int> frequencyMap;
		for (int counter = 0; counter < userInput.size(); counter++) {
			if (frequencyMap.find(userInput[counter]) == frequencyMap.end()) {
				frequencyMap[userInput[counter]] = 1;
			} else {
				frequencyMap[userInput[counter]] += 1;
			}
		}
		int longestPalindrome = 0;
		bool hasOddFrequency = false;
		std::unordered_map<char, int>::iterator itToFrequencyMap;
		for (itToFrequencyMap = frequencyMap.begin();
				itToFrequencyMap != frequencyMap.end(); itToFrequencyMap++) {
			if (itToFrequencyMap->second % 2 == 1) {
				hasOddFrequency = true;
			}
			if (itToFrequencyMap->second > 1) {
				longestPalindrome += (
						itToFrequencyMap->second % 2 == 0 ?
								itToFrequencyMap->second :
								itToFrequencyMap->second - 1);
			}
		}
		return hasOddFrequency ? longestPalindrome + 1 : longestPalindrome;
	}
};
