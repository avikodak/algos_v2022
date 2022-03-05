/****************************************************************************************************************************************************
 *  File Name                   : SortedArrayToTree.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/SortedArrayToTree.cpp
 *  Created on                  : Mar 5, 2022 :: 1:59:06 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() :
			val(0), left(nullptr), right(nullptr) {
	}
	TreeNode(int x) :
			val(x), left(nullptr), right(nullptr) {
	}
	TreeNode(int x, TreeNode *left, TreeNode *right) :
			val(x), left(left), right(right) {
	}
};

class Solution {
private:
	TreeNode* sortedArrayToBSTUtil(std::vector<int> &userInput, int start,
			int end) {
		if (start > end) {
			return nullptr;
		}
		int mid = start + (end - start) / 2;
		TreeNode *ptr = new TreeNode(userInput[mid]);
		ptr->left = sortedArrayToBSTUtil(userInput, start, mid - 1);
		ptr->right = sortedArrayToBSTUtil(userInput, mid + 1, end);
		return ptr;
	}

public:
	TreeNode* sortedArrayToBST(std::vector<int> &nums) {
		return sortedArrayToBSTUtil(nums, 0, nums.size() - 1);
	}
};
