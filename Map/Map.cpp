void explainMap(){
map<int, int>mp; //key(unique হয়, no duplicates, it can be of any data type int, double, pair, char,... অ্যারের index যেমন শুধু int হতে পারতো তেমন না।), value(can be present multiple times).

mp[1] = 2; //store 2 in key 1(like array).
mp.insert({3, 1}); //store 1 in key 3.
mp.emplace({2, 4})

//{1,2},{2,4},{3,1}.

cout<<mp[1]<<endl; //prints 2.
cout<<mp[5]<<endl; //prints 0 or null as there is no value in newly created key 5.

for(auto it : mp){
   cout<<it.first<<" "<<it.second<<endl;
}

/*
for(auto it = mp.begin(); it != mp.end(); it++){
    cout << it->first << " " << it->second << endl;
}
*/

auto it = mp.find(3) // it = {3, 1}. Here it is a iterator or pointer which points a pair.
cout<<(*it).second<<endl;

//v.end(), mp.end() ২ টা নির্দেশ করে ভেক্টর ও ম্যাপের শেষ index এর পরের index এর iterator বা pointer। অর্থাৎ যেখানে কোনো ভ্যালু থাকেনা (তাই * দিয়ে dereference ও করা যায়না।)।
/* Check if a key exists 
auto it = mp.find(3);

    if(it != mp.end()){
        cout << "Key exists." << endl;
        cout << "Value: " << (*it).second << endl;
    }
    else{
        cout << "Key doesn't exist." << endl;
    }
}*/
// কারণ key না পেলে mp.find() return করে mp.end()।

   auto it = mp.lower_bound(2);
   auto it = mp.upper_bound(3);
}
// map stores unique keys in sorted order (key এর sorted order অনুযায়ী store হয়।), similar to set data structure. 
//erase, swap, size, empty are same as above.

void explainMultimap(){
//Only difference is we can store duplicate keys also. Similar to set and multiset.
//We cannot use mp[key] here. As here we will can use multiple keys of same name.
// Will also store in sorted order of keys. {1, 2}, {1, 3}.
}

void explainUnorderMap(){
// Similar to but only difference is values will not be stored in sorted order of keys. And will have unique keys.
// Also map works in logarithmic time and unordered map in O(1) or constant time. In very rare worst case O(n).
}
