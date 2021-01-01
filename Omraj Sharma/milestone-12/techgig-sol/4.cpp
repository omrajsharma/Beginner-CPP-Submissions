// INPACT ON ROW AND COLUMN
#include <iostream>

int main()
{
    int row , column ;

    std::cin >> row ;
    std::cin >> column ;
    int arr[row][column];
    int arrTemp[row][column] ;

    // Input Array
    for ( int i = 0 ; i < row ; i++ )
    {
        for ( int j = 0 ; j < column ; j++ )
        {
            std::cin >> arr[i][j] ;
        }
    }

    // Initializing temparray as 0
    for( int i = 0 ; i < row ; i++ )
    {
        for( int j = 0 ; j < column ; j++ )
        {
            arrTemp[i][j] = 0 ;
        }
    }

    // Logic here
    for( int i = 0 ; i < row ; i++ )
    {
        for ( int j = 0 ; j < column ; j++ )
        {
            if ( arr[i][j] == 1 )
            {
                for( int k = 0 ; k < column ; k++  )
                    arrTemp[i][k] = 1 ;
                for( int l = 0 ; l < row ; l++ )
                    arrTemp[l][j] = 1 ;
            }
        }
    }

    // Display temp array
    for( int i = 0 ; i < row ; i++ )
    {
        for( int j = 0 ; j < column ; j++ )
        {
            std::cout << arrTemp[i][j] << ' ' ;
        }
        std::cout << '\n' ;
    }

    return 0;
}
