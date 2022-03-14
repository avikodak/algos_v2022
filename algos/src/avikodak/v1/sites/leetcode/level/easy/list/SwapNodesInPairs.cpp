/****************************************************************************************************************************************************
 *  File Name                   : SwapNodesInPairs.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/list/SwapNodesInPairs.cpp
 *  Created on                  : Mar 13, 2022 :: 8:57:43 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/swap-nodes-in-pairs
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
	ListNode() :
			val(0), next(nullptr) {
	}
	ListNode(int x) :
			val(x), next(nullptr) {
	}
	ListNode(int x, ListNode *next) :
			val(x), next(next) {
	}
};

class Solution {
public:
	ListNode* swapPairs(ListNode *head) {
		if (head == nullptr || head->next == nullptr) {
			return head;
		}
		ListNode *resultHead = nullptr;
		ListNode *temp;
		ListNode *prev = nullptr;
		while (head != nullptr && head->next != nullptr) {
			if (resultHead == nullptr) {
				resultHead = head->next;
			}
			temp = head->next;
			head->next = temp->next;
			temp->next = head;
			if (prev != nullptr) {
				prev->next = temp;
			}
			prev = head;
			head = head->next;
		}
		return resultHead;
	}
};

