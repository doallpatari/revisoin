#include<bits/stdc++.h>
using namespace std;

// O(nlog(n)) sorting
void sorting(vector<int>&nums){
    sort(nums.begin(), nums.end());
    // return nums;
}

// frequency arr count
void count(vector<int>&nums){
    int c0=0, c1=0, c2=0;
    for(int i=0;i<nums.size();i++){
        int x=nums[i];
        switch(x){
            case 0 : c0++;
            break;
            case 1 : c1++;
            break;
            case 2 : c2++;
            break;
        }
    }
    int i=0;
    while(c0--){
        nums[i++]=0;
    }
    while(c1--){
        nums[i++]=1;
    }
    while(c2--){
        nums[i++]=2;
    }
}

// swap method
void swapping(vector<int>&nums){
    int lo=0, mid=0, hi=nums.size()-1;
    while(mid<=hi){
        switch(nums[mid]){
            case 0: swap(nums[lo++], nums[mid++]);
            break;
            case 1: mid++;
            break;
            case 2: swap(nums[mid], nums[hi--]);
        }
    }
}

int main(){ 
    vector<int>nums = {1, 2, 0, 1, 2, 0, 0 , 1, 0, 2, 2, 0};
    swapping(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}