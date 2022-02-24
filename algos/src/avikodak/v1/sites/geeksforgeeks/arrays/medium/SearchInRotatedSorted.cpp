/****************************************************************************************************************************************************
 *  File Name                   : SearchInRotatedSorted.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/medium/SearchInRotatedSorted.cpp
 *  Created on                  : Feb 23, 2022 :: 5:38:30 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

int searchInRotatedSorted(std::vector<int> userInput, int key, int start,
		int end) {
	if (start > end) {
		throw std::invalid_argument("key not found");
	}
	int mid = start + (end - start) / 2;
	if (userInput[mid] == key) {
		return mid;
	} else if (userInput[start] < userInput[end]) {
		if (key >= userInput[start] && key < userInput[mid]) {
			return searchInRotatedSorted(userInput, key, start, mid - 1);
		} else {
			return searchInRotatedSorted(userInput, key, mid + 1, end);
		}
	} else {
		if (key > userInput[mid] && key <= userInput[end]) {
			return searchInRotatedSorted(userInput, key, mid + 1, end);
		} else {
			return searchInRotatedSorted(userInput, key, start, mid - 1);
		}
	}
}
