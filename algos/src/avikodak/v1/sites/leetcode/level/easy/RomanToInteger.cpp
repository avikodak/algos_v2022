/****************************************************************************************************************************************************
 *  File Name                   : RomanToInteger.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/RomanToInteger.cpp
 *  Created on                  : Mar 3, 2022 :: 10:50:01 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/roman-to-integer/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
	std::map<char, int> init() {
		std::map<char, int> romanLitearalToValue;
		romanLitearalToValue['I'] = 1;
		romanLitearalToValue['V'] = 5;
		romanLitearalToValue['X'] = 10;
		romanLitearalToValue['L'] = 50;
		romanLitearalToValue['C'] = 100;
		romanLitearalToValue['D'] = 500;
		romanLitearalToValue['M'] = 1000;
		return romanLitearalToValue;
	}
public:
	int romanToInt(std::string userInput) {
		std::map<char, int> romanLitearalToValue = init();
		int value = 0;
		for (int counter = 0; counter < userInput.size();) {
			if (counter + 1 < userInput.size()
					&& romanLitearalToValue[userInput[counter]]
							< romanLitearalToValue[userInput[counter + 1]]) {
				value += (romanLitearalToValue[userInput[counter + 1]]
						- romanLitearalToValue[userInput[counter]]);
				counter += 2;
			} else {
				value += romanLitearalToValue[userInput[counter]];
				counter++;
			}
		}
		return value;
	}
};

