Solution1
//Using count variable
void Segregate(int a[],int n)
{
  int count0=0,count1=0;
  for(int i=0;i<n;i++)
    {
      if(a[i]==0)
      {
        count0++;
      }
      else{
        count1++;
      }
    }
  for(int i=0;i<n;i++)
    {
      // Until the count0 is greater than 1 keep pushing 0s into the array
      if(count0>0)
      {
        a[i]=0;
        count0--;
      }
        // once the 0s are over push the 1s back into the remaining parts of the array
      else if(count1>0)
      {
        a[i]=1;
        count1--;
      }
    }
  }
  // Printing function
  void printing(int a[],int n)
  {
    for(int i=0;i<n;i++)
      {
        cout<<a[i]<<" ";
      }
  }

Soltuion2
// Using Two Pointer Approach.
vector<int> Solution::solve(vector<int> &A) {
      int i=0,j=A.size()-1;
      while(i<=j)
      {
          if(A[i]==0)
          {
              i++;
          }
          else if(A[j]==1)
          {
              j--;
          }
          else{
              swap(A[i],A[j]);
          }
      }
   return A;
}
