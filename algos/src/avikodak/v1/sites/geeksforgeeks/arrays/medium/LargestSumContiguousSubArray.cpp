/****************************************************************************************************************************************************
 *  File Name                   : LargestSumContiguousSubArray.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/medium/LargestSumContiguousSubArray.cpp
 *  Created on                  : Feb 22, 2022 :: 10:10:16 PM
 *  Author                      : avikodak
 *  URL                         : https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

int kadanesAlgorithm(std::vector<int> &userInput) {
	int maxSum = INT_MIN;
	int currentSum = 0;
	for (int counter = 0; counter < userInput.size(); counter++) {
		currentSum = std::max(currentSum + userInput[counter],
				userInput[counter]);
		maxSum = std::max(maxSum, currentSum);
	}
	return maxSum;
}
