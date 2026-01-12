#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>a={3,5,2,3,5,8,2};
for(int i=0;i<a.size();i++){
  int count=0; 
  //Don't forget to set count=0 after each loop.
  for(int j=0;j<a.size();j++){
    if(a[i]==a[j]) count++;
  }
  if(count==1){
    cout<<"The unique number is "<<a[i]<<"."<<endl;
    break;
  }
}
return 0;
}
