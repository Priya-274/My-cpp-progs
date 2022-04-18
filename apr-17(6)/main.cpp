#include <iostream>

using namespace std;

int main()
{
     int month;
    int jan=1,feb=2,mar=3,apr=4,may=5,jun=6,jul=7,aug=8,sep=9,oct=10,nov=11,dec=12;
    cout<<"Enter the month:";
    cin>>month;
    if(month>=3 && month<=5){
        cout<<"Season : Spring"<<"\n";
    }
    else if(month>=6 && month<=8){
         cout<<"Season : Summer"<<"\n";
    }
    else if(month>=9 && month<=11){
         cout<<"Season : Autumn"<<"\n";
    }
    else if(month==12 || month==1 || month==2){
         cout<<"Season : Winter"<<"\n";
    }
    else{
        cout<<"Invalid output";
    }


    return 0;
}
