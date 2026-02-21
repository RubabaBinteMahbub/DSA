// Binary search only works for sorted array or vector.
// if item>a[middle] left=middle+1

#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7};
    int size=7, item=6;

    cout<<"Array elements : ";
    for(int i=0;i<size;i++){
       cout<<a[i]<<" ";
    }
    cout<<endl; 

    int left=0, right=size-1, middle;

    while(left<=right){
       middle=(left+right)/2;

       if(item==a[middle]){
          cout<<"Item found at "<<middle<<"th index."<<endl;
          break;
       }

       else if(item>a[middle]){
          left=middle+1;
       }

       else if(item<a[middle]){
         right=middle-1;
       }
     }

    return 0;
}

/*
item=6

1st iteration : left=0,right=6,middle=(0+6)/2=3
item>a[middle] left=3+1=4

2nd iteration : left=4,right=6,middle=(4+6)/2=5
item==a[middle]
  cout<<"Item found at "<<middle<<"th index."<<endl;
  break the loop. no need to check more.

*/

