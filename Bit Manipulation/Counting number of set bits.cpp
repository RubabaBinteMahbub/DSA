#include<bits/stdc++.h>
using namespace std;

// i-th bit set or not
int countSetBits(int n){
    int count=0;

    while(n!=0){
				if((n&1)!=0){  // if 0th bit is set
            count++;
        }
        n = n>>1;
   }

   return count;
}

int main(){
int num = 10;

cout<<"Number of set bits in "<<num<<": "<<countSetBits(num);

return 0;
}
