#include <iostream>

using namespace std;

int main()
{
     int a,b,sum=0,temp=0,rem=0;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++){
        temp=i;
        while(i>0){
            rem=i%10;
            sum=(sum*10)+rem;
            i=i/10;
        }
     if(temp==sum){
        cout<<temp;
     }
    }


    return 0;
}
