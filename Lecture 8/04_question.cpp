//do previous question but instead print index
#include <iostream>
#include <climits>//if dont wanna use it, instead of INT_MAX write INT32_MAX or INT 8_MAX
using namespace std;
int main(){
    int num[]={5,15,22,1,-15,24,-15};
    int size=7;
    int smallest=INT_MAX;//infinity or max value possible in integers
    int largest=INT_MIN;//minimun value possible in integers
    for(int i=0;i<size;i++){
        smallest=min(num[i],smallest);//min max gives value at the index not the index number
        largest=max(num[i],largest);
    }
    cout<<"Smallest value is: "<<smallest<<endl;
    cout<<"Largest value is: "<<largest<<endl;
    for(int i=0;i<size;i++){
        if(smallest==num[i]){
            cout<<"Smallest value at index "<<i<<endl;
        }
        if(largest==num[i]){
            cout<<"Largest value at index "<<i<<endl;
        }//indexing start from 0
    }
    //sizeof(num)/4 = 6 = size
    return 0;
}