/****************************************************************************************************************************************************
 *  File Name                   : IsPalindrome.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/IsPalindrome.cpp
 *  Created on                  : Mar 2, 2022 :: 7:08:24 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/palindrome-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
		int reverseValue = 0;
		int originalValue = x;
		while (x > reverseValue) {
			reverseValue = reverseValue * 10 + (x % 10);
			x /= 10;
		}
		return x == reverseValue || x == reverseValue/10;
	}
};

