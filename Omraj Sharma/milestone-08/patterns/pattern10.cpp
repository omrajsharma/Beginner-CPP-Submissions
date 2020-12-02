#include <iostream>

int main()
{
    int maxi = 0 ;
    for( int i = 1 ; i <= 10 ; i++ )
    {
        for( int j = 4-maxi ; j > 0 ; j-- )
            std::cout << ' ' ;
        for( int k = maxi*2 +1 ; k > 0 ; k-- )
            std::cout << '*' ;
        std::cout << '\n' ;
        i < 5 ? maxi++ : maxi-- ;
    }

    return 0 ;
}
