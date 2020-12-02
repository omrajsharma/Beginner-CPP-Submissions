#include <iostream>

void allArmstrong( int , int ) ;

int main()
{
    std::cout << "Enter the range " << '\n' ;
    int x , y ;
    std::cin >> x >> y ;

    allArmstrong( x , y ) ;

    return 0;
}

void allArmstrong( int a , int b )
{
    for( int i = a ; i <= b ; i++ )
    {
        int sum = 0 ;
        int num = i ;

        while( num >0 )
        {
            int temp = num%10 ;

            int temp1 = temp*temp*temp ;
            sum += temp1 ;

            num /= 10 ;
        }

        if( sum == i )
            std::cout << i << '\n' ;
    }
}
