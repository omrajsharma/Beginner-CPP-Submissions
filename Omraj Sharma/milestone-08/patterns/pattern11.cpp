#include <iostream>

int main()
{
    int c = 1 ;
    for( int i = 1 ; i <= 10 ; i++ )
    {
        for( int j = 1 ; j <=c ; j++ )
            std::cout << '*' ;
        std::cout << '\n' ;
        i < 5 ? c++ : c-- ;
    }

    return 0 ;
}
