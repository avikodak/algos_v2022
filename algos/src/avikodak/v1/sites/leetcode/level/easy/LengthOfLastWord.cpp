/****************************************************************************************************************************************************
 *  File Name                   : LengthOfLastWord.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/LengthOfLastWord.cpp
 *  Created on                  : Mar 4, 2022 :: 7:46:26 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/length-of-last-word/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int lengthOfLastWord(std::string userInput) {
		int start = 0, end;
		int length;
		while (start < userInput.size()) {
			while (start < userInput.size() && userInput[start] == ' ') {
				start++;
			}
			if (start < userInput.size()) {
				end = start;
				while (end < userInput.size() && userInput[end] != ' ') {
					end++;
				}
				length = end - start;
				start = end;
			}
		}
		return length;
	}
};
