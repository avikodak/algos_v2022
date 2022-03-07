/****************************************************************************************************************************************************
 *  File Name                   : PlusOne.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/PlusOne.cpp
 *  Created on                  : Mar 4, 2022 :: 7:46:56 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::vector<int> plusOne(std::vector<int> &digits) {
		int carry = 1;
		int sum;
		for (int counter = digits.size() - 1; counter >= 0; counter--) {
			sum = digits[counter] + carry;
			digits[counter] = sum % 10;
			carry = sum / 10;
            if(carry == 0) {
                return digits;
            }
		}
		while (carry) {
			int digit = carry % 10;
			digits.insert(digits.begin(), digit);
			carry /= 10;
		}
		return digits;
	}
};
