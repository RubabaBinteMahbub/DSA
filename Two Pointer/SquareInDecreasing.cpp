//Printing square of the elements of a non - decreasing vector in non - decreasing (increasing) order.
//এটাকে অবশ্যই ড্রাই রান করবে। তাহলে কোনো ভুল থাকলে ধরতে পারবে।এটা বেস্ট কোডিং advice। যে নিজের কোড কিভাবে কাজ করছে সেটা জানা।
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
vector<int>ans;
for(int i=0;i<n;i++){
    cin>>x; //-5 -4 0 1 6
}

int i=0,j=v.size()-1;
while(i<=j){

if(abs(v[i])>abs(v[j])){
ans.push_back(v[i]*v[i]);
i++;
//বড়র কাজ শেষ হলে বড় সামনে আগাও।
ছোট অপেক্ষা কর যতক্ষণ না তুমি বড় হচ্ছো।
}

else if(abs(v[i])<abs(v[j])){
ans.push_back(v[j]*v[j]);
j--;
}

else { // abs(v[i]) == abs(v[j])
ans.push_back(v[i] * v[i]);
i++;
j--;
}

}

reverse(ans.begin(),ans.end());

for(int x :ans){
		cout<<x<<" "; //0 1 16 25 36
}

return 0;
}
