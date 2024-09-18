#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum = 0;
    do
    {
        cout<<"enter number";
        cin>>number;
        sum = sum + number;
    } while(number>=5);
      cout<<"sum = "<<sum<<endl;
    return 0;
}
