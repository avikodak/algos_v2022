/****************************************************************************************************************************************************
 *  File Name                   : UglyNumbers.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/medium/UglyNumbers.cpp
 *  Created on                  : Feb 22, 2022 :: 10:30:23 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

bool isUglyNumber(int value) {
	while (value % 2 == 0) {
		value /= 2;
	}
	while (value % 3 == 0) {
		value /= 3;
	}
	while (value % 5 == 0) {
		value /= 5;
	}
	return value == 1;
}

int getNthUglyNumber(int nValue) {
	int currentValue = 0;
	while (nValue) {
		currentValue++;
		if (isUglyNumber(currentValue)) {
			nValue--;
		}
	}
	return currentValue;
}

int getUglyNumber(int nValue) {
	std::vector<int> auxSpace;
	auxSpace.push_back(1);
	int twoIndex = 0, threeIndex = 0, fiveIndex = 0;
	int twoMultiplierValue, threeMultiplierValue, fiveMultiplierValue;
	int minValue;
	while (nValue) {
		twoMultiplierValue = auxSpace[twoIndex] * 2;
		threeMultiplierValue = auxSpace[threeIndex] * 3;
		fiveMultiplierValue = auxSpace[fiveIndex] * 5;
		minValue = std::min(twoMultiplierValue,
				std::min(threeMultiplierValue, fiveMultiplierValue));
		if (minValue == twoMultiplierValue) {
			auxSpace.push_back(twoMultiplierValue);
			twoIndex++;
		} else if (minValue == threeMultiplierValue) {
			auxSpace.push_back(threeMultiplierValue);
			threeIndex++;
		} else {
			auxSpace.push_back(fiveMultiplierValue);
			fiveIndex++;
		}
		nValue--;
	}
	return auxSpace[auxSpace.size() - 1];
}
