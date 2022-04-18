#include <iostream>
using namespace std;

int main()
{
     int pizza,puff,drink,pcost=0,pfcost=0,dcost=0,tot=0;
    cout<<"Enter no of pizzas: ";
    cin>>pizza;
    cout<<"Enter no of puffs: ";
    cin>>puff;
    cout<<"Enter no of drinks:";
    cin>>drink;
    pcost=pizza*100;
    pfcost=puff*20;
    dcost=drink*10;
    cout<<"Bill Details"<<"\n";
    cout<<"No of pizzas:"<<pizza<<"\n";
    cout<<"No of puffs:"<<puff<<"\n";
    cout<<"No of cool drinks:"<<drink<<"\n";
    tot=pcost+pfcost+dcost;
    cout<<"Total price:"<<tot<<"\n";
    cout<<"ENJOY THE SHOW";
    return 0;
}
