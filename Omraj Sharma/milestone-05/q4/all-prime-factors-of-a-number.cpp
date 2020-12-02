#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    int num ;
    std::cin >> num ;

    std::cout << "\nPrime factor of " << num << " : " ;
    for( int i = 2 ; i <= num/2 ; i++ )
    {
        bool check = true ;
        for( int j = 2 ; j <= i/2 ; j++ )
        {
            if( i%j == 0)
            {
                check = false ;
                break ;
            }
        }
        if(check)
        {
            if( num % i == 0 )
                std::cout << i << " " ;
        }
    }
    std::cout << std::endl;

    return 0 ;
}
