/****************************************************************************************************************************************************
 *  File Name                   : NextGreatestElementI.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/NextGreatestElementI.cpp
 *  Created on                  : Mar 21, 2022 :: 10:30:10 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/next-greater-element-i/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::vector<int> nextGreaterElement(std::vector<int> &nums1,
			std::vector<int> &nums2) {
		std::vector<int> result;
		std::map<int, int> valueToNextMap;
		std::stack<int> auxSpace;
		int maxValue = -1;
		for (int counter = nums2.size() - 1; counter >= 0; counter--) {
			while (!auxSpace.empty() && auxSpace.top() < nums2[counter]) {
				auxSpace.pop();
			}
			valueToNextMap[nums2[counter]] =
					auxSpace.empty() ? -1 : auxSpace.top();
			auxSpace.push(nums2[counter]);
		}
		for (int counter = 0; counter < nums1.size(); counter++) {
			result.push_back(valueToNextMap[nums1[counter]]);
		}
		return result;
	}
};
