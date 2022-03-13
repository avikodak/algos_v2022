/****************************************************************************************************************************************************
 *  File Name                   : GuessTheNumber.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/GuessTheNumber.cpp
 *  Created on                  : Mar 12, 2022 :: 7:10:32 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/guess-number-higher-or-lower
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num);

class Solution {
public:
	int guessNumber(int n) {
		int start = 1;
		int end = n;
		int mid;
		int result;
		while (start <= end) {
			mid = start + (end - start) / 2;
			result = guess(mid);
			if (result == 0) {
				return mid;
			} else if (result == -1) {
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}
		return -1;
	}
};
