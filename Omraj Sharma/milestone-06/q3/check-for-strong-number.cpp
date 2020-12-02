#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    int num ;
    std::cin >> num ;
    int orig = num ;

    int sum = 0 ;
    while( num > 0 )
    {
        int temp = num % 10 ;
        int tempFact = 1 ;
        for( int i = 1 ; i <= temp ; i++ )
        {
            tempFact *= i ;

        }

        sum += tempFact ;
        num /= 10 ;
    }

    if( sum == orig )
        std::cout << "Entered number is a strong number !!" ;

    else
        std::cout << "Entered number is not a strong number !!" ;

    return 0 ;
}
