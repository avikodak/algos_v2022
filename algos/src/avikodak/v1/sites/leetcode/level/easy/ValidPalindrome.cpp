/****************************************************************************************************************************************************
 *  File Name                   : ValidPalindrome.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/ValidPalindrome.cpp
 *  Created on                  : Mar 6, 2022 :: 5:51:28 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-palindrome
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool isPalindrome(std::string userInput) {
		int front = 0, rear = userInput.size() - 1;
		while (front < rear) {
			if (!isalnum(userInput[front])) {
				front++;
			} else if (!isalnum(userInput[rear])) {
				rear--;
			} else {
				char frontChar = userInput[front], rearChar = userInput[rear];
				if (isupper(userInput[front])) {
					frontChar = userInput[front] - 'A' + 'a';
				}
				if (isupper(userInput[rear])) {
					rearChar = userInput[rear] - 'A' + 'a';
				}
				if (frontChar != rearChar) {
					return false;
				}
				front++;
				rear--;
			}
		}
		return true;
	}
};

