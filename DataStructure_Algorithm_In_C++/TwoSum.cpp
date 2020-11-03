//
//  TwoSum.cpp
//  DataStructure_Algorithm_In_C++
//
//  Created by Nguyen, Long on 11/4/20.
//

#include "TwoSum.hpp"
#include <map>

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    map<int, int> hashMap;
    for(int i = 0; i < nums.size(); ++i) {
        if (!hashMap.count(nums[i])) {
            hashMap[nums[i]] = i;
        
            int diff = target - nums[i];
            
            if (hashMap.count(diff) && (diff != nums[i])) {
                result.push_back(hashMap[nums[i]]);
                result.push_back(hashMap[diff]);
                
                return result;
            }
        } else {
            int diff = target - nums[i];
            
            if (diff == nums[i]) {
                result.push_back(hashMap[nums[i]]);
                result.push_back(i);
                
                return result;
            }
        }
    }
    
    return result;
}
