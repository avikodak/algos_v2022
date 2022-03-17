/****************************************************************************************************************************************************
 *  File Name                   : ConvertToHexadecimal.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/math/ConvertToHexadecimal.cpp
 *  Created on                  : Mar 14, 2022 :: 5:32:19 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/convert-a-number-to-hexadecimal/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::string toHex(int num) {
        if(num == 0) {
            return "0";
        }
		std::map<int, char> valueToHexLiteral;
		for (int counter = 0; counter < 16; counter++) {
			if (counter < 10) {
				valueToHexLiteral[counter] = '0' + counter;
			} else {
				valueToHexLiteral[counter] = 'a' + counter - 10;
			}
		}
		uint32_t value = num;
		std::string result;
		while (value) {
			result += valueToHexLiteral[value % 16];
			value /= 16;
		}
        std::reverse(result.begin(), result.end());
		return result;
	}
};
