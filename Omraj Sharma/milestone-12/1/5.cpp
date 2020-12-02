#include <iostream>

void displayMid( int *arr , int row , int column )
{
    int midRow = ((row-1)/2) ;
    int midColumn = ((column-1)/2) ;

    std::cout << "\nMiddle row is : " ;
    for( int i = 0 ; i < column ; i++ )
        std::cout << *(arr + midRow*column + i) << ' ';
    std::cout << "\nMiddle column is : " ;
    for( int i = 0 ; i < row ; i++ )
        std::cout << *(arr + i*column + midColumn) ;
}

int main()
{
    int row , column ;
    std::cin >> row >> column ;

    int arr[row][column] ;

    for( int i = 0 ; i < row ; i++ )
        for ( int j = 0 ; j < column ; j++ )
            std::cin >> arr[i][j] ;

    displayMid( (int*) arr , row , column ) ;

    return 0 ;
}
