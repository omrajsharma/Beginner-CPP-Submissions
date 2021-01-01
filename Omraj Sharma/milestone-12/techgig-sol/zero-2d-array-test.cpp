#include <iostream>

int main()
{
    int arr[3][3] = {0} ;

    for ( int i = 0 ; i < 3 ; i++ )
        for( int j = 0 ; j < 3 ; j++ )
            std::cout << arr[i][j] ;

    return 0 ;
}
