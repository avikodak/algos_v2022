/****************************************************************************************************************************************************
 *  File Name                   : AddBinary.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/AddBinary.cpp
 *  Created on                  : Mar 4, 2022 :: 7:47:24 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/add-binary/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::string addBinary(std::string first, std::string second) {
		int firstCrawler = first.size() - 1;
		int secondCrawler = second.size() - 1;
		std::string result;
		int sum;
		int carry = 0;
		while (firstCrawler >= 0 || secondCrawler >= 0) {
            sum = carry;
			if (firstCrawler >= 0) {
				sum += first[firstCrawler--] - '0';
			}
            if (secondCrawler >= 0) {
				sum += second[secondCrawler--] - '0';
			}
			result += std::to_string(sum % 2);
			carry = sum / 2;
		}
        while(carry) {
            result += std::to_string(carry % 2);
            carry /= 2;
        }
		std::reverse(result.begin(), result.end());
		return result;
	}
};
