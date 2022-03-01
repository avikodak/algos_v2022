/****************************************************************************************************************************************************
 *  File Name                   : MaximumSumNoAdjacent.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/medium/MaximumSumNoAdjacent.cpp
 *  Created on                  : Feb 28, 2022 :: 9:17:11 PM
 *  Author                      : avikodak
 *  URL                         : https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

int maxSumNoAdjacent(std::vector<int> userInput) {
	if (userInput.size() == 0) {
		return 0;
	}
	int maxIncl = userInput[0];
	int maxExcl = 0;
	int maxSum = INT_MIN;
	int temp;
	for (int counter = 1; counter < userInput.size(); counter++) {
		temp = maxIncl;
		maxIncl = maxExcl + userInput[counter];
		maxExcl = std::max(temp, maxExcl);
	}
	return std::max(maxExcl, maxIncl);
}
