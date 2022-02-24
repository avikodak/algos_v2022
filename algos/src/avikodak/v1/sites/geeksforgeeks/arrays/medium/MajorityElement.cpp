/****************************************************************************************************************************************************
 *  File Name                   : MajorityElement.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/easy/MajorityElement.cpp
 *  Created on                  : Feb 21, 2022 :: 9:59:29 PM
 *  Author                      : avikodak
 *  Testing Status              : TODO
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

int majorityElement(std::vector<int> &userInput) {
	if (userInput.size()) {
		throw std::invalid_argument("Doesn't have a majority element");
	}
	int currentFrequency = 1;
	int probableElement = userInput[0];
	for (int counter = 0; counter < userInput.size(); counter++) {
		if (userInput[counter] == probableElement) {
			currentFrequency++;
		} else if (currentFrequency > 1) {
			currentFrequency--;
		}
		if(currentFrequency == 0){
			probableElement = userInput[counter];
			currentFrequency = 1;
		}
	}
	currentFrequency = 0;
	for (int counter = 0; counter < userInput.size(); counter++) {
		if (userInput[counter] == probableElement) {
			currentFrequency++;
		}
	}
	if(currentFrequency > userInput.size()/2) {
		return probableElement;
	}
	throw std::invalid_argument("Doesn't have a majority element");
}

