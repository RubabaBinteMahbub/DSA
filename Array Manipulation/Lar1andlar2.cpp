#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>a={1,5,6,2,6,4};
int lar1,lar2;
lar1=lar2=a[0];//INT_MIN দেওয়া ভালো।
for(int i=0;i<a.size();i++){
  if(a[i]>lar1){ 
//lar1 এর সাথে তুলনা করবে
    lar2=lar1;
    lar1=a[i];
  }
  else if(a[i]<lar1 && a[i]>lar2){
    lar2=a[i];
  }
}
cout<<"Largest = "<<lar1<<endl;
cout<<"Second largest = "<<lar2<<endl;
return 0;
}
