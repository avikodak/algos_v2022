/****************************************************************************************************************************************************
 *  File Name                   : CanPlaceFlowers.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/CanPlaceFlowers.cpp
 *  Created on                  : Mar 21, 2022 :: 8:43:06 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/can-place-flowers/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool canPlaceFlowers(std::vector<int> &flowerbed, int n) {
        if(n == 0) {
            return true;
        }
		for (int counter = 0; counter < flowerbed.size() && n > 0; counter++) {
			if (flowerbed[counter] == 0) {
				bool canPlaceFlower = true;
				if (counter - 1 >= 0 && flowerbed[counter - 1] != 0) {
					canPlaceFlower = false;
				}
				if (counter + 1 < flowerbed.size()
						&& flowerbed[counter + 1] != 0) {
					canPlaceFlower = false;
				}
				if (canPlaceFlower) {
					n--;
					flowerbed[counter] = 1;
				}
			}
		}
		return n == 0;
	}
};
