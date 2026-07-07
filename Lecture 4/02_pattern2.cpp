//also a square pattern but with continuation
/*
eg:
123
456
789
*/
#include <iostream>
using namespace std;
int main(){
    int n=3;//decides number of lines
    int num=1;//printing and updating interger
    for (int i=0;i<n;i++){
        //if we initialize num inside outer loop ,it we reset after all inner loop iteration 
        for(int j=0;j<n;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    cout<<num;//check whether the dry run is correct or not i.e. 10
    return 0;
}
//i think this can be done better with inner while loop 
/*
for characters:
#include <iostream>
using namespace std;
int main(){
    int n=3;
    char ch='A';
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    cout<<ch;
    return 0;
}
*/
//Time Complexity:O(n^2)