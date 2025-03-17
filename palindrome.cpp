// Alan Zamora, 03/17/2025, Palindrome Number problem

// Given an integer x, return true if x is a , and false otherwise.

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string newNum;
        string num = to_string(x);
        int length = to_string(x).length();

        for (int i = length - 1; i >= 0; i--)
        {
            newNum.append(num.substr(i, 1));
        }

        if (num.compare(newNum) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    int num;

    cout << "Enter Number:";
    cin >> num;
    Solution result;

    bool sol = result.isPalindrome(num);

    if (sol)
    {
        cout << "The number " << num << " is a palindrome";
    }
    else
    {
        cout << "The number " << num << " is not a palindrome";
    }
}
