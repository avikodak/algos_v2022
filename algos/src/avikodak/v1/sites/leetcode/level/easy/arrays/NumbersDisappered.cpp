/****************************************************************************************************************************************************
 *  File Name                   : NumbersDisappered.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/NumbersDisappered.cpp
 *  Created on                  : Mar 13, 2022 :: 11:05:22 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::vector<int> findDisappearedNumbers(std::vector<int> &userInput) {
		for (int counter = 0; counter < userInput.size(); counter++) {
			if (userInput[abs(userInput[counter]) - 1] > 0) {
				userInput[abs(userInput[counter]) - 1] *= -1;
			}
		}
		std::vector<int> result;
		for (int counter = 0; counter < userInput.size(); counter++) {
			if (userInput[counter] > 0) {
				result.push_back(counter + 1);
			}
		}
		return result;
	}
};
