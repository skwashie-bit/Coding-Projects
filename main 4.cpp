#include <iostream>
using namespace std;

int main()
{
    double farenheit[5],celsius[5];
    cout<<"Enter five temperature values in Fahrenheit\n";
    for(int i=0;i<5;i++)
    {
        cin>>farenheit[i];
        celsius[i]=(farenheit[i]-32)*5/9;
    }
    cout<<"Farenheit\t\tCelsius\n";
    for(int i=0;i<5;i++) {
        cout << farenheit[i] << "\t\t" << celsius[i] << endl;

    }
    return 0;
}
