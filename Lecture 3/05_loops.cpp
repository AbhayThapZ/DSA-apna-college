#include <iostream>
using namespace std;
int main(){
    int n=20;
    int count=1;
    while(count <= n){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
    for(int i=0;i<10;i++){//i+=2
        cout<<i;    
    }
    cout<<endl;
    do{
        cout<<count;
        count++;
    }while(count<5);
    cout<<endl;
    return 0;
}
//never write an infinite loop...
//camelCase is the foramt of writing an variable name ,but it does'nt give an error...