/****************************************************************************************************************************************************
 *  File Name                   : FirstUniqueCharacter.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/FirstUniqueCharacter.cpp
 *  Created on                  : Mar 9, 2022 :: 10:44:59 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/first-unique-character-in-a-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int firstUniqChar(std::string userInput) {
		std::unordered_map<char, int> auxSpace;
		std::unordered_map<char, int>::iterator itToAuxSpace;
		for (int counter = 0; counter < userInput.size(); counter++) {
			itToAuxSpace = auxSpace.find(userInput[counter]);
			if (itToAuxSpace == auxSpace.end()) {
				auxSpace[userInput[counter]] = 1;
			} else {
				auxSpace[userInput[counter]] += 1;
			}
		}
		for (int counter = 0; counter < userInput.size(); counter++) {
			if (auxSpace[userInput[counter]] == 1) {
				return counter;
			}
		}
		return -1;
	}
};
