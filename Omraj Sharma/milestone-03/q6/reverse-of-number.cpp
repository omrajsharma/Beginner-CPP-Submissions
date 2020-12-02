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

    while(tens > 0)
    {
        int temp = x%10;
        x /= 10 ;
        result += temp*pow(10, tens-1);
        tens--;
    }

    std::cout << "Result : " << result << "\n";


    return 0 ;
}
