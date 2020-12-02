#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a number : ";
    int num ;
    std::cin >> num ;

    int tens = 0 , temp = num ;
    while( temp > 0)
    {
        temp /= 10 ;
        tens++ ;
    }

    while(tens > 0)
    {
        int power = pow(10, tens-1);
        int temp = num / power;

        switch(temp)
        {
            case 1: std::cout << "One  ";
                    break;
            case 2: std::cout << "Two  ";
                    break;
            case 3: std::cout << "Three  ";
                    break;
            case 4: std::cout << "Four  ";
                    break;
            case 5: std::cout << "Five  ";
                    break;
            case 6: std::cout << "Six  ";
                    break;
            case 7: std::cout << "Seven  ";
                    break;
            case 8: std::cout << "Eight  ";
                    break;
            case 9: std::cout << "Nine  ";
                    break;
            case 0: std::cout << "Zero  ";
                    break;
            default: std::cout << "Invalid";
        }
        num = (num % power);

        tens--;

    }

    return 0;
}
