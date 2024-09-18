#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum=0;
    do
    {
       sum = sum + number;
       cout<<"enter a number";
       cin>>number ;


   } while (number>=0);
   cout<<"sum = "<<sum<<endl;
    return 0;
}
