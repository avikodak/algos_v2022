/****************************************************************************************************************************************************
 *  File Name                   : ReversePrefix.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/strings/ReversePrefix.cpp
 *  Created on                  : Mar 21, 2022 :: 10:21:53 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-prefix-of-word/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::string reversePrefix(std::string word, char ch) {
		int start = 0;
		int end = 0;
		while(end < word.size() && word[end] != ch) {
			end++;
		}
		if(end >= word.size()) {
			return word;
		}
		while(start < end) {
			std::swap(word[start++], word[end--]);
		}
		return word;
	}
};
