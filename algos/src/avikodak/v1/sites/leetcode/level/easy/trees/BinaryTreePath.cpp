/****************************************************************************************************************************************************
 *  File Name                   : BinaryTreePath.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/trees/BinaryTreePath.cpp
 *  Created on                  : Mar 13, 2022 :: 9:32:12 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-paths/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void removeCurrentValue(std::string &path) {
        int counter = path.size() - 1;
        while(counter >= 0 && path[counter] != '>') {
            path.pop_back();
            counter--;
        }
        if(counter >= 0) {
            path.pop_back();
            path.pop_back();
        }
    }

	void binaryTreePathsUtil(TreeNode *root, std::string &path,
			std::vector<std::string> &paths) {
		if (root == nullptr) {
			return;
		}
        if(path == "") {
            path += std::to_string(root->val);
        } else {
		    path += "->" + std::to_string(root->val);
        }
		if (root->left == nullptr && root->right == nullptr) {
			paths.push_back(path);
            std::cout << path << std::endl;
            removeCurrentValue(path);
            std::cout << path << std::endl;
			return;
		}
		binaryTreePathsUtil(root->left, path, paths);
		binaryTreePathsUtil(root->right, path, paths);
        removeCurrentValue(path);
	}
public:
	std::vector<std::string> binaryTreePaths(TreeNode *root) {
		std::vector<std::string> paths;
		std::string path = "";
		binaryTreePathsUtil(root, path, paths);
		return paths;
	}
};
