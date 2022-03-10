/****************************************************************************************************************************************************
 *  File Name                   : PascalTriangle.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/PascalTriangle.cpp
 *  Created on                  : Mar 9, 2022 :: 11:56:33 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/pascals-triangle/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::vector<std::vector<int>> generate(int numRows) {
		std::vector<std::vector<int>> result;
		result.push_back({1});
        if(numRows == 1) {
            return result;
        }
        result.push_back({1 ,1});
        if(numRows == 2) {
            return result;
        }
        for(int outerCounter = 2; outerCounter < numRows;outerCounter++) {
            std::vector<int> rowResult;
            rowResult.push_back(1);
            for(int innerCounter = 1;innerCounter < result[outerCounter-1].size();innerCounter++) {
                rowResult.push_back(result[outerCounter-1][innerCounter-1] + result[outerCounter-1][innerCounter]);
            }
            rowResult.push_back(1);
            result.push_back(rowResult);
        }
		return result;
	}
};
