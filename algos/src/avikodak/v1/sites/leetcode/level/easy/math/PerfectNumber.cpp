/****************************************************************************************************************************************************
 *  File Name                   : PerfectNumber.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/math/PerfectNumber.cpp
 *  Created on                  : Mar 18, 2022 :: 8:42:48 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/perfect-number
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool checkPerfectNumber(int num) {
		if (num == 1) {
			return false;
		}
		int limit = sqrt(num);
		int sum = 1;
		for (int counter = 2; counter <= limit; counter++) {
			if (num % counter == 0) {
				sum += counter;
				if (num / counter != counter) {
					sum += num / counter;
				}
			}
		}
		return sum == num;
	}
};
