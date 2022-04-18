#include <iostream>

using namespace std;

int main()
{
    int m,n,sum=0;
    cin>>m;
    cin>>n;
    for(int i=m;i<=n;i++){
        if((i%3==0)&&(i%5==0)){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}
