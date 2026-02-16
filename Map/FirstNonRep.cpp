// Find first non-repeating value of an array
#include<iostream>
#include<map> // Ordered map.
using namespace std;
int main(){
int arr[ ]={1, 3, 1, 6, 3, 1};
int size=6;

map<int, int>mp;

for(int i=0; i<size; i++){
mp[arr[i]]++;
}

for(int i=0; i<size; i++){
  if(mp[arr[i]]==1){
    cout<<"First non-repeating element of the array : "<<arr[i]<<endl;
    break;
  }
}

return 0;
}
