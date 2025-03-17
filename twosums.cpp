// Alan Zamora, 03/17/2025, TwoSum problem

/*Problem:Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/




#include <vector>
#include <iostream>
using namespace std;

//solution class
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target) //return type vector<int> with two parameter
    {

       
        //nested for loop 
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {   
                if (nums[i] + nums[j] == target)
                {
                    return {i, j}; //if solution found return values and end run
                }
            }
        }

        return {}; // if no solution found then return an empty vector
    }
};

//main function
int main()
{
// target number and 
vector<int> nums{1,2,4};
int target = 6;

//Solution object named result
Solution result;
vector<int> sol = {};

//gets solution from twoSum function
 sol =  result.twoSum(nums,target);

 //prints out solution
if(sol.empty()){
    cout << "No solution found";
}
else{
cout << "The indicies are " << sol[0] << "," << sol[1];
}



}