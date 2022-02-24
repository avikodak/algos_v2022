/****************************************************************************************************************************************************
 *  File Name                   : OddOccurrence.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/easy/OddOccurrence.cpp
 *  Created on                  : Feb 22, 2022 :: 10:03:40 PM
 *  Author                      : avikodak
 *  URL                         : https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"


int getOddOccuringValue(std::vector<int> &userInput) {
	int xorResult = 0;
	for (int counter = 0; counter < userInput.size(); counter++) {
		xorResult = xorResult ^ userInput[counter];
	}
	return xorResult;
}

