#include <iostream>

void allPerfect( int , int ) ;

int main()
{
    std::cout << "Enter the range " << '\n' ;
    int x , y ;
    std::cin >> x >> y ;

    allPerfect( x , y ) ;

    return 0;
}

void allPerfect( int a , int b )
{
    for( int i = a ; i <= b ; i++ )
    {
        int sum = 0 ;

        for( int j = 1 ; j <= i/2 ; j++ )
            if( i%j == 0 )
                sum += j ;

        if( i == sum )
            std::cout << i << '\n' ;
    }
}
