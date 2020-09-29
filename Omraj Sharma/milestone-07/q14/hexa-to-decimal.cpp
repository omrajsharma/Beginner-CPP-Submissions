#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a number : " ;
    std::string hex ;
    std::cin >> hex ;

    int arr[] = { 0 , 1 , 10 , 11 , 100 , 101 , 110 , 111 , 1000 , 1001 , 1010 , 1011 , 1100 , 1101 , 1110 , 1111 } ;

    long long binary = 0 , place = 1 ;

    for( int i = hex.length() - 1 ; i >= 0 ; i-- )
    {
        int temp = (int)hex[i] ;


        if( temp >= 48 && temp <= 57 )
            temp -= 48 ;
        else
            temp -= 55 ;

        binary += arr[temp]*place ;
        place *= 10000 ;
    }

    int c = 0, sum = 0 ;
    while(binary > 0)
    {
        int temp = binary % 10 ;

        if( temp == 1 )
            sum += pow(2, c) ;

        c++ ;
        binary /= 10 ;
    }

    std::cout << "Decimal term is : " << sum ;

    return 0 ;
}
