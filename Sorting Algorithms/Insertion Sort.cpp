// Insertion Sort

// Time Complexity : O(n^2)
// Space Complexity : O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
      int a[]={5, 1, 7, 6, 2};
      int n=5;

      int i, value, hole;
      for(i=1; i<n; i++){  // Karon 1st index check korar dorkar nei. Sheta amra sorted dhore niechi.
           value=a[i];
           hole=i;

           while(hole>0 && a[hole-1]>value){
                   a[hole]=a[hole-1];
                   hole--;
           }

           a[hole]=value;
      }

      for(i=0; i<n; i++){
            cout<<a[i]<<" ";
      }

      return 0;
}
