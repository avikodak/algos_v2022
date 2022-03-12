/****************************************************************************************************************************************************
 *  File Name                   : ReverseVowels.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/strings/ReverseVowels.cpp
 *  Created on                  : Mar 10, 2022 :: 7:12:36 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-vowels-of-a-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
	bool isVowel(char ch) {
		switch (ch) {
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			return true;
		default:
			return false;
		}
	}
public:
	std::string reverseVowels(std::string input) {
		int start = 0, end = input.size() - 1;
		while (start < end) {
			while (start < end && !isVowel(input[start])) {
				start++;
			}
			while (start < end && !isVowel(input[end])) {
				end--;
			}
			if (start < end) {
				std::swap(input[start], input[end]);
			}
			start++;
			end--;
		}
		return input;
	}
};
