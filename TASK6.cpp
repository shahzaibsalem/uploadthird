#include <iostream>
using namespace std;
main()
{
int size_pound;
float area;
float cost;
float fertilizing;
float fertilize_area;
cout<<"Entr size in pound"<<endl;
cin>>size_pound;
cout<<"Entr area covered by bag"<<endl;
cin>>area;
cout<<"Entr cost of the bag"<<endl;
cin>>cost;
cout<<"____________________________________________________________"<<endl;
fertilizing=cost/size_pound;
fertilize_area=cost/area;
cout<<"fertilizing per pound"<<fertilizing<<endl;

cout<<"fertilizing area per square feet"<<fertilize_area;
}
