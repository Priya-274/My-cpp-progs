#include <iostream>

using namespace std;

int main()
{
    int n,m,sum1=0,sum2=0,diff=0;
    cin>>n;
    cin>>m;
    for(int i=1;i<=m;i++){
        if(i%n!=0){
            sum1=sum1+i;
        }
        else{
            sum2=sum2+i;
        }
    }
    diff=sum1-sum2;
    cout<<diff;
    return 0;
}
