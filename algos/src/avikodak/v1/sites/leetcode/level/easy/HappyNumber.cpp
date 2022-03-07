/****************************************************************************************************************************************************
 *  File Name                   : HappyNumber.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/HappyNumber.cpp
 *  Created on                  : Mar 6, 2022 :: 6:09:24 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/happy-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool isHappy(int value) {
		int temp;
		std::set<int> visitedValues;
		visitedValues.insert(value);
		do {
			temp = value;
			value = 0;
			while (temp) {
				value += (temp % 10) * (temp % 10);
				temp /= 10;
			}
		} while (visitedValues.find(value) != visitedValues.end() && value != 1);
		return value == 1;
	}
};
