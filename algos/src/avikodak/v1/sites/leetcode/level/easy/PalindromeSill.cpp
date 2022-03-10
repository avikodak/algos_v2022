/****************************************************************************************************************************************************
 *  File Name                   : PalindromeSill.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/PalindromeSill.cpp
 *  Created on                  : Mar 9, 2022 :: 9:06:40 PM
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
private:
	ListNode* reverseSill(ListNode *head, ListNode **revHead) {
		if (head == nullptr) {
			return nullptr;
		}
        if (head->next == nullptr) {
			*revHead = new ListNode(head->val);
            return *revHead;
		}
		ListNode *rest = reverseSill(head->next, revHead);
		ListNode *newNode = new ListNode(head->val);
        newNode->next = nullptr;
        rest->next = newNode;
		return newNode;
	}

public:
	bool isPalindrome(ListNode *head) {
        ListNode *revHead = nullptr;
		reverseSill(head, &revHead);
		while (head != nullptr) {
			if (head->val != revHead->val) {
				return false;
			}
			head = head->next;
			revHead = revHead->next;
		}
		return true;
	}
};

