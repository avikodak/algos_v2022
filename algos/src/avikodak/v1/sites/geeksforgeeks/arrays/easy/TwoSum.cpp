/****************************************************************************************************************************************************
 *  File Name                   : TwoSum.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/geeksforgeeks/arrays/easy/TwoSum.cpp
 *  Created on                  : Feb 20, 2022 :: 6:24:40 PM
 *  Author                      : avikodak
 *  Testing Status              : TODO
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"


std::pair<int, int> getPairForSum(std::vector<int> &userInput, int targetSum) {
    if (userInput.size() < 2) {
        throw std::invalid_argument("has invalid number of input");
    }
    std::pair<int, int> result;
    std::sort(userInput.begin(), userInput.end());
    int front = 0, rear = userInput.size() - 1;
    int currentSum = 0;
    while (front < rear) {
        currentSum = userInput[front] + userInput[rear];
        if (currentSum == targetSum) {
            return std::make_pair(userInput[front], userInput[rear]);
        } else if (currentSum < targetSum) {
            front++;
        } else {
            rear--;
        }
    }
    return result;
}

std::pair<int, int> getPairForSumON(std::vector<int> &userInput, int targetSum) {
    std::map<int, int> auxSpace;
    std::map<int, int>::iterator itToAuxSpace;
    std::pair<int, int> result;
    for (int counter = 0; counter < userInput.size(); counter++) {
        itToAuxSpace = auxSpace.find(targetSum - userInput[counter]);
        if(itToAuxSpace != auxSpace.end()) {
        	return std::make_pair(userInput[counter], targetSum - userInput[counter]);
        }
    }
    return result;

}
