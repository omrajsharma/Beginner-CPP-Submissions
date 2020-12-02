#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    int num ;
    std::cin >> num ;

    int sum = 0;
    for( int i = 1 ; i <= num/2 ; i++ )
    {
        if( num%i == 0 )
            sum += i ;
    }

    if( sum == num )
        std::cout << "Entered number is a perfect number !!" ;
    else
        std::cout << "Entered number is not a perfect number !!" ;

    return 0 ;
}
