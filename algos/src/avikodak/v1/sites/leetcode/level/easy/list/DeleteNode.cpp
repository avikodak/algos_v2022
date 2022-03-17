/****************************************************************************************************************************************************
 *  File Name                   : DeleteNode.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/list/DeleteNode.cpp
 *  Created on                  : Mar 14, 2022 :: 6:04:28 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/delete-node-in-a-linked-listlink
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

/**
 * Definition for singly-linked list.
 */

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

class Solution {
public:
	void deleteNode(ListNode *node) {
		node->val = node->next->val;
		node->next = node->next->next;
	}
};
