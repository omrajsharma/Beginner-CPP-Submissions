#include <iostream>

void allPrime( int , int ) ;

int main()
{
    std::cout << "Enter the range : " ;
    int x , y ;
    std::cin >> x >> y ;

    allPrime(x , y) ;

    return 0;
}

void allPrime( int a , int b )
{
    for( int i = a ; i <= b ; i++ )
    {
        int check = true ;

        for( int j = 2 ; j <= i/2 ; j++ )
        {
            if( i%j == 0 )
                check = false ;
        }

        if( check )
            std::cout << i << '\n' ;
    }
}
