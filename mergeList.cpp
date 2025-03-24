// Alan Zamora, 03/18/2025, Merged List problem

/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.



*/

#include <iostream>
#include <string>

using namespace std;

struct ListNode
{
    int val;
    // next pointer
    ListNode *next;
    // constructors
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
// two parameters ListNode list 1 and 2
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        // if list1 empty return list2
        if (list1 == nullptr)
        {
            return list2;
        }
        //if list2 empty return list1
        if (list2 == nullptr)
        {
            return list1;
        }
        //if list2 val is greater than list1 val than it needs to go after in the list
        if (list1->val <= list2->val)
        {
            //this line of code executes a recursive loop that recurses until one of the lists is empty returning back the highest value 
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

int main()
{

    Solution result;
    ListNode* newNode1 = new ListNode(5);
    ListNode* newNode2 = new ListNode(7);
    ListNode* sol = new ListNode();

    sol = result.mergeTwoLists(newNode1,newNode2);
    cout << sol;
}


