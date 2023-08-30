#include <iostream>
int main()
{
    double sales=95000;
    double state_tax=((4)*sales)/100;
    double county_tax=((2)*sales)/100;
    std::cout<<sales<<" "<<state_tax<<" "<<county_tax;
}