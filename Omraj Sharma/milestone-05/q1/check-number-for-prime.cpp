#include <iostream>

int main()
{
    std::cout << "Enter a number " ;
    int num ;
    std::cin >> num ;

    bool check = true ;

    for( int i = 2 ; i <= num/2 ; i++ )
    {
        if( num%i == 0 )
        {
            check = false ;
            break ;
        }
    }

        if(check)
            std::cout << "Number is prime ";
        else
            std::cout << "Number is not prime ";

    return 0 ;
}
