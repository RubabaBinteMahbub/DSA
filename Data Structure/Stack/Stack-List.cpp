/*
Top stack (most important of stack) - have to be the front element of the linked list (most important of linked list)
stack pop = deleting  top = deleting head

Stack push : ll.push_front()
Stack pop : ll.pop_front()
Top stack : ll.front()
*/

#include<iostream>
#include<list>
using namespace std;

class Stack{
list<int>ll;
public:
    void push(int val){
    ll.push_front(val);
    }

    void pop(){
    ll.pop_front();
    }

    int top(){
    return ll.front();
    }

    bool empty(){
    return ll.size()==0;
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while(! s.empty()){  // not stack empty
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl; // 30 20 10

    return 0;
}
