#include <iostream>

int main()
{
    for( int i = 1 ; i <= 4 ; i++ )
    {
        char c = 'A' ;
        int in = 1 ;
        for( int j = 1 ; j <= 7 ; j++ )
        {
            if( j <= 5-i || j >= 5+i )
                std::cout << ' ' ;
            else
            {

                if( j < 5 )
                {
                    std::cout << c ;
                    c++;
                }
                else
                {
                    std::cout << in ;
                    in++ ;
                }
            }
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
