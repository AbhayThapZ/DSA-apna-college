#include <iostream>
using namespace std;

int main(){
    int size=5;
    int arr[5]={1,2,3,4,5};
    for(int st=0;st<size;st++){//decides starting point
        for(int ed=st;ed<size;ed++){//start to end iteration
            for(int i=st;i<=ed;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//time complexity: O(n^3)