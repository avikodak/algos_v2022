/****************************************************************************************************************************************************
 *  File Name                   : LeadersInArray.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/easy/LeadersInArray.cpp
 *  Created on                  : Feb 28, 2022 :: 9:31:34 PM
 *  Author                      : avikodak
 *  URL                         : https://www.geeksforgeeks.org/leaders-in-an-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

void printLeadersInArray(std::vector<int> userInput) {
	int maxTillNow = INT_MIN;
	for (int counter = userInput.size() - 1; counter >= 0; counter--) {
		if (userInput[counter] > maxTillNow) {
			printf("%d\t", userInput[counter]);
			maxTillNow = userInput[counter];
		}
	}
}
