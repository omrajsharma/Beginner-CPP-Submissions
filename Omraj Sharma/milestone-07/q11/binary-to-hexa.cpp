#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    int dec , decTemp ;
    std::cin >> dec ;
    decTemp = dec ;

    long binary = 0 , place = 1 ;
    while(decTemp > 0)
    {
        int temp = decTemp % 2 ;
        binary = (temp*place) + binary ;
        decTemp /= 2 ;
        place *= 10 ;
    }

    int arr[] = { 0 , 1 , 10 , 11 , 100 , 101 , 110 , 111 , 1000 , 1001 , 1010 , 1011 , 1100 , 1101 , 1110 , 1111 } ;
    std::string hex ;
    while( binary > 0 )
    {
        int temp = binary % 10000 ;
        for( int i = 0 ; i < 16 ; i++ )
        {
            if( arr[i] == temp )
            {
                if( i < 10 )
                    hex = (char)(i+48) + hex;
                else
                    hex = (char)(i+55) + hex;
            }
        }
        binary /= 10000 ;
    }

    std::cout << "hex code is : " << hex << "\n" ;

    return 0 ;
}
