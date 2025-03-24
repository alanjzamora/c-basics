//Alan Zamora 03/24/2025
/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

    Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
    Return k.



*/




#include <vector>
#include <iostream>

using namespace std;


class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int count = 0;
         
            
            for(int i =0; i < nums.size(); i++){
                if(nums[i] != val){
                    nums[count] = nums[i];
                    count++;
                }
            }

            return count;
        }
    };


    int main(){

        vector<int> nums = {2,4,6,7,2};
        int val = 2;

        Solution sol;
        //gets number of non val numbers
        int count = sol.removeElement(nums,val);

        cout << "Count: " << count;
        cout << "\n";

        // prints numbers not 
        for(int i = 0; i < count; i++){
            cout << nums[i] << " ";
       
        }

        


    }