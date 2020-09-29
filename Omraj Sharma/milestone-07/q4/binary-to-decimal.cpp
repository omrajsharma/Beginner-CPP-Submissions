#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a number : " ;
    long binary , binaryTemp ;
    std::cin >> binary ;
    binaryTemp = binary ;

    int dec = 0 ;
    for( int i = 0 ; binaryTemp > 0 ; i++ )
    {
        long temp = binaryTemp % 10 ;

        if( temp == 1 )
            dec += pow(2, i) ;

        binaryTemp /= 10 ;

    }

    std::cout << "Decimal conversion of binary number " << binary << " : " << dec ;

    return 0 ;
}
