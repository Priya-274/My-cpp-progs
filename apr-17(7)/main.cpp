#include <iostream>

using namespace std;

int main()
{
    int num,rem=0,cnt=0,sum=0;
    cout<<"Enter the car number:";
    cin>>num;
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        cnt=cnt+1;
        num=num/10;
    }
    if(cnt>=4){
       if((sum%3==0) ||(sum%5==0)||(sum%7==0)) {
        cout<<"Lucky Number";
       }
        else{
            cout<<"Sorry its not my lucky number";
        }
    }
    else{
        cout<<num<<"is not a valid car number";
    }
    return 0;
}
