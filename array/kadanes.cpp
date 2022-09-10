#include<bits/stdc++.h>
using namespace std;



// O(n^3) brute
int maxSubArray(vector < int > & nums, vector < int > & subarray) {
  int max_sum = INT_MIN;
  int n = nums.size();
  if (n == 1) {
    return nums[0];
  }
  int i, j;
  for (i = 0; i <= n - 1; i++) {
    for (j = i; j <= n - 1; j++) {
      int sum = 0;
      for (int k = i; k <= j; k++)
        sum = sum + nums[k];
      if (sum > max_sum) {
        subarray.clear();
        max_sum = sum;
        subarray.push_back(i);
        subarray.push_back(j);

      }
    }
  }
  return max_sum;
}

// O(n^2) brute

int maxSub(vector < int > & nums, vector < int > & subarray) {
  int max_sum = INT_MIN;
  for (int i = 0; i < nums.size(); i++) {
    int curr_sum = 0;
    for (int j = i; j < nums.size(); j++) {
      curr_sum += nums[j];
      if (curr_sum > max_sum) {
        subarray.clear();
        max_sum = curr_sum;
        subarray.push_back(i);
        subarray.push_back(j);
      }
    }
  }
  return max_sum;
}

// O(n)
int kadane(vector<int>&nums, vector<int>&ans){
    int msf=INT_MIN;
    int meh=0, s=0;
    for(int i=0;i<nums.size();i++){
        meh+=nums[i];
        if(meh>msf){
            ans.clear();
            msf=meh;
            ans.push_back(s);
            ans.push_back(i);
        }
        if(meh<0){
            meh=0;
            s=i+1;
        }
    }
    return msf;
}

int main(){
    vector<int>nums={-1, 4, 5, -4, 7, -9, 10};
    vector<int>ans;
    cout<<kadane(nums, ans)<<endl;
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}