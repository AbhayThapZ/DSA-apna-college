//Linear search is an fixed algorithm...search value in an array and then returns its index 
#include <iostream>
using namespace std;

int Linear_Search(int arr[],int size,int target){
    int index=-1;//-1 shows invalid index
    for (int i=0;i<size;i++){//for position change i to 1 and i<=size
        if(target==arr[i]){
            index=i;//or return i;
        }
    }
    return index;//or return -1;
}
int main(){
    int arr[]={4,2,7,8,1,2,5}; 
    int size=7;
    int target=2;
    cout<<"Target value position at index:" << Linear_Search(arr,size,target)<<endl;
    return 0;
}

//Time Complexity: O(n) 
//called linear search becoz its time complexity is also linear