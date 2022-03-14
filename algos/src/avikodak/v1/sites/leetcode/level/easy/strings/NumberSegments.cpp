/****************************************************************************************************************************************************
 *  File Name                   : NumberSegments.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/strings/NumberSegments.cpp
 *  Created on                  : Mar 13, 2022 :: 8:16:13 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/number-of-segments-in-a-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int countSegments(std::string userInput) {
		int startCrawler = 0;
		int rearCrawler;
		int segmentCount = 0;
		while (startCrawler < userInput.size()) {
			while (startCrawler < userInput.size()
					&& userInput[startCrawler] == ' ') {
				startCrawler++;
			}
			rearCrawler = startCrawler;
			while (rearCrawler < userInput.size()
					&& userInput[rearCrawler] != ' ') {
				rearCrawler++;
			}
			if(startCrawler < userInput.size()) {
				if(rearCrawler - startCrawler > 0) {
					segmentCount++;
				}
			}
			startCrawler = rearCrawler;
		}
		return segmentCount;
	}
};
