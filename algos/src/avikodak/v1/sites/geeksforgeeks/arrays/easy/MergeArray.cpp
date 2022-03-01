/****************************************************************************************************************************************************
 *  File Name                   : MergeArray.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/easy/MergeArray.cpp
 *  Created on                  : Feb 25, 2022 :: 6:52:45 PM
 *  Author                      : avikodak
 *  URL                         : https://www.geeksforgeeks.org/merge-one-array-of-size-n-into-another-one-of-size-mn/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#define NA -1

void mergeArray(std::vector<int> largeInput, std::vector<int> smallInput) {
	if (largeInput.size() < smallInput.size()) {
		throw std::invalid_argument("Invalid input");
	}
	int fillCounter = -1;
	for (unsigned int counter = 0; counter < largeInput.size(); counter++) {
		if (largeInput[counter] != NA) {
			std::swap(largeInput[++fillCounter], largeInput[counter]);
		}
	}
	int largeInputCrawler = fillCounter;
	int smallInputCrawler = smallInput.size() - 1;
	int fillCounter = largeInput.size();
	while (largeInputCrawler >= 0 || smallInputCrawler >= 0) {
		if (largeInputCrawler < 0) {
			largeInput[--fillCounter] = smallInput[smallInputCrawler--];
		} else if (smallInputCrawler < 0) {
			break;
		} else {
			if (largeInput[largeInputCrawler] > smallInput[smallInputCrawler]) {
				largeInput[-fillCounter] = largeInput[largeInputCrawler--];
			} else {
				largeInput[--fillCounter] = smallInput[smallInputCrawler--];
			}
		}
	}
}
