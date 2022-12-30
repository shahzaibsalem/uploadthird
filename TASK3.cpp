#include <iostream>
using namespace std;
main()
{
float intial_velocity;
float final_velocity;
int time;
float accleration;
cout<<"entr intial velocity"<<endl;
cin>>intial_velocity;
cout<<"entr accleration"<<endl;
cin>>accleration;
cout<<"entr time:"<<endl;
cin>>time;
final_velocity=(accleration*time)+intial_velocity;
cout<<"final_velocity is"<<final_velocity;
}