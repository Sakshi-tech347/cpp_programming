#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
    void fun()
    {
        cout<<"inside fun \n";
    }

     void gun()
    {
        cout<<"inside gun\n";
    }

     virtual void sun()
    {
        cout<<"inside sun \n";
    }

      virtual void bun()
    {
        cout<<"inside Base bun \n";
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
    cout<<sizeof(Base)<<"\n";       //16
     cout<<sizeof(Derived)<<"\n";   //20

    Base *bp = new Derived;    // upcasting
  
    /*bp-> fun();          // Base fun
    bp-> gun();         //Base gun
    bp-> sun();         //base sun
     // bp-> run();         //error
    //  bp-> mun();         //error
    bp-> bun();         //Base bun
    */

    
    return 0;
}