#include <iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl;//4 bytes=32 bits
    cout<<sizeof(long int)<<endl;//8 bytes=64 bits for macOS but in windows it gives 4 bytes
    cout<<sizeof(long long)<<endl;//in windows this gives 8 bytes...same meaning as (long long int)
    cout<<sizeof(short int)<<endl;//2 bytes = 16 bits

    unsigned int x=-10;//compiler will now think it as a +ve number
    cout<<x<<endl;
    return 0;
}