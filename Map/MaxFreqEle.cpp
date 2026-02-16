#include<iostream>
#include<map>
using namespace std;

int main(){

    int arr[] = {1, 3, 1, 6, 3, 1};
    int size = 6;

    map<int,int> mp;

    // frequency count
    for(int i = 0; i < size; i++){
        mp[arr[i]]++;
    }

    int maxFreq = 0;
    int maxElement = 0;

    for(auto x : mp){
        if(x.second > maxFreq){
            maxFreq = x.second;
            maxElement = x.first;
        }
    }

    cout << "Max frequency element : " << maxElement << endl;
    cout << "Frequency : " << maxFreq << endl;

    return 0;
}
