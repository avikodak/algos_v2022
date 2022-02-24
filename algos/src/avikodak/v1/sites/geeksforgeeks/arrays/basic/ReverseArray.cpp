/****************************************************************************************************************************************************
 *  File Name                   : ReverseArray.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/basic/ReverseArray.cpp
 *  Created on                  : Feb 23, 2022 :: 5:53:32 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

template<typename T>
void reverseArray(std::vector<T> &userInput) {
	if (userInput.size() < 1) {
		return;
	}
	int start = 0, end = userInput.size() - 1;
	while (start < end) {
		std::swap(userInput[start], userInput[end]);
		start++;
		end--;
	}
}
