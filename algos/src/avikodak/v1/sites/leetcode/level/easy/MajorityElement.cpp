/****************************************************************************************************************************************************
 *  File Name                   : MajorityElement.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/MajorityElement.cpp
 *  Created on                  : Mar 2, 2022 :: 7:45:35 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/




/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

// Assumes that majority element is always present;
class Solution {
public:
    int majorityElement(std::vector<int>& userInput) {
        if (userInput.size() == 0) {
		throw std::invalid_argument("Doesn't have a majority element");
	}
	int currentFrequency = 1;
	int probableElement = userInput[0];
	for (int counter = 0; counter < userInput.size(); counter++) {
		if (userInput[counter] == probableElement) {
			currentFrequency++;
		} else if (currentFrequency > 0) {
			currentFrequency--;
		}
		if(currentFrequency == 0){
			probableElement = userInput[counter];
			currentFrequency = 1;
		}
	}
	return probableElement;
    }
};
