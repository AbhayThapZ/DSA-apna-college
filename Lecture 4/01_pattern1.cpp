//nested for loops are used
//square pattern 
//eg:
/*
12345
12345
12345
12345
12345
*/
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++)//outer loops are for n number of lines to run as columns
    {//for int i=0...i<=(n-1)/i<n and same for j
        for(int j=1;j<=n;j++)//inner loops for printing elements from 1 to n in a row
        {
            cout<<j;//for printing elements 1 to n 
            //for printing *'s, just change j to "*"
        }
        cout<<endl;//for going to n number of next lines
    }
    return 0;
}
/*
for character
int n=4;
for (int i=0;i<n;i++){
    char ch="A"; i.e. 65
    for (int j=0;j<n;j++){
        ch=ch+1; i.e. 66 which is B
        implicit conversion do A to 65 and the add 1 in it then again convert it into B
    }
}
*/

//here we had done three types: number,* and characters
//Time Complexity:O(n^2)