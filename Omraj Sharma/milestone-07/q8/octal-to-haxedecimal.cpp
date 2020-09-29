#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a number : " ;
    int oct , octTemp ;
    std::cin >> oct ;
    octTemp = oct ;

    int c = 0 ;

    int arrO[] = {0 , 1 , 10 , 11 , 100 , 101 , 110 , 111 } ;
    long binary = 0 ;
    while( octTemp > 0 )
    {
        int temp = octTemp % 10 ;

        for( int i = 0 ; i < 8 ; i++ )
        {
            if( temp == i )
               binary += arrO[i]*pow(1000 , c );
        }

        c++ ;
        octTemp /= 10 ;
    }

    int arrh[] = { 0 , 1 , 10 , 11 , 100, 101 , 110 , 111 , 1000 , 1001 , 1010 , 1011, 1100 , 1101, 1110 , 1111 } ;

    std::string hex ;
    int binaryTemp = binary ;
    while( binaryTemp > 0)
    {
        int temp = binaryTemp % 10000;

        for( int i = 0 ; i < 16 ; i++ )
        {
            if( temp == arrh[i] )
            {
                if( i < 10 )
                    hex = (char)( i + 48 ) + hex ;
                else
                    hex = (char)(i+55) + hex ;
            }
        }
        binaryTemp /= 10000 ;
    }

    std::cout << "Hex form is : " << hex << "\n" ;

    return 0;
}
