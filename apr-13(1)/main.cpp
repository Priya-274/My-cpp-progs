#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[1000];
    char str2[1000];
    int i,j=0,n;
    cin>>str1;
    n=strlen(str1);

    for(int i=0;i<n;i++){
        if(str1[i]=='-'){
                str2[j]=str1[i];
                j=j+1;

        }
    }
   for(int i=0;i<n;i++){
    if(str1[i]!='-'){
        str2[j]=str1[i];
        j=j+1;
    }
   }
    cout<<str2;
    return 0;
}
