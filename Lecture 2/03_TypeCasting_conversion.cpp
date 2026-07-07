//type cating -> conversion is implicit and done by compiler automatically
//float -> double , putting 4bytes of data is easily saved in 8bytes of data
#include <iostream>
using namespace std;
int main(){
    char grade='A';
    int value=grade;
    cout<<value<<endl;
    return 0;
}