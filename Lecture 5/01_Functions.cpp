#include <iostream>
using namespace std;

//function definition
void print_Hello()//void:returns nothing
{
    cout<<"Hello\n";
    return;//returns control (control determines where we are in the code)
}//can't use unless we call the function

int print_Integer()//int:returns integer
{
    return 3;
}//can't use unless we call the function

int print_Parameter(int x, int y){
    return (x+y);
    //or a=x+y;
    //return a;
}
int main(){
    //main is always the starting point of program ,complier automatically calls it
    int a=10;
    int b=5;

    //function call OR Invoke
    print_Hello();
    cout<<print_Integer()<<"\n";
    /*OR
    int value=print_Integer();
    cout<< "val =" << val << endl;
    */
    cout<<print_Parameter(a,b);
    return 0;
}