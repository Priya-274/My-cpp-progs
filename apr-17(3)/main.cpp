#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        if((arr[i]>=65 && arr[i]<=90) || (arr[i]>=97 && arr[i]<=122)){
            cout<<arr[i]<<"-"<<(char)arr[i];
            cout<<"\n";
        }
        else{
            cout<<"Invalid";
        }
    }
    return 0;
}
