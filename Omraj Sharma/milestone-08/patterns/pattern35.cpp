#include <iostream>

int main()
{
    int flag = 1 ;
    int k = 0 ;
    for( int i = 1 ; i < 4*2-1 ; i++ )
    {
        if( i < 4-k )
            std::cout << ' ' ;
        else
        {
            if(flag)
                std::cout << '*' ;
            else
                std::cout << ' ' ;
        }
        if( i == 4+k )
        {
            k++;
            std::cout << '\n' ;

            if(i == 1*4-1)
                break ;
            i = 0 ;
            flag = 1 ;
        }
    }

    return 0;
}
