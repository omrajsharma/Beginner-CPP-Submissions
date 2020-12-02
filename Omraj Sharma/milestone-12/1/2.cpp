/*
sum of right diagonal
sum of left diagonal
*/

#include <iostream>

void leftSum(int arr[3][3])
{
    int sum = 0 ;
    for(int i = 0 ; i < 3 ; i++ )
        for( int j = 0 ; j < 3 ; j++ )
            if(i==j)
                sum += arr[j][j] ;
    std::cout << "left diagonal sum : " << sum << '\n' ;
}

void rightSum ( int arr[3][3])
{
    int sum = 0 ;
    for( int i = 0 ; i < 3 ; i++ )
        for ( int j = 0 ; j < 3 ; j++ )
            if( i == (3-j-1) )
                sum += arr[i][j] ;
    std::cout << "Right diagonal sum : " << sum << '\n' ;
}

int main()
{
    int arr[][3] { {1,2,3} , {4,5,6} , {7,8,1} } ;

    leftSum (arr) ;
    rightSum (arr) ;

    return 0 ;
}
