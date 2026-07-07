//WAF to calculate sum and product of all the numbers in an array
#include <iostream>
using namespace std;
int sum_Array(int arr[],int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int product_Array(int arr[],int size){
    int product=1;
    for (int i=0;i<size;i++){
        product*=arr[i];
    }
    return product;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int sum=sum_Array(arr,size);
    int product=product_Array(arr,size);
    cout<<"Sum of all elements of the Array: "<<sum<<endl;
    cout<<"Product of all elements of the Array: "<<product<<endl;
}