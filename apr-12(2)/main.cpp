#include <iostream>

using namespace std;

int main()
{
    int sum,n;
    cin>>n;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int fmin=arr[0];
    int smin=arr[0];
    for(int i=0;i<n;i++){
      if (arr[i] < fmin) {
         smin = fmin;
         fmin = arr[i];
      }
      else if (arr[i] < smin) {
         smin = arr[i];
      }
   }
    cout<<fmin;
    cout<<smin;



    return 0;
}
