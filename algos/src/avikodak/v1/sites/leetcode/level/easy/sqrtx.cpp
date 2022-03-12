/****************************************************************************************************************************************************
 *  File Name                   : sqrtx.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/sqrtx.cpp
 *  Created on                  : Mar 4, 2022 :: 7:47:47 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/sqrtx/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int mySqrt(int x) {
		if (x <= 1) {
			return x;
		}
		int start = 0;
		int end = x;
		int sqrtx;
		while (start <= end) {
			long mid = start + (end - start) / 2;
			long result = mid * mid;
			if (result == (long) x) {
				return mid;
			} else if (result > x) {
				end = mid - 1;
			} else {
				start = mid + 1;
				sqrtx = mid;
			}
		}
		return sqrtx;
	}
};

