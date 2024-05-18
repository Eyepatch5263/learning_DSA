#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={4,2,5,7};
    int arr[nums.size()];
    int i=0,j=1;
    for(int k=0;k<nums.size();k++){
        if(nums[k]%2==0){
            arr[i]=nums[k];
            i+=2;
        }
        else{
            arr[j]=nums[k];
            j+=2;
        }
    }
    for(int i=0;i<nums.size();i++){
        cout<<arr[i]<<endl;
    }
    
}