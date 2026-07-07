//forceful conversion
//majorly from big to small
//explicit->done by no compiler ,only by programmer
#include <iostream>
using namespace std;
int main(){
    double price=100.99;
    int newPrice=(int)price;
    cout<<newPrice<<endl;//does'nt matter the price value is 100.99 or 100.11...it will always give 100,lower value only
    return 0;
}