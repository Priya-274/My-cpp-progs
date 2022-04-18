#include <iostream>

using namespace std;

int main()
{
   int n,j=0,k=0;
    cin>>n;
    int arr[n];
    int earr[1000];
    int oarr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            while((j<=n/2)&&(i>=j)){
            earr[j]=arr[i];
            j=j+1;
            }
        }
        else{`
            while((k<=n/2)&&(i>=k)){
            oarr[k]=arr[i];
            k=k+1;
            }
        }
    }
    cout<<earr[0]<<"\n";
    cout<<oarr[0]<<"\n";


    return 0;
}
