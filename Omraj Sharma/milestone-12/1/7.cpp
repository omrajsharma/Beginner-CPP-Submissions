#include <iostream>

int main()
{
    int m , n ;
    std::cin >> m >> n ;

    int arr[m][n] , arr1[n][m] ;

    std::cout << "Enter the first array : \n" ;
    for( int i = 0 ; i < m ; i++ )
        for( int j = 0 ; j < n ; j++ )
            std::cin >> arr[i][j] ;
    for( int i = 0 ; i < m ; i++ )
    {
        for( int j = 0 ; j < n ; j++ )
            std::cout << arr[i][j] << ' ' ;
        std::cout << '\n' ;
    }

    std::cout << "Enter the second array : \n" ;
    for( int i = 0 ; i < n ; i++ )
        for( int j = 0 ; j < m ; j++ )
            std::cin >> arr1[i][j] ;
    for(int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++ )
            std::cout << arr1[i][j] << ' ' ;
        std::cout << '\n';
    }

    for( int i = 0 ; i < m ; i++ )
    {
        for( int j = 0 ; j < n ; j++ )
            std::cout << arr[i][j] * arr1[j][i] << ' ' ;
        std::cout << '\n' ;
    }


    return 0 ;
}
