#include <iostream>

int main()
{
    int x , y , prod , mini , result ;

    std::cout << "Enter first number : ";
    std::cin >> x ;

    std::cout << "Enter second number : ";
    std::cin >> y ;

    prod = x*y ;

    mini = (x < y) ? y : x ;

    for( int i = prod ; i >= mini ; i--)
        if( i%x == 0 && i%y == 0 )
            result = i ;

    std::cout << "LCM of " << x << " and " << y << " : " << result << "\n";

    return 0 ;
}
