#include <iostream>

int main()
{
    for( int i = 1 ; i <= 7 ; i++ )
    {
        for( int j = 1 ; j <= 7 ; j++)
        {
            if(( j == 1 || j == 7 || i == 1 || i == 7 ) || ( i >= 3 && i <= 5 && j >= 3 && j <= 5 ) && ( i == 3 || i ==5 || j == 3 || j == 5 ))
                std::cout << '*' ;

            else
                std::cout << ' ' ;
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
