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

for(int &x :v){
  //cin>>x; এভাবেও করা যায়। ইনপুট নিয়ে সাথে সাথে।
  x=x*x; //for(int &x :v) use না করলে আসল ভেক্টরের উপাদান হিসেবে x*x স্টোর হবেনা। int x:v মানে v এর উপাদানকে কপি করে just অন্য একটা কাজ করছি।আসল ভ্যালু change হচ্ছেনা।
  cout<<x<<" ";
}

return 0;
}
