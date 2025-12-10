#include<stdio.h>

void Display()
{
    auto iCnt =0; 
    printf("Jay Ganesh..%d\n ",iCnt);
    iCnt++;
    Display();
}
int main ()
{
    Display();
    return 0;
}