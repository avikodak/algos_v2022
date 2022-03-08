/****************************************************************************************************************************************************
 *  File Name                   : IntersectionSill.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/IntersectionSill.cpp
 *  Created on                  : Mar 6, 2022 :: 6:54:41 PM
 *  Author                      : avikodak
 *  URL                         : TODO
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
private:
	int lengthofSill(ListNode *head) {
		int length = 0;
		while (head != nullptr) {
			length++;
			head = head->next;
		}
		return length;
	}
public:
	ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
		int lengthOfA = lengthofSill(headA);
		int lengthOfB = lengthofSill(headB);
		int diff = lengthOfA - lengthOfB;
		if (diff > 0) {
			while (diff) {
				headA = headA->next;
				diff--;
			}
		} else {
			diff *= -1;
			while (diff) {
				headB = headB->next;
				diff--;
			}
		}
		while (headA != headB) {
			headA = headA->next;
			headB = headB->next;
		}
		return headA;
	}
};
