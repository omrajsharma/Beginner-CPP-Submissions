/*
INPUT
5 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
17 18 19 20
OUTPUT
1
5 2
9 6 3
13 10 7 4
17 14 11 8
18 15 12
19 16
20
*/

#include <iostream>

int main()
{
    int row , column ;
    std::cin >> row ;
    std::cin >> column ;
    int arr[row][column] ;

    for( int i = 0 ; i < row ; i++ )
    {
        for( int j = 0 ; j < column ; j++ )
        {
            std::cin >> arr[i][j] ;
        }
    }

    // Logic HERE!!
    int counter = 1 ;
    for( int i = 0 ; i < (row+column-1) ; i++ )
    {
        if(i < row)
        {
            for(int j = 0 ; j < row && j < column && j <= i; j++ )
            {
                std::cout << arr[i-j][j] << ' ' ;
            }
            std::cout << '\n' ;
        }
        else
        {
            for( int j = counter ; j < column && j < (counter+row) ; j++ )
            {
                std::cout << arr[row-j+counter-1][j] << ' ' ;
            }
            std::cout << '\n' ;
            counter++ ;

        }
    }

    return 0 ;
}
