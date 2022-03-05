/****************************************************************************************************************************************************
 *  File Name                   : ClimbingStairs.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/ClimbingStairs.cpp
 *  Created on                  : Mar 4, 2022 :: 7:56:47 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/


/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int climbStairs(int n) {
        std::vector<int> auxSpace;
        auxSpace.push_back(1);
        auxSpace.push_back(2);
        for(int counter = 2;counter < n;counter++) {
            auxSpace.push_back(auxSpace[counter - 1] + auxSpace[counter-2]);
        }
        return auxSpace[n-1];
    }
};
