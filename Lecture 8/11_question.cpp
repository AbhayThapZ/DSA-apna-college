//WAF to print Intersection of two Arrays
#include <iostream>
using namespace std;

void array_Intersection(int arr1[],int arr2[], int size){   
    bool found = false;
    cout<<"Intersection of the two arrays is:\n";
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr1[i]<<" ";
            found=true;
        }
        
    }
    if(found==false){
        cout<<"No Intersections are found in both the Arrays!!!";
        return;
    }
}

int main(){
    int arr1[]={1,2,3,4,5,6,7};
    int arr2[]={4,5,6,7,8,9,10};
    int size=7;
    array_Intersection(arr1,arr2,size);
    return 0;
}
//tried making a redundancy code for skiping redundant value of the array
// int alreadyPrinted=0; 
// for(int k=0;k<size;k++){//for checking redundancy
//     if(arr1[i]==arr1[k]){//comparing next to previous one
//         alreadyPrinted++;
//     }
// }
// if(alreadyPrinted>=2){
//     continue;//skip iteration if element occurs more than one time
// }