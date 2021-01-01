/*
INPUT
6 7
OUTPUT
X X X X X X X
X 0 0 0 0 0 X
X 0 X X X 0 X
X 0 X X X 0 X
X 0 0 0 0 0 X
X X X X X X X
*/

#include <iostream>

int main()
{
    int row, column ;

    std::cin >> row ;
    std::cin >> column ;
    char arr[row][column] ;

    for( int i = 0 ; i < row ; i++ )
    {
        for( int j = 0 ; j < column ; j++ )
        {
            arr[i][j] = 'X' ;
        }
    }

    int counter = 1 ;

    while ( counter <= (row-1)/2 )
    {
        for( int i = counter ; i < (column-1-counter) ; i++ )
        {
            arr[counter][i] = '0' ;
            arr[row-1-counter][i] = '0' ;
        }

        for( int i = counter ; i <= (row-1-counter) ; i++ )
        {
            arr[i][counter] = '0' ;
            arr[i][column-1-counter] = '0' ;
        }

        counter += 2 ;
    }

    for( int i = 0 ; i < row ; i++ )
    {
        for( int j = 0 ; j < column ; j++ )
        {
            std::cout << arr[i][j] << ' ' ;
        }
        std::cout << '\n' ;
    }

    return 0 ;
}

