#include<bits/stdc++.h>
int Solution::solve(vector<int> &A) {
     
    int Mini=INT_MAX;
    int Maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<A.size();i++)
    {
        Mini=min(Mini,A[i]);
        Maxi=max(Maxi,A[i]);
        sum=Mini+Maxi;
    }
    return sum;
    
}
