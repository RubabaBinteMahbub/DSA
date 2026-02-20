// STL হলো DSA এর ready-to-use implementation, কিন্তু DSA বুঝে না থাকলে STL কেবল copy-paste করার মত হবে।


void explainList(){
//similar to vector
list<int> ls;

ls.push_back(2); // {2}
ls.emplace_back(2); // {2, 4}

ls.push_front(5);  // {5, 2, 4}
// vector এ singly linked list ব্যবহ্রত হয়।
list এ doubly linked list ব্যবহ্রত হয়। তাই vector এর v.insert() এর থেকে ls.push_front() এর time complexity অনেক কম।

// begin, end, clear, insert, size, swap বাকি সব vector এর মতো।
}


void explainDeque(){
deque<int> dq;

dq.push_back(1); //{1}
dq.emplace_back(2); //{1, 2}
dq.push_front(4);  //{4, 1, 2,}
dq.emplace_front(3); //{3, 4, 1, 2}

dq.pop_back();
dq.pop_front();

dq.back();

dq.front();

// begin, end, clear, insert, size, swap বাকি সব vector আর list এর মতো।
}

void explainStack(){ 
// LIFO

}


void explainQueue(){
// FIFO
queue<int> q;

q.push(1); //1
q.push(2);  //1, 2
q.emplace(4) //1, 2, 4

q.back()+=5 ; //4→4+5=9

cout<<q.back(); // prints 9

cout<<q.front(); // prints 1

q.pop(); // pops first element 1. {2, 4}.

cout<<q.front();

// size, swap, empty as same as stack.
}


void explainPriorityQueue(){
// Largest element stays in the top (max heap).
// Tree is maintained (element গুলো যখন নির্দিষ্ট কোনো শর্ত মেনে স্টোর হয়)
priority_queue<int>pq ;
pq.push(5); //{5}
pq.push(2); //{5, 2}
pq.push(8); //{8, 5, 2}
pq.emplace(10); //{10, 8, 5, 2}

cout<<pq.top(); // prints 10

pq.pop(); //{8, 5, 2} // pops the top

cout<<pq.top(); // prints 8

// size, swap, empty similar as others

// If smallest element stays in the top (max heap).
// Minimum heap
priority_queue<int, vector<int>, greater<int>> pq ;

pq.push(5);  // {5}
pq.push(2); // {2,5}
pq.push(8); // {2, 5, 8}
pq.emplace(10); // {2, 5, 8, 10}

cout<<pq.top(); //prints 2
}


void explainSet(){
// Stores only unique elements in sorted order
// Tree is maintained.
//Unique✅, sorted✅

set<int> st;
st.insert(1); // {1}
st.insert(2); // {1, 2}
st.insert(2); // {1, 2} because stores only unique elements
st.insert(4); // {1, 2, 4}
st.emplace(3); // {1, 2, 3, 4}

auto it = st.find(3);
auto it = st.find(6); // কোনো ভ্যাল্যু না থাকলে st.find(), st.end() (শেষ index এর পরের index) কে point করে।

st.erase(5);

int cnt = st.count(2); // কোনো ভ্যাল্যু থাকলে এটা সবসময় 1 return করে। কারণ set কখনো duplicate store করেনা। একটা ভ্যল্যু একবারই স্টোর করে।

// 1, 2, 3, 4, 5
auto it1 = st.find(2);
auto it2 = st.find(4);
st.erase(it1, it2); //1, 4, 5

auto it = st.lower_bound(2);
auto it = st.upper_bound(3);
}


void explainMultiSet(){
// Stores only in sorted order. সব element store করে, শুধু unique elements না।
//Unique❎, sorted✅

multiset<int> ms;

ms.insert(1);  // 1
ms.insert(1); // 1, 1
ms.insert(1); // 1, 1, 1

ms.erase(1); // all 1 is erased

int cnt = ms.find(1); // 3

ms.erase(ms.find(1)); // only a single 1 is erased (যেটা প্রথমে পাবে)

ms.erase(ms.find(1),ms.find(1)+2);
// প্রথম দুইটা 1 erase করবে

}


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

auto it = mp.lower_bound(2);
auto it = mp.upper_bound(3);
}
// map stores unique keys in sorted order (key এর sorted order অনুযায়ী store হয়।), similar to set data structure. 
//erase, swap, size, empty are same as above.


void explainUnorderedSet(){
// Unique✅, sorted❎
// নিজের মনমতো যেকোনো order এ থাকতে পারে। কিন্তুু অবশ্যই unique elements গুলোই শুধু থাকবে।
// Set এর সব ফাংশন-ই কাজ করে শুধু lower_bound(), upper_bound() ছাড়া।

unordered_set<int> st;
}

void explainMultimap(){
//Only difference is we can store duplicate keys also. Similar to set and multiset.
//We cannot use mp[key] here. As here we will can use multiple keys of same name.
// Will also store in sorted order of keys. {1, 2}, {1, 3}.
}

void explainUnorderMap(){
// Similar to but only difference is values will not be stored in sorted order of keys. And will have unique keys.
// Also map works in logarithmic time and unordered map in O(1) or constant time. In very rare worst case O(n).
}

bool comp(pair<int, int> p1, pair<int, int>p2){// compare two element pairs not the entire array.
if(p2.second>p1.second) return true;
if(p1.second>p2.second) return false;

// They are same. No need to swap.
// যদি উপরের দুইটাতে function শেষ না হয় তাহলে pair.second দুইটা সমান। তখন  নিচের condition এ যাবে।

if(p1.first>p2.first) return true;
if(p2.first>p1.first) return false ;
// or only return false, কারণ উপরের কোনোটা কাজ না করলেই এটাতে পৌছাবে।
}

void explainExtra(){
// Sort in ascending order
sort(a, a+size); //(a+0, a+size)
sort(a+2, a+4); //{1, 3, 5, 2}. a+2=5, a+4 = যে পর্যন্ত sort করতে চাইবো তার পরের index.
sort(v.begin(), v.end());

// Sort in descending order
sort(a, a+n, greater<int>); // This is a in-built comparetor

// My way sorting
// sort it according yo second element 
// if second element is same then sort it according to first element but in ascending order

pair<int, int> a[]={1,2},{2,1},{4,1};
sort(a, a+size, comp);

int num=7;
int cnt = _builtin_popCount(); // counts how many 1s in binary number of 7

long long num=64488145;
long long cnt = _builtin_popCountll();

// Find max element(* না দিলে address পাবো)
int max = *max_element(a, a+n);
int min = *min_element(a, a+n);

}
//(a+size), v.end() indicates pointer right after last index.

int main()
{
 
    return 0;
}
