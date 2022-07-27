/****************************************************************************************************************************************************
 *  File Name                   : DistributeCandies.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/DistributeCandies.cpp
 *  Created on                  : Mar 22, 2022 :: 12:20:29 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/distribute-candies/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int distributeCandies(std::vector<int> &candyType) {
		std::set<int> types;
		for (int counter = 0; counter < candyType.size(); counter++) {
			types.insert(candyType[counter]);
		}
		return std::min(candyType.size() / 2, types.size());
	}
};
