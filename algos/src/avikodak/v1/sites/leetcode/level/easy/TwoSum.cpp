/****************************************************************************************************************************************************
 *  File Name                   : TwoSum.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/TwoSum.cpp
 *  Created on                  : Mar 2, 2022 :: 6:58:14 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/two-sum/
 ****************************************************************************************************************************************************/



/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, int> auxSpace;
        std::vector<int> twoSumResult;
        for(int counter = 0;counter < nums.size();counter++) {
            auto result = auxSpace.find(target - nums[counter]);
            if(result != auxSpace.end()) {
            	twoSumResult.push_back(result->second);
            	twoSumResult.push_back(counter);
                return twoSumResult;
            } else {
                auxSpace[nums[counter]] = counter;
            }
        }
        return twoSumResult;
    }
};
