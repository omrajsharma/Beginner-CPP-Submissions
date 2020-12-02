#include <iostream>

bool check ( int ) ;

int main()
{
    std::cout << "Enter a number : " ;
    int x ;
    std::cin >> x ;

    bool boo = check( x ) ;

    std::string str = (boo == 1)? "Even" : "Odd" ;

    std::cout << "Entered Number is " << str ;

    return 0;
}

bool check( int a )
{
    if( a%2 == 0 )
        return true ;
    else
        return false ;
}
