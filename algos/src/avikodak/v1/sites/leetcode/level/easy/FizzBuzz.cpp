/****************************************************************************************************************************************************
 *  File Name                   : FizzBuzz.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/FizzBuzz.cpp
 *  Created on                  : Mar 6, 2022 :: 7:40:41 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/fizz-buzz/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	std::vector<std::string> fizzBuzz(int n) {
		std::vector<std::string> result;
		for (int counter = 1; counter <= n; counter++) {
			if (counter % 15 == 0) {
				result.push_back("FizzBuzz");
			} else if (counter % 5 == 0) {
				result.push_back("Buzz");
			} else if (counter % 3 == 0) {
				result.push_back("Fizz");
			} else {
				result.push_back(std::to_string(counter));
			}
		}
		return result;
	}
};

class SolutionV2 {
public:
	std::vector<std::string> fizzBuzz(int n) {
		std::map<int, std::string> divisors; // Use ordered map
		std::map<int, std::string>::iterator itToDivisors;
		divisors[3] = "Fizz";
		divisors[5] = "Buzz";
		std::vector<std::string> result;
		for (int counter = 1; counter <= n; counter++) {
			std::string value;
			for (itToDivisors = divisors.begin();
					itToDivisors != divisors.end(); itToDivisors++) {
				if (counter % itToDivisors->first == 0) {
					value += itToDivisors->second;
				}
			}
			if (value.empty()) {
				value = std::to_string(counter);
			}
			result.push_back(value);
		}
		return result;
	}
};

