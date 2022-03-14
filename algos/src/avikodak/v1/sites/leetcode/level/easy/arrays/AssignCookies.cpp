/****************************************************************************************************************************************************
 *  File Name                   : AssignCookies.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/AssignCookies.cpp
 *  Created on                  : Mar 13, 2022 :: 9:02:37 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/assign-cookies/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int findContentChildren(std::vector<int> &greed,
			std::vector<int> &cookies) {
		std::sort(greed.begin(), greed.end());
		std::sort(cookies.begin(), cookies.end());
		int greedCounter = 0;
		int cookieCounter = 0;
		int contentChildren = 0;
		while (greedCounter < greed.size() && cookieCounter < cookies.size()) {
			while (cookieCounter < cookies.size()
					&& cookies[cookieCounter] < greed[greedCounter]) {
				cookieCounter++;
			}
			if (cookieCounter < cookies.size()) {
				contentChildren++;
                cookieCounter++;
			}
            greedCounter++;
		}
		return contentChildren;
	}
};
