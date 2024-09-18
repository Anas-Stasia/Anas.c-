#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch)
    {


     case 1:
         cout<<"I wanna know my balance";
         break;
     case 2:
        cout<<"I wanna register a complaint.";
        break;
     case 9:
        cout<<"I wanna talk to customer executive";
        break;
     default:
         cout<<"enter a valid choice:";
        break;


    }

    return 0;
}
