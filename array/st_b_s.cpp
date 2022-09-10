#include<bits/stdc++.h>
using namespace std;

// brute O(n^2)
int bu(vector<int>&st){
    int maxi=0;
    for(int i=0;i<st.size();i++){
        for(int j=i+1;j<st.size();j++){
            maxi=max(maxi, st[j]-st[i]);
        }
    }
    return maxi;
}

int maxp(vector<int>&st){
    int maxi=0;
    int mini=INT_MAX;
    for(int i=0;i<st.size();i++){
        mini=min(mini, st[i]);
        maxi=max(maxi, st[i]-mini);
    }
    return maxi;
}



int main(){
    vector<int>arr= {7,1,5,3,6,4};
    cout<<bu(arr)<<" "<<maxp(arr);
    return 0;
}