#include <iostream>

int main()
{
    std::cout << "Enter 10 integer value into array : " << '\n' ;

    int arr[10] ;
    for( int i = 0 ; i < 10 ; i++ )
    {
        std::cin >> arr[i] ;
    }

    std::cout << "Enter a number to search in the array : " ;
    int src ;
    std::cin >> src ;

    bool check = false ;

    for( int i = 0 ; i < 10 ; i++ )
    {
        if( src == arr[i] )
            check = true ;
    }

    if(check)
        std::cout << "Number is present in the array" << '\n' ;
    else
        std::cout << "Number is not present in the array" << '\n' ;


    return 0;
}
