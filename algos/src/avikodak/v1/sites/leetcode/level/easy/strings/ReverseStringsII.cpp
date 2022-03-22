/****************************************************************************************************************************************************
 *  File Name                   : ReverseStringsII.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/strings/ReverseStringsII.cpp
 *  Created on                  : Mar 21, 2022 :: 8:15:25 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-string-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::string reverseStr(std::string &userInput, int k) {
		int start = 0;
		int end;
		int nextIndex;
		while (start < userInput.size()) {
			end = std::min((int) (userInput.size() - 1), start + k - 1);
			nextIndex = start + 2 * k;
			while (start < end) {
				std::swap(userInput[start], userInput[end]);
				start++;
				end--;
			}
			start = nextIndex;
		}
		return userInput;
	}
};
