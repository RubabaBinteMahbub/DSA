//Array rotation in k steps.
include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>a={1,5,6,2,6,4};
int k=2;
int n=a.size();
k=k%n;

reverse(a.begin(),a.end());
//4 6  2 6 5 1
reverse(a.begin(),a.begin()+k);
reverse(a.begin()+k,a.end());

for(int x:a) cout<<x<<" ";
//6 4  1 5 6 2
return 0;
}
