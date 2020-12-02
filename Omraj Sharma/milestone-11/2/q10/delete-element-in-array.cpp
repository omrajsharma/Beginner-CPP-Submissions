#include <iostream>

int main()
{
    int arr[] {1,2,3,4,5,6,7,8,9,10} ;
    for( int i = 0 ; i < 10 ; i++ )
        std::cout << arr[i] << ' ';

    std::cout << "Enter the index to delete : " ;
    int idx ;
    std::cin >> idx ;

    for( int i = idx ; i < 10 ; i++ )
        arr[i] = arr[i+1] ;

    for( int i = 0 ; i < 9 ; i++ )
        std::cout << arr[i] << ' ';

    return 0;
}
