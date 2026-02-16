#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    map<char, int>mp;

    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
           s[i]=s[i]+32;
        }

        mp[s[i]]++;
    }

for(auto x : mp){
cout<<"Frequency of "<<x.first<<" : "<<x.second<<endl;
}

int q;
cout<<"Enter query number : ";
cin>>q;
while(q--){
char ch;
cout<<"Enter the character : ";
cin>>ch;
cout<<mp[ch]<<" times"<<endl;
}

return 0;
}
