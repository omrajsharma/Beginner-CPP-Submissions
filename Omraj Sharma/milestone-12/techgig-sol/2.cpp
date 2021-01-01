
// Longest consecutive Chain in 2D Array

/*
INPUT
3 3
3 2 5
4 1 4
5 6 5
OUTPUT
6

INPUT

*/

#include <iostream>

int main()
{
    int row, column, counter, tr, tc, maxi ;
    bool flag ;

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

    int temparr[row][column] = {0} ;

    // LOGIC
    for( int i = 0 ; i < row ; i++ )
    {
        for( int j = 0 ; j < column ; j++ )
        {
            counter = 1 ;
            flag = true ;
            tr = i ;
            tc = j ;
            while(flag)
            {
                if( (arr[tr][tc]+1) == arr[tr-1][tc] && tr != 0 )
                {
                    tr = tr-1 ;
                    counter++ ;
                    std::cout << arr[tr][tc] << ' ' << 1 ;
                }
                else if( (arr[tr][tc]+1) == arr[tr][tc-1] && tc != 0 )
                {
                    tc = tc-1 ;
                    counter++ ;
                    std::cout << arr[tr][tc] << ' ' << 2;
                }
                else if( (arr[tr][tc]+1) == arr[tr+1][tc] && tr != (row-1) )
                {
                    tr = tr+1 ;
                    counter++ ;
                    std::cout << arr[tr][tc] << ' ' << 3;
                }
                else if( (arr[tr][tc]+1) == arr[tr][tc+1] && tc != (column) )
                {
                    tc = tc+1 ;
                    counter++ ;
                    std::cout << arr[tr][tc] << ' ' << 4;
                }
                else
                {
                    flag = false ;
                    temparr[i][j] = counter ;
                    if( counter > maxi )
                    {
                        maxi = counter ;
                    }
                }
                std::cout << '\n' ;
            }
        }
    }

    std::cout << maxi ;

    /*
    for( int i = 0 ; i < row ; i++ )
    {
        for( int j = 0 ; j < column ; j++ )
        {
            std::cout << temparr[i][j] << ' ' ;
        }
        std::cout << '\n' ;
    }
    */

    return 0 ;
}
