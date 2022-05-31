// AAPROACH 1 BRUTE FORCE SOLUTION USING 3 LOOPS   TC-->O(N^3)

#include<bits/stdc++.h>
using namespace std;
int MaxTriplets(int a[],int n)
{
  int ans=INT_MIN;
  for(int i=0;i<n;i++)
    {
      int sum=0;
      for(int j=i+1;j<n;j++)
        {
          for(int k=j+1;k<n;k++)
            {
              if(ans<a[i]+a[j]+a[k])
              {
                ans=a[i]+a[j]+a[k];
              }
            }
        }
    }
  return ans;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
  int y=MaxTriplets(a,n);
  cout<<"The max sum is = "<<y<<endl;
  return 0;
}

// APPROACH 2.
// USING SORT.    TC--> O(nlogn)

int MaxTriplets(int a[],int n)
{
  sort(a,a+n);
  int ans=a[n-3]+a[n-2]+a[n-1];
  return ans;
}

// APPROACH 3

 int Firstmax = INT_MIN, Secondmax = INT_MIN, Thirdmax = INT_MIN;
 
    for (int i = 0; i < n; i++) {
 
        // Update Maximum, second maximum and third
        // maximum element
        if (arr[i] > maxA) {
            maxC = maxB;
            maxB = maxA;
            maxA = arr[i];
        }
 
        // Update second maximum and third maximum
        // element
        else if (arr[i] > maxB) {
            maxC = maxB;
            maxB = arr[i];
        }
 
        // Update third maximum element
        else if (arr[i] > maxC)
            maxC = arr[i];
    }
 
    return (Firstmax + Secondmax + Thirdmax);
}

