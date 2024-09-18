#include <iostream>

using namespace std;

int main()
{
    int money,partner_age;
   cout<<"enter money:";
   cin>>money;
   if(money>=1000)
   {
      cout<<"enter partner age:";
      cin>>partner_age;
      if(partner_age>21)
      {
         cout<<"lets have wine";
      }
      else{
        cout<< "lets have cofee";
      }





   }

    return 0;
}
