#include <iostream>

int main()
{
    std::cout << "enter the size of the array : " ;
    int num ;
    std::cin >> num ;

    int arr[num] ;

    std::cout << "Enter the value of all the element of the array" << '\n' ;
    for( int i = 0 ; i < num ; i++ )
        std::cin >> arr[i] ;

    std::cout << "\nAll the Unique elements are : " ;
    for( int i = 0 ; i < num ; i++ )
    {
        bool flag = true ;

        for( int j = 0 ; j < num ; j++ )
        {
            if( i != j )
                if( arr[j] == arr[i] )
                    flag = false ;
        }

        if(flag)
            std::cout << arr[i] << ' ' ;
    }

    return 0;
}
