//WAF to print all the unique values in an array
#include <iostream>
using namespace std;
void unique_Values(int arr[],int size){
    bool found=false;//counter=-1
    int uValues=0;
    cout<<"Unique Values: "<<endl;
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
                cout<<arr[i]<<" at Index ["<<i<<"]"<<endl;
                found = true;//counter=0;
                uValues++;
        }
    }
    if(found==false)/*(counter==-1)*/{
        cout<<"No unique Values are Present!!"<<endl;
    }else{
        cout<<"Number of unique values are: "<<uValues;
    }
}
int main(){
    int arr[]={1,1,1,2,2,3,4,4,4,4,5,6,6,6};
    int size=sizeof(arr)/4;
    unique_Values(arr,size);
    return 0;
}