#include <iostream>

int main()
{
    int x , p , result = 1 ;

    std::cout << "Enter the number : ";
    std::cin >> x ;

    std::cout << "Enter the exponent : ";
    std::cin >> p ;

    for( int i = 0 ; i < p ; i++ )
    {
        result *= x ;
    }

    std::cout << x << "^" << p << " = " << result << "\n";

    return 0 ;
}
