#include <iostream>

void fact ( int ) ;

int main()
{
    std::cout << "Enter a number : " ;
    int x ;
    std::cin >> x ;

    fact(x) ;

    return 0;
}

void fact ( int x )
{
    int fact = 1 ;

    for( int i = x ; i >= 1 ; i-- )
    {
        fact *= i ;
    }

    std::cout << "Factorial of the number is : " << fact ;
}
