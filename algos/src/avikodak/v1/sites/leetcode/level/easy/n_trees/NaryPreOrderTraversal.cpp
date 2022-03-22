/****************************************************************************************************************************************************
 *  File Name                   : NaryPreOrderTraversal.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/n_trees/NaryPreOrderTraversal.cpp
 *  Created on                  : Mar 21, 2022 :: 9:13:19 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

/*
 // Definition for a Node.
 */
class Node {
public:
	int val;
	std::vector<Node*> children;

	Node() {
	}

	Node(int _val) {
		val = _val;
	}

	Node(int _val, std::vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};

class Solution {
private:
	void preorderUtil(Node *root, std::vector<int> &result) {
		if (root == nullptr) {
			return;
		}
		result.push_back(root->val);
		for (int counter = 0; counter < root->children.size(); counter++) {
			preorderUtil(root->children[counter], result);
		}
	}
public:
	std::vector<int> preorder(Node *root) {
		std::vector<int> result;
		preorderUtil(root, result);
		return result;
	}
};
