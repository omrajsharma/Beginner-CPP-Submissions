#include <iostream>

int check( int ) ;

int main()
{
    std::cout << "Enter your age : " ;
    int age ;
    std::cin >> age ;

    int chik = check( age ) ;

    std::string eligibility = ( chik == 1 ) ? "Eligible \n" : "Not Eligible \n" ;

    std::cout << "Your are " << eligibility ;

    return 0;
}

int check( int age )
{
    if( age >= 18 )
        return 1 ;
    else
        return 0 ;
}
