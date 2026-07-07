//figure out how to find if a number is power of 2 without any loop
#include <iostream>
using namespace std;

bool pow_Of_Two(int n){
    //compares the left two bitwise elements of variable two and n and check whether the remaining are zero or not
    /*Here i thought to make binary form of n and then compare it with the binary form of 2 but i is quite tought and messy...
    int rem;
    int ans=0;
    int ans2=0;
    int pow=1;
    while(n>0){
        rem=n%2;
        n/=2;
        ans+=(rem*pow);
        pow*=10;
        cout<<ans<<endl;
    }
    while(ans!=0){
        int last=0;
        last=ans%10;
        ans/=10
        if(last==1){
        ans2++;
        }
    }
    if(ans2==1){
        cout<<"True";
        return;
    }cout<<"False";
    */
    
    /*simplist method to solve it
    if(n<=0){
         cout<<"Not Power of Two"<<endl;
    }
    while(n>1){
        if(n%2!=0){
            cout<<"Not Power of Two";
            return;       
        }
        n/=2;
    }
    cout<<n<<" is the power of two";
    */

    //now without loop method
    if(n<=0){
        return false;
    }
    return (n&(n-1))==0;//64 bit values & bitwise operation with 63 bit value will give 0 then return value will be True else false
    //this operaton is not possibel for non power of 2 numbers
}

int main(){
    int n=64;//1000000
    if(pow_Of_Two(n)){
        cout<<n<<" is a power of Two";
    }else{
        cout<<n<<" not power of Two";
    }
    return 0;
}