/****************************************************************************************************************************************************
 *  File Name                   : MiddleList.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/list/MiddleList.cpp
 *  Created on                  : Mar 18, 2022 :: 8:34:22 PM
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
	ListNode* middleNode(ListNode *head) {
		ListNode *fastPtr = head, *slowPtr = head;
		while (fastPtr != nullptr && fastPtr->next != nullptr) {
			fastPtr = fastPtr->next->next;
			slowPtr = slowPtr->next;
		}
		return slowPtr;
	}
};

