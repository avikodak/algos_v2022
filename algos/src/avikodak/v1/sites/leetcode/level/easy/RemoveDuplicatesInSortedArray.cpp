/****************************************************************************************************************************************************
 *  File Name                   : RemoveDuplicatesInSortedArray.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/RemoveDuplicatesInSortedArray.cpp
 *  Created on                  : Mar 3, 2022 :: 9:13:30 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int removeDuplicates(std::vector<int> &userInput) {
		int fillCounter = 0;
		int start = 0, rear = 0;
		while (start < userInput.size()) {
			rear = start;
			while (rear < userInput.size()
					&& userInput[rear] == userInput[start]) {
				rear++;
			}
			userInput[fillCounter++] = userInput[start];
			start = rear;
		}
		return fillCounter;
	}
};

