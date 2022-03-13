/****************************************************************************************************************************************************
 *  File Name                   : ThirdMax.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/ThirdMax.cpp
 *  Created on                  : Mar 12, 2022 :: 8:10:43 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/third-maximum-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int thirdMax(std::vector<int> &userInput) {
		int first = userInput[0], second = userInput[0], third = userInput[0];
		std::unordered_map<int, int> frequencyMap;
		for (int counter = 1; counter < userInput.size(); counter++) {
			if (frequencyMap.find(userInput[counter]) == frequencyMap.end()) {
				frequencyMap[userInput[counter]] = 1;
			} else {
				frequencyMap[userInput[counter]] += 1;
			}

			if (first != userInput[counter] && second != userInput[counter]
					&& third != userInput[counter]) {
				if (first <= userInput[counter]) {
					third = second;
					second = first;
					first = userInput[counter];
				} else if (second <= userInput[counter]) {
					third = second;
					second = userInput[counter];
				} else if (third <= userInput[counter]) {
					third = userInput[counter];
				}
			}
		}
		if (frequencyMap.size() == 1) {
			return first;
		} else if(frequencyMap.size() == 2) {
			return second;
		}
		return third;
	}
};
