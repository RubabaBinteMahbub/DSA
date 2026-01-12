#include<iostream>
using namespace std;
int main(){
int target=6,triplet=0;

int a[6]={3,1,2,4,0,6};

for(int i=0;i<6;i++){
	 for(int j=i+1;j<6;j++){
		 for(int k=j+1;j<6;j++){
			if(a[i]+a[j]+a[k]==target) triplet++;
		 }
	}
}

cout<<"Total triplets with target sum : "<<triplet<<endl; //2
return 0;
}
