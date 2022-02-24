/****************************************************************************************************************************************************
 *  File Name                   : RotateArray.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/easy/RotateArray.cpp
 *  Created on                  : Feb 23, 2022 :: 9:35:46 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

void reverseArray(std::vector<int> &userInput, int start, int end) {
	while (start < end) {
		std::swap(userInput[start], userInput[end]);
		start++;
		end--;
	}
}

void rotateArray(std::vector<int> &userInput, int rotateBy) {
	reverseArray(userInput, 0, rotateBy - 1);
	reverseArray(userInput, rotateBy, userInput.size() - 1);
	reverseArray(userInput, 0, userInput.size() - 1);
}
