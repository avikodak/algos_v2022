/****************************************************************************************************************************************************
 *  File Name                   : BinaryTreeToStr.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/trees/BinaryTreeToStr.cpp
 *  Created on                  : Mar 18, 2022 :: 7:49:23 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/construct-string-from-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    std::string result;

    void tree2strUtil(TreeNode* root) {
        if(root == nullptr) {
            return;
        }

        result += std::to_string(root->val);
        if(root->left == nullptr && root->right == nullptr) {
            return;
        }
        result += "(";
        tree2str(root->left);
        result += ")";

        if(root->right != nullptr) {
         result += "(";
        tree2str(root->right);
        result += ")";
        }
    }

public:
    std::string tree2str(TreeNode* root) {
        tree2strUtil(root);
        return result;
    }
};
