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
        
        vector<int> pair;  //Vector containing indices of the twoSum Solution.
        int size = nums.size(); //Size of nums array
        int difference;         //Variable holding onto the difference
        unordered_map<int, int> mapper;                 //Creating map

        for(int i = 0 ; i < size ; i++){                //For loop to go through array size
            difference = target - nums[i];              //Finding the difference between numbers and target
            if(mapper.find(difference) != mapper.end() && mapper.find(difference)->second != i){    //If there is a difference in the map, and maps not finished, 
                                                                                                    //AND map finds a difference with the second pair in map, and as long as second is not i
                pair.push_back(i);                                                             //push contents of i in the vector called "pair"
                pair.push_back(mapper.find(difference)->second);                               //push contents of the second variable in vector as well
                return pair;                                                                   //return pair
            }
            mapper[nums[i]] = i;                                                                //adding to map. key of the map is equal to the value of nums at i
        }
        return pair;                                                                            //returns pair.

    }
};
