// Bubble Sort

// পাশাপাশি ২টা element তুলনা করে ও swap করে।
// কাজ চলে / iteration n-1 বার।
// শেষ থেকে ১টা করে নতুন element sort হয় প্রতি iteration এ।

//Time complexity : O(n^2)
// Space complexity : O(n)

// Sort in increasing order

#include<bits/stdc++.h>
using namespace std;

int main(){
      int a[]={12, 2, 5, 3, 10};
      //int a[]={1, 2, 3, 4};

      int i, j,  size = 4;

      for( i=0; i<size-1; i++){  // Pass or iteration no
           int swap=0;
           for( j=0; j<size-1-i; j++){  // Traversing the array from start to end at every iteration and swapping if needed
                if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    swap++;
                }
          }

          if(swap==0) break;
      }

      cout<<"Sorted array : ";
      for(int i=0; i<size; i++){
           cout<<a[i]<<" ";
      }

      return 0;
}
