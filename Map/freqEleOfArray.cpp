// Frequency of array elements 
#include<iostream>
#include<map> // Ordered map.
using namespace std;
int main(){
int arr[ ]={1, 3, 1, 6, 3, 1};
int size=6;

map<int, int>mp;
//map এ সব key তে initial value 0 ই থাকে। আলাদাভাবে 0 দিয়ে সব key initialize করার দরকার নেই।


for(int i=0; i<size; i++){
mp[arr[i]]++;
}

for(auto x : mp){
cout<<"Frequency of "<<x.first<<" : "<<x.second<<endl;
}

return 0;
}

//map<int,int> এ প্রতিটা element হলো pair<int,int>, int না।
//for(pair<int,int> x : mp)
//for(auto x : mp)
