/****************************************************************************************************************************************************
 *  File Name                   : PerfectSquare.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/PerfectSquare.cpp
 *  Created on                  : Mar 9, 2022 :: 10:32:53 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-perfect-square
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool isPerfectSquare(int num) {
		for (long counter = 1; counter * counter <= num; counter++) {
			if (counter * counter == num) {
				return true;
			}
		}
		return false;
	}
};
