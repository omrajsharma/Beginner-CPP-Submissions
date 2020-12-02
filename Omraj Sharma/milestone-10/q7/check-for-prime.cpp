#include <iostream>

bool checkPrime ( int ) ;

int main()
{
    std::cout << "Enter a number : " ;
    int x ;
    std::cin >> x ;

    bool check =  checkPrime( x ) ;

    std::cout << "Checked for prime " << check << '\n' ;

    return 0;
}

bool checkPrime( int a )
{
    bool check = true ;

    for ( int i = 2 ; i <= a/2 ; i++ )
        if( a%i == 0 )
            check = false ;

    return check ;
}
