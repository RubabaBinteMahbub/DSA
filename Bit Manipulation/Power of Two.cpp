// Power of Two : If n is greater than 0 and has only one bit set.
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
    return n>0 && (n&(n-1))==0;
}

int main(){
int num = 8;

if(isPowerOfTwo(num)){
    cout<<""<<endl;
}else{
    cout<<"No"<<endl;
}

return 0;
}
