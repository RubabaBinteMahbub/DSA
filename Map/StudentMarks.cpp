#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
map<string, int>mp;

mp["Abdur Rahim"]=85;
mp["Bibi Ayesha"]=88;
mp["Abdul Karim"]=90;

for(auto it : mp){
    cout<<it.first<<" : "<<it.second<<endl;
}

// Map automatically sorted by key (lexicographic order). A এর ২টা আগে দেখাবে।
