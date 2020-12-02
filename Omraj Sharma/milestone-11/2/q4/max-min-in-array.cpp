#include <iostream>

int main()
{
    std::cout << "Enter the size of the array : " ;
    int num ;
    std::cin >> num ;
    int arr[num] ;

    std::cout << "Enter the elements of the array" << '\n' ;
    for( int i = 0 ; i < num ; i++ )
        std::cin >> arr[i] ;

    int mini = arr[0] , maxi = arr[0] ;
    for( int i = 0 ; i < num ; i++ )
        if( arr[i] < mini )
            mini = arr[i] ;
        else if( arr[i] > maxi )
            maxi = arr[i] ;

    std::cout << "Array has maximum value of : " << maxi << " and minimum value of : " << mini << '\n' ;

    return 0;
}
