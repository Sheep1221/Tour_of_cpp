#include <iostream>
#include <vector>

using namespace std;

int sum(const vector<int>& nums){
    int sum = 0;
    // since the nums is const, so it cannot be changed
    //nums[5] = 10;
    for(auto& num:nums){
        sum += num;
    }
    return sum;
}

int main(){
    vector<int> nums;
    for(int i=0; i<20; i++){
        nums.push_back(i);
    }
    cout<< sum(nums)<< "\n";
    return 0;
}

