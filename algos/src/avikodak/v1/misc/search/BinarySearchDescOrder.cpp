/****************************************************************************************************************************************************
 *  File Name                   : BinarySearchDescOrder.cpp
 *  File Location               : /algos/src/avikodak/v1/misc/search/BinarySearchDescOrder.cpp
 *  Created on                  : Feb 23, 2022 :: 5:46:37 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

template<typename T>
int binarySearchDescOrder(std::vector<T> userInput, int key, int start,
		int end) {
	if (start > end) {
		throw std::invalid_argument("key not found");
	}
	int mid = start + (end - start) / 2;
	if (userInput[mid] == key) {
		return mid;
	} else if (userInput[mid] > key) {
		return binarySearchDescOrder(userInput, key, mid + 1, end);
	} else {
		return binarySearchDescOrder(userInput, key, start, mid - 1);
	}
}
