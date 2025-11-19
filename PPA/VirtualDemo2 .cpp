#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
    void fun()
    {
        cout<<"inside fun";
    }

     void gun()
    {
        cout<<"inside gun";
    }

     void sun()
    {
        cout<<"inside sun";
    }

     void bun()
    {
        cout<<"inside bun";
    }

    



};

class Derived : public Base
{
    public :
        int X;

     void gun()
    {
        cout<<"inside Derived  gun\n";
    }

     void sun()
    {
        cout<<"inside Derived  sun\n";
    }

     void run()
    {
        cout<<"inside Derived  run\n";
    }

     void mun()
    {
        cout<<"inside Derived  mun\n";
    }

  
};


int main()
{
    Base *bp1 = new Base();     // nocasting
    Derived *dp1 = new Derived; // nocasting
    Base *bp2 = new Derived;    // upcasting
   // Derived *dp2 = new Base;    // downcasting
    
    return 0;
}