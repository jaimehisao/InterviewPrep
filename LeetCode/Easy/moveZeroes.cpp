#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int numS = nums.size();
        for(int i = 0; i < numS; i++){
            if(nums.at(i) == 0){
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                numS--;
                i--;
            }
        }
    }



int main(){

    vector<int> test;

    test.push_back(0);
    test.push_back(1);
    test.push_back(0);
    test.push_back(0);
    test.push_back(3);
    test.push_back(12);

    moveZeroes(test);

    for(int i = 0; i < test.size(); i++){
        cout<<test.at(i)<<endl;
    }

    return 0;
}