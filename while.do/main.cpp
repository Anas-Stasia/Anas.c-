#include <iostream>

using namespace std;

int main()
{


    //int number;
    //do{
        //cout<<"enter a number between 1 and 5"<<endl;
        //cin>>number;
   // }

   // while(number <=1 || number >=5);
    //cout<<"Thanks"<<endl;

    int i=0;
    char choice;
    do
    {
        float l,b,area=0;
        cout<<"enter length and breadth separated by a space:";
        cin>>l>>b;
        area=l*b;
        cout<<"The area is"<<area<<endl;
        cout<<"want to calculate another (Y/N)??";
        cin>>choice;
        //cout<<"Hi Anas"<<endl;


    }    while(choice =='y'|| choice =='Y');
      cout<<"out of loop"<<endl;
     //while(i>0);
    //cout<<"out of loop"<<endl;
    return 0;
}
