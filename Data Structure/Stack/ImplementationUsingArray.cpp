#include<iostream>
using namespace std;
#define MAX 5
class Stack{
 //private :
   int arr[MAX];
   int top;
   public :
   Stack(){
    top=-1; //top হচ্ছে সর্বশেষ element এর index।
   }

   void push(int x){
   if(top==MAX-1)
       cout<<"Stack overflow\n";
   else
       arr[++top]=x;
   }

   void pop(){
   if(top==-1)
      cout<<"Stack underflow\n";
   else
      top--;
   }
  
  int peek(){
  if(top==-1) return -1;
  else return arr[top];
  }

 bool isEmpty(){
 return top==-1; //top=-1 হলে true return  কর। bool ফাংশন এভাবেই কাজ করে।
 }

 void printStack(){
    if(isEmpty()){
    cout<<"Stack is empty"<<endl;
    return;
    } //if(top==-1)
   
  for(int i=top;i>=0;i--){
   //LIFO order এ প্রিন্ট করতে। যেটা stack এর natur।for(i=0;i<=top;i--) insertion order এ প্রিন্ট করতে। <= বা >=top না দিলে top element print হবে না। কারণ এটা top element এর index বোঝায়।
  cout<<arr[i]<<" ";
  }
  cout<<endl;
  }
 
};
int main(){
Stack st;
st.push(10);
st.push(20);
st.push(30);
  
if(!st.isEmpty()){
  st.printStack();
}
  
return 0;
}
