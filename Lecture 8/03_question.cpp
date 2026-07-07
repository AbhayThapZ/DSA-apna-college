//Find the smallest and the largest in Array
#include <iostream>
#include <climits>//if dont wanna use it, instead of INT_MAX write INT32_MAX or INT 8_MAX
using namespace std;
int main(){
    int num[]={5,15,22,1,-15,24};
    int size=6;
    int smallest=INT_MAX;//infinity or max value possible in integers
    int largest=INT_MIN;//minimun value possible in integers
    for(int i=0;i<size/*6*/;i++){//smallest variable code
        if(num[i]<smallest){
            smallest=num[i];
        }
        //smallest=min(num[i],smallest);//works same as the above loop
    }
    cout<<"Smallest value is: "<<smallest<<endl;

    for (int i=0;i<size;i++){
        if(num[i]>largest){
            largest=num[i];
        }
        //largest=max(num[i],largest);//works same as the above loop
    }
    cout<<"Largest value is: "<<largest<<endl;
    //using only single loop
    for(int i=0;i<size;i++){
        smallest=min(num[i],smallest);
        largest=max(num[i],largest);
    }
    cout<<"Smallest value is: "<<smallest<<endl;
    cout<<"Largest value is: "<<largest<<endl;
    //sizeof(num)/4 = 6 = size
    return 0;
}