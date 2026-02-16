// Find number of distinct elements.
#include<iostream>
#include<map>
using namespace std;
int main(){
int arr[ ]={1, 3, 1, 6, 3, 1};

map<int, int>mp;

for(int it : arr){
    mp[it]++;
}

cout<<"Total number of distinct elements in the array : "<<
    mp.size()<<endl;
    
//Distinct elements in an array = number of keys in the map.mp.siz()
    // return করে map এর key সংখ্যা।

return 0;
}
