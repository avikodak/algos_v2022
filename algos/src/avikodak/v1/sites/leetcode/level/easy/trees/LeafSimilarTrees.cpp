/****************************************************************************************************************************************************
 *  File Name                   : LeafSimilarTrees.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/trees/LeafSimilarTrees.cpp
 *  Created on                  : Mar 18, 2022 :: 6:29:01 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/leaf-similar-trees
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	void leafSimilarUtil(TreeNode *root, std::vector<int> &values) {
		if (root == nullptr) {
			return;
		}
		if (root->left == nullptr && root->right == nullptr) {
			values.push_back(root->val);
			return;
		}
		leafSimilarUtil(root->left, values);
		leafSimilarUtil(root->right, values);
	}
public:
	bool leafSimilar(TreeNode *root1, TreeNode *root2) {
		std::vector<int> firstLeaves;
		std::vector<int> secondLeaves;
		leafSimilarUtil(root1, firstLeaves);
		leafSimilarUtil(root2, secondLeaves);
		if (firstLeaves.size() != secondLeaves.size()) {
			return false;
		}
		for (int counter = 0; counter < firstLeaves.size(); counter++) {
			if (firstLeaves[counter] != secondLeaves[counter]) {
				return false;
			}
		}
		return true;
	}
};
