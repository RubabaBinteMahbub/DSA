Sorting even (প্রথমে) and odd (পরে) / sort by parity.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}

int i=0,j=v.size()-1;
while(i<j){
 if(v[i]%2==0) i++; // ১ম এ হ্যান্ডেল করবে কখন চেঞ্জ করা লাগবেনা সেটা।
 else if(v[j]%2!=0) j--;
 else{  //v[i]=odd && v[j]=even.
 swap(v[i],v[j]);
 i++;
 j--;
 }
}

for(int x :v){
		cout<<x<<" ";
}

return 0;
}
