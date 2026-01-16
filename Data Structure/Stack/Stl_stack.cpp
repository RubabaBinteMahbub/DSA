#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>st;

/*int n;
cout<<"Enter the size : ";
cin>>n;
cout<<"Enter "<<n<<" elements : ";
for(int i=0;i<n;i++){
int x; cin>>x; st.push(x);
}*/

st.push(10);
st.push(20);
st.push(30);

cout<<"Element in top : "<<st.top()<<endl; //30 (30,20,10 এভাবে স্টোর হয়েছে।)

if(!st.empty())
   st.pop();
//Remove present top element (30).
else
   cout<<"Stack is empty"<<endl;

cout<<"Now element in top : "<<st.top()<<endl; //20

//print top to bottom
cout<<"Elements : ";
while(!st.empty()){
cout<<st.top()<<" ";
st.pop();
}
//Stack প্রিন্ট করতে চাইলে pop() ব্যবহার করতেই হবে। অর্থাৎ element delete হয়ে যাবে। Stack modify করতে না চাইলে copy ব্যবহার করতে হবে।
return 0;
}
