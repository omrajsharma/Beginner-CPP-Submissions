#include <iostream>

int main()
{
    int row = 5 , column  = 4 ;
    int arr[][4] { {1,2,3,4} , {5,6,7,8} , {1,2,3,4} , {5,6,7,8} , {1,2,3,4} } ;

    for( int i = 0 ; i < 5 ; i++ )
    {
        for( int j = 0 ; j < 4 ; j++ )
        {
            std::cout << arr[i][j] << ' ' ;
        }
        std::cout << '\n' ;
    }

    for( int i = 0 ; i < (row+column-1) ; i++ )
    {
        if(i <= (row-1))
        {
            for( int j = i ; j >= 0 ; j-- )
                std::cout << arr[j][i-j] << ' ' ;
            std::cout << '\n' ;
        }
        /*
        else
        {

        }
        */

    }


    return 0 ;
}
