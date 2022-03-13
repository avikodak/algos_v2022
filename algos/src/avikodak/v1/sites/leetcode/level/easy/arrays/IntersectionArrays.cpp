/****************************************************************************************************************************************************
 *  File Name                   : IntersectionArrays.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/IntersectionArrays.cpp
 *  Created on                  : Mar 12, 2022 :: 6:20:51 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/intersection-of-two-arrays/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::vector<int> intersection(std::vector<int> &first,
			std::vector<int> &second) {
		std::unordered_map<int, int> auxSpace;
        std::unordered_map<int, int>::iterator itAuxSpace;
		for (int counter = 0; counter < first.size(); counter++) {
			if (auxSpace.find(first[counter]) == auxSpace.end()) {
				auxSpace[first[counter]] = 1;
			}
		}
		std::vector<int> result;

		for (int counter = 0; counter < second.size(); counter++) {
            itAuxSpace = auxSpace.find(second[counter]);
			if (itAuxSpace != auxSpace.end()) {
				result.push_back(second[counter]);
				auxSpace.erase(itAuxSpace);
			}
		}
		return result;
	}
};
