#include <iostream>
using namespace std;

int main()
{
    float principle, rate, time, CI, interest;

/* Input principle, time and rate */
    printf("What is the principal: ");
    scanf("%f", &principle);

    printf("What is the interest rate: ");
    scanf("%f", &rate);

    printf("How many times per year is the interest compounded: ");
    scanf("%f", &time);



/* Calculate compound interest */
    CI = principle* (pow((1 + rate / time), time));

/* Print the resultant CI */
    printf("Total Balance = %f", CI);
    interest= CI- principle;
    printf("\nInterest earned= %f", interest);


    return 0;
}
