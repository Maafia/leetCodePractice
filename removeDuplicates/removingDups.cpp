#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.size() == 0){        //in case nums is empty, return 0
           return 0;
       }
    else{                           //Any other case.
        int i = 0;                  
        //Using two pointers, called i, and j, traversing through array.
        
        for(int j = 1; j < nums.size(); j++){  
            
            if(nums[j] != nums[i]){     //When reaching a new number
                
                i++;                    //increase i
                
                nums[i] = nums[j];      //set the i point to the new number
            }
        }
        return i + 1;       //returning i + 1 because i does not count the unique value at position 0 of array
    }
        
    }
};