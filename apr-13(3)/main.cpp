#include <iostream>

using namespace std;

int main()
{

     int num1,num2,carry=0,sum=0,rem1=0,rem2=0;
    cin>>num1;
    cin>>num2;
    while((num1>0) && (num2>0)) {
    rem1=num1%10;
    rem2=num2%10;
    sum=rem1+rem2+carry;
    if(sum>9){
        carry=carry+1;
    }
    else{
        carry=carry;
    }
    num1=num1/10;
    num2=num2/10;
    }
    cout<<carry;
    return 0;
}
