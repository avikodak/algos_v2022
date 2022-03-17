/****************************************************************************************************************************************************
 *  File Name                   : ConstructRectangle.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/math/ConstructRectangle.cpp
 *  Created on                  : Mar 14, 2022 :: 9:25:01 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/construct-the-rectangle/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::vector<int> constructRectangle(int area) {
		std::vector<int> result;
		int sideOfRectangle = sqrt(area);
		while (sideOfRectangle > 0) {
			if (area % sideOfRectangle == 0) {
				int anotherSideOfRectangle = area / sideOfRectangle;
				result.push_back(std::max(anotherSideOfRectangle, sideOfRectangle));
				result.push_back(std::min(anotherSideOfRectangle, sideOfRectangle));
				break;
			}
			sideOfRectangle--;
		}
		return result;
	}
};
