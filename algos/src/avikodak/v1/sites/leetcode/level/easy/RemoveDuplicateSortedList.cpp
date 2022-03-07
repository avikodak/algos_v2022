/****************************************************************************************************************************************************
 *  File Name                   : RemoveDuplicateSortedList.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/RemoveDuplicateSortedList.cpp
 *  Created on                  : Mar 6, 2022 :: 6:30:25 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

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
	ListNode* deleteDuplicates(ListNode *head) {
		ListNode *start = head, *rear;
		while (start != nullptr && start->next != nullptr) {
			rear = start->next;
			while (rear != nullptr && rear->val == start->val) {
				start->next = rear->next;
                rear = rear->next;
			}
            start = start->next;
		}
		return head;
	}
};
