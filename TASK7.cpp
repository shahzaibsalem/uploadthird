#include <iostream>
using namespace std;
main()
{
string movie_name;
int  Adult_price;
int  child_price;
int  adult_tickets_sold;
int  child_tickets_sold;
int total;
float Percentag_donation_to_charity;
float amount_charity;
float amount_left;
cout<<"Entr movie name :"<<endl;
cin>>movie_name;
cout<<"Percentag_donation_to_charity"<<endl;
cin>>Percentag_donation_to_charity;
cout<<"Entr Adult_price  :"<<endl;
cin>>Adult_price;
cout<<"Entr child_price :"<<endl;
cin>>child_price;
cout<<"Entr adult_tickets_sold :"<<endl;
cin>>adult_tickets_sold;
cout<<"Entr child_tickets_sold :"<<endl;
cin>>child_tickets_sold;
total=(adult_tickets_sold*Adult_price)+(child_tickets_sold*child_price);
amount_charity=(total/Percentag_donation_to_charity);
amount_left=total-amount_charity;
cout<<"__________________________________________________________________"<<endl;
cout<<"total amount is "<<total<<endl;
cout<<"amount_left is: "<<amount_left;
}