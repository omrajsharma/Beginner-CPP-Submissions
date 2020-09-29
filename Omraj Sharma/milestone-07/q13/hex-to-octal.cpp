#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    std::string hex ;
    std::cin >> hex ;

    int arr[] = { 0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111 } ;


    long long binary = 0 , place = 1 ;
    for( int i = hex.length()-1 ; i >= 0 ; i-- )
    {
        int temp = (int)hex[i] ;

        if( temp >= 48 && temp <= 57 )
            temp -= 48 ;
        else
            temp -= 55 ;

        binary += arr[temp]*place ;

        place *= 10000 ;
    }

    std::cout << binary << "\n" ;

    int arr1[] = { 0 , 1 , 10 , 11 , 100 , 101 , 110 , 111 , 1000 , 1001 , 1010 , 1011 , 1100 , 1101 , 1110 , 1111 } ;
    int oct = 0 ;
    int p = 1 ;

    while( binary > 0 )
    {
        int temp = binary % 1000 ;

        for( int i = 0 ; i < 16 ; i++ )
        {
            if( arr1[i] == temp )
            {
                oct = oct + i*p ;
                p *= 10 ;
            }
        }

        binary /= 1000 ;
    }

    std::cout << oct ;

    return 0 ;
}
