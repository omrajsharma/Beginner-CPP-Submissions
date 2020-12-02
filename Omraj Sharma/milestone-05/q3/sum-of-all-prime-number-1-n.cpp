#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int num ;
    std::cin >> num ;

    int sum = 0 ;
    for( int i = 2 ; i <= num ; i++ )
    {
        bool check = true ;
        for( int j = 2 ; j <= i/2 ; j++ )
        {
            if( i%j == 0 )
            {
                check = false ;
                break ;
            }
        }
        if(check)
        {
            std::cout << i << "\n";
            sum += i ;
        }

    }

    std::cout << "\n Result of all prime numbers between 1 to " << num << " : " << sum << "\n";

    return 0 ;
}
