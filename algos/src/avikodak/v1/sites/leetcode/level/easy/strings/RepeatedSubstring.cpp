/****************************************************************************************************************************************************
 *  File Name                   : RepeatedSubstring.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/strings/RepeatedSubstring.cpp
 *  Created on                  : Mar 14, 2022 :: 9:00:09 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool repeatedSubstringPattern(std::string value) {
		std::string appendedValue = value + value;
		size_t index = appendedValue.find(value, 0); // first occurrence
		int count = 0;
		while (index != std::string::npos) {
			count++;
			index = appendedValue.find(value, index + 1);
		}
		return count > 2;

	}
};
