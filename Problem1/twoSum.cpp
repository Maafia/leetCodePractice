#include <map>
#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> returning;  //Vector containing indices of the twoSum Solution.
        int size = nums.size(); //Size of nums array
        int difference;         //Variable holding onto the difference
        unordered_map<int, int> mapper;
        
        for(int i = 0 ; i < size ; i++){
            difference = target - nums[i];
            if(mapper.find(difference) != mapper.end() && mapper.find(difference)->second != i){
                returning.push_back(i);
                returning.push_back(mapper.find(difference)->second);
                return returning;
            }
            mapper[nums[i]] = i;
        }
        return returning;

    }
};
