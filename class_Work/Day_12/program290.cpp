#include<iostream>
using namespace std;

void static_Display()
{
   static int i =0 ;
   
   if ( i<=4 )
   {
      cout<<"jay Ganesh .."<<i<<"\n";
      i++;

   }
   static_Display();
}


int main()
{
   static_Display();

   return 0;
}