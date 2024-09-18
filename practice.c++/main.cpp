#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout <<"Enter the grade"<< endl;

    cin>>grade;

    if(grade>=80)

        cout<<"A"<<endl;

    if(grade ==79 || grade==78 || grade==77|| grade ==76 ||grade==75 || grade==74 ||grade==73||grade==72||grade==71||grade==70)

        cout<<"B+"<<endl;

    if(grade ==69 || grade==68 || grade==67|| grade ==66 ||grade==65 || grade==64 ||grade==63||grade==62||grade==61||grade==60)

        cout<<"C+"<<endl;

    if(grade ==59 || grade==58 || grade==57|| grade ==56 ||grade==55)

        cout<<"C"<<endl;

    if(grade ==54 || grade==53 || grade==52|| grade ==51 ||grade==50)

        cout<<"D"<<endl;

    if(grade ==49 || grade==48 || grade==47|| grade ==46 ||grade==45)

        cout<<"E"<<endl;
    if(grade<=44)

        cout<<"F"<<endl;

    return 0;
}
