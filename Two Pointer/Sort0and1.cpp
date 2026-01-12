//Sorting 0s (প্রথমে) and 1s (পরে) array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}

int i=0,j=a.size()-1;
while(i<j){
  if(a[i]==0) i++;
//Means avoid it. It's not guilty.প্রথমে কখন কিছু করা লাগবেনা সে কেস হ্যান্ডল করবে।
  else if(a[j]==1) j--;
  else{    //a[i]==1&&a[j]==0
    swap(a[i],a[j]);
    i++;
    j--;
  }
}

for(int ele :a){
cout<<ele<<" ";
}
return 0;
}
