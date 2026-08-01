/*Left shift :
১) যত তম বিট 1 কে ততবার left shift করতে হবে।
২) মূল সংখ্যা আর result এর (&) করতে হবে।
৩) 0 হলে সেট(1) না। non-zero হলে সেট (1)।
Right shift :
১) সংখ্যাটাকে i বার right shift করতে হবে। (n=)।
২) 1 এর সাথে & করতে হবে।
৩) 0 হলে সেট(1) না। non-zero হলে সেট (1)।*/

#include<bits/stdc++.h>
using namespace std;

// i-th bit set or not
bool checkIthBit_LS(int n, int i){
     return ((1<<i)&n)!=0;
}

bool checkIthBit_RS(int n, int i){
    return ((n>>i)&1) != 0;
}

int main()
{
int num = 5;
int bitIndex = 2;

if(checkIthBit_LS(num, bitIndex)){
    cout<<"Yes (LS)"<<endl;
}else{
    cout<<"No (LS)"<<endl;
}

if(checkIthBit_RS(num, bitIndex)){
    cout<<"Yes (RS)"<<endl;
}else{
    cout<<"No (RS)"<<endl;
}

return 0;
}
