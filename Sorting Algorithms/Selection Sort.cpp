// Selection sort

// Time Complexity : O(n^2)
// Space Complexity : O(n)

// Sorting in increasing order

#include<bits/stdc++.h>
using namespace std;
int main(){
     int a[]={3, 5, 1, 2, 4};
     int n=5, i, j, min_index;

     for(int i=0; i<n-1; i++){
          min_index =i;
          for(j=i+1; j<n; j++){
               if(a[j]<a[min_index])
                    min_index=j;
          }
          swap(a[i], a[min_index]);
     }

     for( i=0; i<n; i++){
       cout<<a[i]<<" ";
     }

     return 0;
}
