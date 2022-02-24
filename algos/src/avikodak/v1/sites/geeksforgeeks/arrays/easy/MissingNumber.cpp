/****************************************************************************************************************************************************
 *  File Name                   : MissingNumber.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/easy/MissingNumber.cpp
 *  Created on                  : Feb 22, 2022 :: 10:17:40 PM
 *  Author                      : avikodak
 *  URL                         : https://www.geeksforgeeks.org/find-the-missing-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

int getMissingNumber(std::vector<int> &userInput) {
	int sum = 0;
	int targetSum = ((userInput.size() + 1) * (userInput.size() + 2)) / 2;
	for (int counter = 0; counter < userInput.size(); counter++) {
		sum += userInput[counter];
	}
	return targetSum - sum;
}

int getMissingNumberAvoidOverflow(std::vector<int> &userInput) {
	int missingNumber = 1;
	for (int counter = 0; counter < userInput.size(); counter++) {
		missingNumber += (counter + 2);
		missingNumber -= userInput[counter];
	}
	return missingNumber;
}
