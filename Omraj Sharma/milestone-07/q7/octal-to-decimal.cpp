#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a number : " ;
    int oct , octTemp ;
    std::cin >> oct ;
    octTemp = oct ;

    int arr[] = { 0 , 1 , 10 , 11 , 100 , 101 , 110 , 111 } ;

    long binary = 0 ;
    int c = 0 ;
    while(octTemp > 0)
    {
        int temp = octTemp % 10 ;

        for( int i = 0 ; i < 8 ; i++ )
        {
            if( temp == i )
            {
                binary = binary + arr[i]*pow(1000, c);
            }
        }
        octTemp /= 10 ;
        c++ ;
    }

    long binaryTemp = binary ;
    c = 0 ;
    int dec = 0 ;
    while(binaryTemp >0)
    {
        int temp = binaryTemp % 10 ;

        if(temp == 1)
            dec += pow(2,c) ;

        binaryTemp /= 10 ;
        c++ ;
    }

    std::cout << "Decimal value is : " << dec << "\n" ;

    return 0 ;
}
