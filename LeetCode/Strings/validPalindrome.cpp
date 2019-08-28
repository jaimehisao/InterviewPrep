/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Note: For the purpose of this problem, we define empty string as valid palindrome.

NOT COMPLETED
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std; 

bool isPalindrome(string s) {
        for(int i = 0; i < s.length(); i++){
            if(s[i] != s[s.length()-i-1]){
                return false;
            }
        }
        return true;
    }

int main(){
    string word;
    cin>>word;
    cout<<isPalindrome(word);

    return 0;
}