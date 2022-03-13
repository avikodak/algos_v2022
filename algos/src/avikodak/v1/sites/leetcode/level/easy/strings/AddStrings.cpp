/****************************************************************************************************************************************************
 *  File Name                   : AddStrings.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/strings/AddStrings.cpp
 *  Created on                  : Mar 12, 2022 :: 7:54:36 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/add-strings/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::string addStrings(std::string first, std::string second) {
		std::string result;
		int firstCrawler = first.size() - 1;
		int secondCrawler = second.size() - 1;
		int carry = 0;
		int sum;
		while (firstCrawler >= 0 || secondCrawler >= 0) {
			sum = carry;
			if (firstCrawler >= 0) {
				sum += first[firstCrawler--] - '0';
			}
			if (secondCrawler >= 0) {
				sum += second[secondCrawler--] - '0';
			}
			result += (sum % 10) + '0';
			carry = sum / 10;
		}
		while (carry) {
			result += (carry % 10) + '0';
			carry /= 10;
		}
		std::reverse(result.begin(), result.end());
		return result;
	}
};

