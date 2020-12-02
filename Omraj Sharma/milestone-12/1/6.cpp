#include <iostream>

int main()
{
    int m , n ;
    std::cin >> m >> n ;
    int arr[m][n] , arr1[m][n] ;

    std::cout << "Enter the elements of the first array : " ;
    for( int i = 0 ; i < m ; i++ )
        for( int j = 0 ; j < n ; j++ )
            std::cin >> arr[i][j] ;
    std::cout << "Enter the elements of the second array : " ;
    for( int i = 0 ; i < m ; i++ )
        for( int j = 0 ; j < n ; j++ )
            std::cin >> arr1[i][j] ;

    //sum logic
    for( int i = 0 ; i < m ; i++ )
    {
        for( int j = 0 ; j < n ; j++ )
            std::cout << arr[i][j] + arr1[i][j] << ' ' ;
        std::cout << '\n' ;
    }
    return 0 ;
}
