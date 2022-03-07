/****************************************************************************************************************************************************
 *  File Name                   : ExcelSheetColumnTitle.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/ExcelSheetColumnTitle.cpp
 *  Created on                  : Mar 5, 2022 :: 7:22:18 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::string convertToTitle(int columnNumber) {
		std::string result;
		while (columnNumber) {
			columnNumber -= 1;
			result.push_back('A' + (columnNumber % 26));
			columnNumber /= 26;
		}
		std::reverse(result.begin(), result.end());
		return result;
	}
};
