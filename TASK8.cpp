#include <iostream>
using namespace std;
main()
{
int vegetables;
int fruits;
float vegetables_price;
float fruits_price;
float net_price;
float convert;
cout<<" price of vegetables in coins:"<<endl;
cin>>vegetables_price;
cout<<" price of fruits in coins:"<<endl;
cin>>fruits_price;
cout<<" Total vegetables per kg:"<<endl;
cin>>vegetables;
cout<<"Total fruits per kg :"<<endl;
cin>>fruits;
net_price=(vegetables_price*vegetables)+(fruits_price*fruits);
cout<<"net price is: "<<net_price;
convert=net_price/1.94;
cout<<" price in PKR  is: "<<convert;
}


