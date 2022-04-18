#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char str[1000];
    int n;
    cin>>str;
    n=strlen(str);
    char ch1;
    char ch2;
    cin>>ch1;
    cin>>ch2;
    for(int i=0;i<n;i++){
         if(str[i]==ch1){
            str[i]=ch2;
            }
         else if(str[i]==ch2){
                str[i]=ch1;
            }
        else{
            continue;
        }
    }

cout<<str;





    return 0;
}
