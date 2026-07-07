#include <iostream>
using namespace std;
int main(){
    cout<<(5-2*6)<<endl;//precedence of * is greater than -
    cout<<((5-2)*6)<<endl;//overwritten priority here by using ()
    cout<<(4*5%2)<<endl;
    return 0;
}