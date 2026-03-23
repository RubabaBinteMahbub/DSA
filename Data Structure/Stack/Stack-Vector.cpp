/* Implementation of stack using vector (implementing stack from scratch)

1) To implement stack using anything, we must include 3 functions, push(), pop(), top()
2) last inputed (pushed) element = last element of vector = top element of stack
3)
stack push : v.push(value)
top stack (returns last inputed element) : return v[v.size()-1]
stack pop (pops last inputed element and next last element becomes new top element): v.pop_back()
*/

#include<iostream>
#include<vector>
using namespace std;

class Stack{
vector<int>v;
public:
    void push(int val){
    v.push_back(val);
    }

    void pop(){
    v.pop_back();
    }

    int top(){
    return v[v.size()-1];
    }

    bool empty(){
    return v.size()==0;
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
