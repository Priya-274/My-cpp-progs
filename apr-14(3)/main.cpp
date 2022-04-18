#include <iostream>
#include<cmath>
using namespace std;

int main()
{

    int a,b,maxi=0;
    cin>>a;
    cin>>b;
    int i=0;
    while(pow(2,i)<b) {
    if(pow(2,i)>a && pow(2,i)<b){
        maxi=pow(2,i);
       }
    i=i+1;
    }

cout<<maxi;
    return 0;
}
