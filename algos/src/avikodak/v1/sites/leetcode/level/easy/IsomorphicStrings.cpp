/****************************************************************************************************************************************************
 *  File Name                   : IsomorphicStrings.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/IsomorphicStrings.cpp
 *  Created on                  : Mar 6, 2022 :: 6:52:27 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/isomorphic-strings/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool isIsomorphic(std::string first, std::string second) {
		if (first.size() != second.size()) {
			return false;
		}
		int firstCrawler = 0, secondCrawler = 0;
		std::map<char, char> firstMap;
		std::map<char, char> secondMap;
		while (firstCrawler < first.size()) {
			if (firstMap.find(first[firstCrawler]) == firstMap.end()) {
				if (secondMap.find(second[secondCrawler]) == secondMap.end()) {
					firstMap[first[firstCrawler]] = second[secondCrawler];
					secondMap[second[secondCrawler]] = second[secondCrawler];
				} else {
					return false;
				}
			} else {
				if (second[secondCrawler] != firstMap[first[firstCrawler]]) {
					return false;
				}
			}
			firstCrawler++;
			secondCrawler++;
		}
		return true;
	}
};
