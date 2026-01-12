//Target sum with pairs.
#include<iostream>
using namespace std;
int main(){
int target=7,size,pairs=0;

int a[5]={3,4,6,7,1};

for(int i=0;i<5;i++){
	for(int j=i+1;j<5;j++){
	if(a[i]+a[j]==target) pairs++;
	}
}

cout<<"Total pairs with target sum : "<<pairs<<endl; //2
return 0;
}
