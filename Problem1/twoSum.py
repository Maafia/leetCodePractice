from typing import Hashable, Mapping


class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        pair = []           #creating a list called pair

        size = len(nums)    #taking in the length of nums and storing it in size

        mapping = {}        #Dictionary to be used as if it was a map

        for i in range(size):   #For loop transversing the range of size
            difference = target - nums[i]   #Differenece is found from target - nums[i]
            if mapping.has_key(difference): #if the key of difference is found, continue with if statement
                pair.append(i)              #Append the index (i) to the pair list
                pair.append(mapping.get(difference))        #append the value of map with difference
                return pair                                 #returning pair to the upmost updated pair

            mapping[nums[i]] = i            #fills up the map with new indexes and values

        return pair                         #returns last instance of pair.




