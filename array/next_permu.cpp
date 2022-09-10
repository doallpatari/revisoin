#include<bits/stdc++.h>
using namespace std;
// #find all then return greater than req
void all_perm(vector<int>&num, vector<vector<int>>&res, int ind){
    if(ind==num.size()){
        res.push_back(num);
        return;
    }
    for(int i=ind;i<num.size();i++){
        swap(num[ind], num[i]);
        all_perm(num, res, ind+1);
        swap(num[ind], num[i]);
    }
}
// using next_permutation
vector<int> next_p(vector<int>nums){
    next_permutation(nums.begin(), nums.end());
    return nums;
}

// most efficient
void next(vector<int>&nums){
    int n=nums.size(), k, l;
    for(k=n-2;k>=0;k--){
        if(nums[k] < nums[k+1]){
            break;
        }
    }
    if(k<0){
        reverse(nums.begin(), nums.end());
    }
    else{
        for(l=n-1;l>k;l--){
            if(nums[l] > nums[k]){
                break;
            }
        }
        swap(nums[l], nums[k]);
        reverse(nums.begin()+k+1, nums.end());
    }
    // return nums;
}

int main(){
    vector<vector<int>>res;
    vector<int>num={1,3, 2};
    all_perm(num, res, 0);
    sort(res.begin(),res.end());
    for(auto it:res){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    vector<int> next=next_p(num);
    cout<<next[0]<<" "<<next[1]<<" "<<next[2];
    
    return 0;
}