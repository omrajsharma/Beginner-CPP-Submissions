#include <iostream>

int main()
{
    int x , result = 1 ;

    std::cout << "Enter a number : ";
    std::cin >> x ;

    for( int i = x ; i > 0 ; i-- )
        result *= i ;

    std::cout << "Factorial of the given number is : " << result << "\n";

    return 0 ;
}
