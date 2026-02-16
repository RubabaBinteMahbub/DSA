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
/*auto it = mp.find(3);

 if(it != mp.end()){
    cout << "Found: " << it->second << endl;
}
else{
    cout << "Not Found" << endl;
}*/
// কারণ key না পেলে mp.find() return করে mp.end()।

}
// map stores unique keys in sorted order (key এর sorted order অনুযায়ী store হয়।), similar to set data structure. 
//erase, swap, size, empty are same as above.
