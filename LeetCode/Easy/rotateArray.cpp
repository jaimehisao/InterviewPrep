/* 
Given an array, rotate the array to the right by k steps, where k is non-negative.
*/

#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
        
        for(int i = 0; i < k; i++){
            nums.insert(nums.begin(),nums.at(nums.size()-1));
            nums.pop_back();
        }

    }



int main(){




    return 0;
}