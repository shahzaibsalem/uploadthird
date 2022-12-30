#include <iostream>
using namespace std;
main()
{
int num_1;
int num_2;
int num_3;
int num_4;
int num_5;
float percentage;
cout<<"number of 1 subect:"<<endl;
cin>> num_1;
cout<<"number of 2 subect:"<<endl;
cin>> num_2;
cout<<"number of 3 subect:"<<endl;
cin>> num_3;
cout<<"number of 4 subect:"<<endl;
cin>> num_4;
cout<<"number of 5 subect:"<<endl;
cin>> num_5;
percentage=(num_1+num_2+num_3+num_4+num_5)/500*100;
cout<<"percentage is"<<percentage;
}