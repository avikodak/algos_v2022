/****************************************************************************************************************************************************
 *  File Name                   : ValidParentheses.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/ValidParentheses.cpp
 *  Created on                  : Mar 2, 2022 :: 8:49:52 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool isValid(std::string userInput) {
		if (userInput.size() & 1) {
			return false;
		}
		std::stack<char> auxSpace;
		for (int counter = 0; counter < userInput.size(); counter++) {
			switch (userInput[counter]) {
			case '{':
			case '(':
			case '[':
				auxSpace.push(userInput[counter]);
				break;
			case '}':
				if (auxSpace.empty() || auxSpace.top() != '{') {
					return false;
				}
				auxSpace.pop();
				break;
			case ')':
				if (auxSpace.empty() || auxSpace.top() != '(') {
					return false;
				}
				auxSpace.pop();
				break;
			case ']':
				if (auxSpace.empty() || auxSpace.top() != '[') {
					return false;
				}
				auxSpace.pop();
				break;
			}
		}
		return auxSpace.empty();
	}
};

