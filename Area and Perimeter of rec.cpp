#include<iostream>
using namespace std;
int area(int a , int b)
{
  return a*b;
}
int perimeter(int a,int b)
{
  return 2*(a+b);
}
int main()
{
  int a= 4 , b = 6;
cout<<"Area is: "<<area(a,b)<<endl;
cout<<"Perimeter is: "<<perimeter(a,b)<<endl;
return 0;
}
