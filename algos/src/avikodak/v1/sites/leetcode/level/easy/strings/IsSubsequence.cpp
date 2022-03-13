/****************************************************************************************************************************************************
 *  File Name                   : IsSubsequence.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/strings/IsSubsequence.cpp
 *  Created on                  : Mar 12, 2022 :: 8:06:38 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/is-subsequence/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool isSubsequence(std::string first, std::string second) {
		int firstCrawler = 0, secondCrawler = 0;
		while (firstCrawler < first.size() && secondCrawler < second.size()) {
			if (first[firstCrawler] == second[secondCrawler]) {
				firstCrawler++;
				secondCrawler++;
			} else {
				secondCrawler++;
			}
		}
		return firstCrawler == first.size();
	}
};
