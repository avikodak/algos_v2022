/****************************************************************************************************************************************************
 *  File Name                   : LemonadeChange.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/LemonadeChange.cpp
 *  Created on                  : Mar 21, 2022 :: 7:54:29 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/lemonade-change/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool lemonadeChange(std::vector<int> &bills) {
		int fiveCount = 0, tenCount = 0, twentyCount = 0;
		for (int counter = 0; counter < bills.size(); counter++) {
			if (bills[counter] == 5) {
				fiveCount++;
			} else if (bills[counter] == 10 && fiveCount > 0) {
				tenCount++;
				fiveCount--;
			} else if(bills[counter] == 20){
				if (tenCount > 0 && fiveCount > 0) {
					twentyCount++;
					fiveCount--;
					tenCount--;
				} else if (fiveCount >= 3) {
					fiveCount -= 3;
				} else {
					return false;
				}
			} else {
                return false;
            }
		}
		return true;
	}
};
