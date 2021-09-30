package Problem1;

import java.util.*;

public class twoSum {
    public int[] twosum(int[] nums, int target) {   
        
        int pair[] = new int[2];            //creating array holding 2 elements calling it pair

        int size = nums.length;             //size of nums array

        int difference;                     //variable holding the difference

        HashMap<Integer, Integer> mapper = new HashMap<>(); //creating map
        for(int i = 0; i < size; i++){                      //looping through the array size
            difference = target - nums[i];                  //finding the difference between numbers and target
            if(mapper.containsKey(difference)){             //if map has the difference we are looking for
                pair[0] = i;                                //Updating first index with whatever i holds
                pair[1] = mapper.get(difference);           //Updating second index with the difference
                return pair;                                //returns pai
            }
            mapper.put(nums[i], i);                         //Inserts the value and index into the map
        }
        return pair;                                        //return pair array
    }
}
