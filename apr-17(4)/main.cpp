#include <iostream>

using namespace std;

int main()
{
    int cse,ece,mech;
    cout<<"Enter no placements in CSE:";
    cin>>cse;
    cout<<"Enter no of placements in ECE:";
    cin>>ece;
    cout<<"Enter no of placements in MECH:";
    cin>>mech;
    if((cse>0)&&(ece>0)&&(mech>0)){
      if((cse>=ece)&& (cse>=mech)){
       if(cse==ece){
        cout<<"CSE"<<"\n"<<"ECE";
       }
       else if(cse==mech){
        cout<<"CSE"<<"\n"<<"MECH";
       }
       else{
        cout<<"CSE"<<"\n";
       }
    }
    else if((ece>=cse)&& (ece>=mech)){

       if(ece==cse){
        cout<<"CSE"<<"\n"<<"ECE";
       }
       else if(ece==mech){
        cout<<"ECE"<<"\n"<<"MECH";
       }
       else{
        cout<<"ECE"<<"\n";
       }
    }
    else{
          if(mech==cse){
          cout<<"CSE"<<"\n"<<"MECH";
         }
         else if(mech==ece){
          cout<<"ECE"<<"\n"<<"MECH";
         }
         else{
          cout<<"MECH"<<"\n";
         }
     }
    }
    else{
        cout<<"Input is Invalid";
    }


    return 0;
}
