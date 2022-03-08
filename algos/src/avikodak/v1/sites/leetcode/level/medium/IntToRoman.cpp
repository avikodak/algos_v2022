/****************************************************************************************************************************************************
 *  File Name                   : IntToRoman.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/IntToRoman.cpp
 *  Created on                  : Mar 6, 2022 :: 9:39:07 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/integer-to-roman/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

struct romanLiteral {
	int value;
	std::string literal;
};

class Solution {
public:
	std::string intToRoman(int num) {
		std::vector<romanLiteral> romanLiterals { { 1, "I" }, { 4, "IV" }, { 5,
				"V" }, { 9, "IX" }, { 10, "X" }, { 40, "XL" }, { 50, "L" }, {
				90, "XC" }, { 100, "C" }, { 400, "CD" }, { 500, "D" }, { 900,
				"CM" }, { 1000, "M" } };
		std::string result = "";

		for (int counter = romanLiterals.size() - 1; counter >= 0; counter--) {
			int div = num / romanLiterals[counter].value;
			while (div) {
				result += romanLiterals[counter].literal;
				div--;
			}
			num = num % romanLiterals[counter].value;
		}

		return result;
	}
};
