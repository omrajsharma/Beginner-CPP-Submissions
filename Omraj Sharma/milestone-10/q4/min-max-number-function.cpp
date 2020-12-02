#include <iostream>

void minimum ( int , int , int ) ;
void maximum ( int , int , int ) ;

int main()
{
    int x, y, z ;
    std::cout << "Enter three number : " ;
    std::cin >> x >> y >> z ;

    minimum( x,y,z ) ;
    maximum( x,y,z ) ;

    return 0;
}

void minimum ( int a , int b , int c )
{
    int mini ;

    if( a < b )
    {
        if( a < c )
        {
            mini =  a ;
        }
        else
        {
            mini = c ;
        }
    }
    else
    {
        if( b < c )
            mini = b ;
        else
            mini = c ;
    }
    std::cout << "Minimum number is : " << mini << ' ';
}

void maximum( int a , int b , int c )
{
    int maxi ;

    if( a > b )
    {
        if( a > c )
            maxi = a ;
        else
            maxi = c ;
    }
    else
    {
        if( b > c )
            maxi = b ;
        else
            maxi =  c ;
    }
    std::cout << "Maximum number is : " << maxi << '\n';
}
