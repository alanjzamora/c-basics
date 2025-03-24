//Alan Zamora 03/24/2025

/*

Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal
consisting of non-space characters only.


*/


#include <iostream>
#include <string>

using namespace std;

 
    class Solution {
        public:
            int lengthOfLastWord(string s) {
                 // if string empty return nothing
                 if(s.empty()){
                    return 0;
                }

                // length variable to be returned and n accesses last element in string
                int length = 0;
                int n = s.length() -1;

                // remove white space behind last word
                while(n>= 0 && s[n] == ' '){
                    n--;

                }
                //access every letter of the last word adding to its length until the word ends
                while(n>= 0 && s[n] != ' '){
                    length++;
                    n--;
                }


                return length;

            }

        };




int main(){

string s = "Hello World";

Solution sol;
//prints length of last word
cout << sol.lengthOfLastWord(s);


}