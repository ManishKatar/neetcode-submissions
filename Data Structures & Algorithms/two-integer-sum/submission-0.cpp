#include <vector>
#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //create a hash map 
        unordered_map<int , int> seen;
        //iterate im hash map to find compliment
      
        for(int i=0 ; i<nums.size() ; i++){
            int complement = target - nums[i]; 
            if(seen.find(complement) != seen.end()){
                // if complement alreadyin the map we csn find it 
                return {seen[complement] , i} ;
            }
        //otherwise

        seen[nums[i]] =i;
          




        } 
        return {} ;

        
    }
};
