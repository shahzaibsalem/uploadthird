#include <iostream>
using namespace std;
main()
{
int digits;
int reminder1;
int reminder2;
int reminder3;
int reminder4;
int div1;
int div2;
int div3;
int div4;
int add;
cout<<"entr any 4 digit number:";
cin>>digits;
reminder1=digits%10;
div1=digits/10;
reminder2=div1%10;
div2=div1/10;
reminder3=div2%10;
div3=div2/10;
reminder4=div3%10;
div4=div3/10;
add=reminder1+reminder2+reminder3+reminder4;
cout<<"sum is="<<add;
}