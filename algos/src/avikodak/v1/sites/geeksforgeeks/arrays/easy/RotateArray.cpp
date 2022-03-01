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
	rotateBy = rotateBy % userInput.size();
	reverseArray(userInput, 0, rotateBy - 1);
	reverseArray(userInput, rotateBy, userInput.size() - 1);
	reverseArray(userInput, 0, userInput.size() - 1);
}

void rotateByOne(std::vector<int> &userInput) {
	if (userInput.size() < 2) {
		return;
	}
	int temp = userInput[0];
	for (int counter = 1; counter < userInput.size() - 1; counter++) {
		userInput[counter - 1] = userInput[counter];
	}
	userInput[userInput.size() - 1] = temp;
}

void rotateOneByOne(std::vector<int> &userInput, int rotateBy) {
	rotateBy = rotateBy % userInput.size();
	while (rotateBy--) {
		rotateByOne(userInput);
	}
}

