#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    std::string hex , hexTemp ;
    std::cin >> hex ;
    hexTemp = hex ;

    int arr[ ] = { 0 , 1 , 10 , 11 , 100 , 101 , 110 , 111 , 1000 , 1001 , 1010 , 1011 , 1100 , 1101 , 1110 , 1111 } ;
    long long binary = 0 , place = 1 ;

    for( int i = hexTemp.length()-1 ; i >= 0 ; i-- )
    {
        int temp = (int)hexTemp[i] ;

        if( temp >= 48 && temp <=57 )
            temp -= 48 ;
        else
            temp -= 55 ;

        binary += arr[temp]*place;

        place *= 10000;
    }

    std::cout << binary << "\n" ;

    return 0 ;
}
