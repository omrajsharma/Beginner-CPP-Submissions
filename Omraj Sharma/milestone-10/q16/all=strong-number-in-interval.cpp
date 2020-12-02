#include <iostream>

void allStrong( int , int ) ;

int main()
{
    std::cout << "Enter the interval : " ;
    int x , y ;
    std::cin >> x >> y ;

    allStrong( x , y ) ;

    return 0 ;
}

void allStrong( int a , int b )
{
    for( int i = a ; i <= b ; i++ )
    {
        int sum = 0 ;
        int num = i ;

        while(num>0)
        {
            int temp = num%10 ;
            int sumTemp = 1 ;

            for( int j = 1 ; j <= temp ; j++ )
                sumTemp *= j ;

            num /= 10 ;
            sum += sumTemp ;
        }

        if( sum == i )
            std::cout << i << '\n' ;
    }
}
