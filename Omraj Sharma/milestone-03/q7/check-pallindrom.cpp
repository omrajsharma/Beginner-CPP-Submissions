#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a number : ";
    int x ;
    std::cin >> x ;

    int tens = 0, result = 0;

    int temp = x;
    while(temp > 0)
    {
        temp /= 10;
        tens++;
    }

    int temp1 = x;

    while(tens > 0)
    {
        int temp = temp1%10;
        temp1 /= 10 ;
        result += temp*pow(10, tens-1);
        tens--;
    }

    std::cout << "Number is Pallindrom : " << (x == result) ? true : false ;


    return 0 ;
}

