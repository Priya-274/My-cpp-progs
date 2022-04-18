#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    char str[n];
    cin>>str;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
        if(str[j]==i){
            cnt=cnt+1;
            break;
        }
      }
    }
    cout<<cnt;
    return 0;
}
