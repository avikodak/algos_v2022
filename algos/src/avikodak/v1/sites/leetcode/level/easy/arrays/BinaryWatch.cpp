/****************************************************************************************************************************************************
 *  File Name                   : BinaryWatch.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/BinaryWatch.cpp
 *  Created on                  : Mar 13, 2022 :: 8:30:57 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-watch/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int countSetBits(int value) {
		int count = 0;
		while (value) {
			count += value % 2;
			value /= 2;
		}
		return count;
	}

	std::vector<std::string> readBinaryWatch(int turnedOn) {

		for (int count = 0; count < 12; count++) {
			std::cout << count << " " << countSetBits(count) << std::endl;
		}
		for (int count = 0; count < 60; count++) {
			std::cout << count << " " << countSetBits(count) << std::endl;
		}
	}
};
