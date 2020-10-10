#include <iostream>

using namespace std;

int main()
{
 int x,y,p;
 int year = 0;
 cin >>x>>p>>y;
 while (x<y){
   x= x+ (p/100.0)*x;
   year++;

 }
 cout <<year;
 return 0;
}
