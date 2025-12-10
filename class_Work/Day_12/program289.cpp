#include<iostream>
using namespace std;

void auto_demo()
{
   auto i =0;
   cout<<"auto demo"<<i<< "\n";
   i++;
}
void static_demo()
{
    static int i = 0;
    cout<<"static demo"<<i<<"\n";
    i++;
}
int main()
{
   auto_demo();
   auto_demo();
   auto_demo();
   auto_demo();
   
   static_demo();
   static_demo();
   static_demo();
   static_demo();
   
   return 0;
}