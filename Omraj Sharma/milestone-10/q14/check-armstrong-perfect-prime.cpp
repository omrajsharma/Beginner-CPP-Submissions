#include <iostream>

void checkPrime( int ) ;
void checkPerfect( int ) ;
void checkArmstrong( int ) ;

int main()
{
    std::cout << "Enter a number for checking : " ;
    int x ;
    std::cin >> x ;

    checkPrime(x) ;
    checkPerfect(x) ;
    checkArmstrong(x) ;

    return 0;
}

void checkPrime(int a)
{
    int check = true ;

    for( int i = 2 ; i <= a/2 ; i++ )
        if( a%i == 0 )
            check = false ;

    if(check)
        std::cout << "\nEntered Number is Prime !!" ;
    else
        std::cout << "\nEntered Number is Not Prime !!" ;
}

void checkPerfect( int a )
{
    int sum = 0 ;

    for ( int i = 1 ; i <= a/2 ; i++ )
    {
        if( a%i == 0 )
        {
            sum += i ;
        }
    }

    if( sum == a )
        std::cout << "\nThis is a perfect number !!" ;
    else
        std::cout << "\nThis is not a perfect number !!" ;
}

void checkArmstrong( int a )
{
    int sum = 0 ;
    int aStore = a ;

    while( a > 0 )
    {
        int temp = a%10 ;
        sum += (temp*temp*temp) ;
        a /= 10 ;
    }

    std::cout << sum ;

    if( sum == aStore )
        std::cout << "\nEntered number is armstrong number !! " ;
    else
        std::cout << "\nEntered number is not armstrong number !!" ;

    std::cout << '\n' ;
}
