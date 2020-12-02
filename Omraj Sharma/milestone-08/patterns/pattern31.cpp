#include <iostream>

int main()
{
    for( int i = 1 ; i <= 5 ; i++ )
    {
        int n = 1 ;
        char c = 'A' ;
        for( int j = 1 ; j <= 7 ; j++ )
        {
            if( j <= 4-i || j >= 4+i )
                std::cout << ' ' ;
            else
            {
                if( i%2 == 0 )
                {
                    if( j%2 == 0 )
                    {
                        std::cout << c ;
                        c++;
                    }
                    else
                        std::cout << ' ' ;
                }
                else
                {
                    if( j%2 == 0 )
                        std::cout << ' ' ;
                    else
                    {
                        std::cout << n ;
                        n++ ;
                    }
                }
            }
        }
        std::cout << '\n' ;
    }

    return 0;
}
