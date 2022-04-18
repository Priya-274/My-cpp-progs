#include <iostream>

using namespace std;

int main()
{
    int r,unit,n,tot=0,sum=0;
    cout<<"r: ";
    cin>>r;
    cout<<"unit: ";
    cin>>unit;
    cout<<"n: ";
    cin>>n;
    if(n==0){
        cout<<"-1";
    }
    else{
    int arr[n];
    cout<<"arr: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    tot=r*unit;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>tot){
            cout<<i+1;
            break;
        }
    }
    if(sum<tot){
        cout<<"0";
    }
}
    return 0;
}
