//Leetcode 155
#include <iostream>
#include <stack>
using namespace std;

//T.C.:O(1)
//S.C.:O(2*n)
// class MinStack {
// public:
//     stack<pair<int,int>> s;//val and minVal
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         if(s.empty()){
//             s.push({val,val});
//         }else{
//             int minVal=min(val,s.top().second);
//             s.push({val,minVal});
//         }
//     }
    
//     void pop() {
//         s.pop();
//     }
    
//     int top() {
//         return s.top().first;
//     }
    
//     int getMin() {
//         return s.top().second;
//     }
// };

//T.C.:O(1)
//S.C.:O(n)
class MinStack {
public:
    stack<long long int> s;
    long long int minVal;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            minVal=val;
        }else{
            if(val<minVal){
                s.push((long long)2*val-minVal);
                minVal=val;
            }else{
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(s.top()<minVal){
            minVal=2*minVal-s.top();
        }
        s.pop();
    }
    
    int top() {
        if(s.top()<minVal){
            return minVal;
        }
        return s.top();
    }
    
    int getMin() {
        return minVal;
    }
};

int main(){
    MinStack ms;
    ms.push(-2);
    ms.push(0);
    ms.push(-3);
    cout<<ms.getMin()<<endl;
    ms.pop();
    cout<<ms.top()<<endl;
    cout<<ms.getMin()<<endl;
    return 0;
}