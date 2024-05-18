#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    vector<int>nums={-1,1,3,0,-3};
    vector<int>res;
    int product=1;
    int zero=0;
    for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            continue;
            product*=nums[i];
        }


    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            res.push_back(product);
        }
        else{
        res.push_back(product/nums[i]);

        }
    }

    for(auto i:res){
        cout<<i<<endl;
    }


}