/****************************************************************************************************************************************************
 *  File Name                   : DetectCapital.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/strings/DetectCapital.cpp
 *  Created on                  : Mar 18, 2022 :: 6:32:45 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/detect-capital/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool detectCapitalUse(std::string word) {
		if (word.size() <= 1) {
			return true;
		}
		bool shouldBeCapital;
        int counter;
		if (std::islower(word[0]) != 0) {
			shouldBeCapital = false;
            counter = 1;
		} else {
			if (std::islower(word[1]) != 0) {
				shouldBeCapital = false;
			} else {
				shouldBeCapital = true;
			}
            counter = 2;
		}
        for (; counter < word.size(); counter++) {
            if (shouldBeCapital != (std::isupper(word[counter]) != 0)) {
				return false;
			}
		}
		return true;
	}
};
