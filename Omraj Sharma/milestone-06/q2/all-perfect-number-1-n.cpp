#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    int num ;
    std::cin >> num ;

    for( int i = 6 ; i <= num ; i++ )
    {
        int sum = 0 ;
        for( int j = 1 ; j <= i/2 ; j++ )
        {
            if( i%j == 0 )
                sum += j;
        }

        if( sum == i )
            std::cout << i << "\n" ;
    }

    return 0 ;
}
