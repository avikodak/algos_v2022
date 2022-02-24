/****************************************************************************************************************************************************
 *  File Name                   : BinarySearch.cpp
 *  File Location               : /algos/src/avikodak/v1/misc/search/BinarySearch.cpp
 *  Created on                  : Feb 23, 2022 :: 11:15:15 AM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

template<typename T>
int binarySearch(std::vector<T> userInput, int start, int end, T key) {
	if (start > end) {
		throw std::invalid_argument("couldn't find given key");
	}
	int mid = start + (end - start) / 2;
	if (userInput[mid] == key) {
		return mid;
	} else if (userInput[mid] > key) {
		return binarySearch(userInput, start, mid - 1, key);
	} else {
		return binarySearch(userInput, mid + 1, end, key);
	}
}

template<typename T>
int binarySearch(std::vector<T> userInput, T key) {
	if (userInput.size() == 0) {
		throw std::invalid_argument("empty inputs");
	}
	int start = 0;
	int end = userInput.size() - 1;
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (userInput[mid] == key) {
			return mid;
		} else if (userInput[mid] > key) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	throw std::invalid_argument("couldn't find given key");
}
