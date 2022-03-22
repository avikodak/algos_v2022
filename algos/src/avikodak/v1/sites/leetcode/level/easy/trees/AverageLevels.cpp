/****************************************************************************************************************************************************
 *  File Name                   : AverageLevels.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/trees/AverageLevels.cpp
 *  Created on                  : Mar 20, 2022 :: 7:21:01 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {

public:
	std::vector<double> averageOfLevels(TreeNode *root) {
		std::vector<double> result;
		std::queue<TreeNode*> auxSpace;
		int totalNodes;
		double currentSum = 0;
        auxSpace.push(root);
		while (!auxSpace.empty()) {
			totalNodes = auxSpace.size();
			currentSum = 0;
			for (int counter = 0; counter < totalNodes; counter++) {
				currentSum += auxSpace.front()->val;
				if (auxSpace.front()->left != nullptr) {
					auxSpace.push(auxSpace.front()->left);
				}
				if (auxSpace.front()->right != nullptr) {
					auxSpace.push(auxSpace.front()->right);
				}
				auxSpace.pop();
			}
			result.push_back(currentSum / (double) totalNodes);
		}
		return result;
	}
};
