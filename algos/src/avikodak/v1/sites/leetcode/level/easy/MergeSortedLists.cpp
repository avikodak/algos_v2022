/****************************************************************************************************************************************************
 *  File Name                   : MergeSortedLists.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/MergeSortedLists.cpp
 *  Created on                  : Mar 3, 2022 :: 11:05:43 AM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
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
	ListNode* mergeTwoLists(ListNode *firstList, ListNode *secondList) {
		ListNode *mergedHead = new ListNode();
		ListNode *crawler = mergedHead;
		while (firstList != nullptr && secondList != nullptr) {
			if (firstList->val < secondList->val) {
				crawler->next = firstList;
				firstList = firstList->next;
			} else {
				crawler->next = secondList;
				secondList = secondList->next;
			}
            crawler = crawler->next;
		}
		if (firstList != nullptr) {
			crawler->next = firstList;
		}
		if (secondList != nullptr) {
			crawler->next = secondList;
		}
		return mergedHead->next;
	}
};

