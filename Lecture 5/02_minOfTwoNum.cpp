#include <iostream>
using namespace std;

int min_Of_Two_Num(int x,int y){//here x and y are not arguments but paarameters
    if(x>y){
        return y;
    }else{
        return x;
    }
}

int main(){
    int a;
    int b;
    cout<<"Enter your first number:";
    cin>>a;
    cout<<"Enter your second number:";
    cin>>b;
    cout<<"Minimum of these two numbers is:"<<min_Of_Two_Num(a,b);//here a and b are arguments not parameters
    return 0;
    //unchangable values like 1,2,3,4,5...7000 are also called literals
}