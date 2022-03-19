/****************************************************************************************************************************************************
 *  File Name                   : RelativeRanks.cpp
 *  File Location               : /algos/src/avikodak/v1/sites/leetcode/level/easy/arrays/RelativeRanks.cpp
 *  Created on                  : Mar 18, 2022 :: 6:56:31 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/relative-ranks/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class ValueIndex {
public:
	int index;
	int value;

    ValueIndex() {

    }

	ValueIndex(int index, int value) :
			index(index), value(value) {

	}

	bool operator()(std::shared_ptr<ValueIndex> first,
			std::shared_ptr<ValueIndex> second) {
		return first->value < second->value;
	}
};

class Solution {
public:
	std::vector<std::string> findRelativeRanks(std::vector<int> &score) {
		std::priority_queue<std::shared_ptr<ValueIndex>,
				std::vector<std::shared_ptr<ValueIndex>>, ValueIndex> queue;
		for (int counter = 0; counter < score.size(); counter++) {
			queue.push(std::make_shared<ValueIndex>(counter, score[counter]));
		}
        std::vector<std::string> results(score.size(), "");
        int place = 1;
        while(!queue.empty()) {
            auto element = queue.top();
            if(place == 1) {
                results[element->index] = "Gold Medal";
                place++;
            } else if(place == 2) {
                results[element->index] = "Silver Medal";
                place++;
            } else if(place == 3) {
                results[element->index] = "Bronze Medal";
                place++;
            } else {
                results[element->index] = std::to_string(place);
                place++;
            }
            queue.pop();
        }
        return results;
	}
};

