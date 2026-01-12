//Given q queries, check if the given
//number is present in the array or not.
#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"Enter the size : ";
cin>>n;

vector<int>a(n);
cout<<"Enter the elements : ";
for(int i=0;i<n;i++){
	 cin>>a[i];
}

const int N=1e5+10;
vector<int>freq(N,0);
for(int i=0;i<n;i++){
	 freq[a[i]]++;
}

int q;
cout<<"Enter number of queries : ";
cin>>q;
cout<<"Enter query elements : "<<endl;
while(q--){
int queryElement;
cin>>queryElement;
cout<<freq[queryElement]<<endl;
}

return 0;
}
//6
//1 2 2 3 5 2
//3
//2 5 4
//Output : 3 1 0
