#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
        
        int arraySize = nums.size();

        for(int i = 0; i < nums.size()-1; i++){
            if(nums.at(i) == nums.at(i+1)){
                arraySize--;
                nums.erase(nums.begin()+i);
                i-=1;
            }
        }
        return arraySize;
    }

int main(){

    vector<int> nums;

    //Test values for the Array
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(6);
    nums.push_back(7);

    int theSize = removeDuplicates(nums);
    cout<<theSize;
}
