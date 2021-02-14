#include <iostream>
using namespace std;
int sum_digits(int n){
    int temp = n, ans = 0;

    while (temp !=0){
        ans = ans + temp%10;
        temp = temp/10;
    }

    return ans;
}
int main()
{
    int num;
    cout << "Enter a 4 digit number: ";
    cin >> num;

    cout << "Sum of digits is: " << sum_digits(num) << endl;
    cout << "Sum of digits of the sum is: " << sum_digits(sum_digits(num)) << endl;
    cout << "Sum of digits of the sum of digits of the sum is: " <<sum_digits(sum_digits(sum_digits(num))) << endl;











    return 0;
}
