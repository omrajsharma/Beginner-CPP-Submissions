#include <iostream>

int main()
{
    //initialization of array
    int arr[20];
    //elements to input
    std::cout << "Enter the number of elements to enter : " ;
    int num ;
    std::cin >> num ;

    //input the array element
    std::cout << "Enter the elements of array" << '\n';
    for( int i = 0 ; i < num ; i++ )
        std::cin >> arr[i] ;

    //initial array display
    for( int i = 0 ; i < num ; i++ )
        std::cout << arr[i] << ' ' ;

    //input a new element into array
    std::cout << "\nEnter the element to insert : " ;
    int in;
    std::cin >> in ;
    std::cout << "Enter the index : " ;
    int indx;
    std::cin >> indx ;

    int temp = arr[indx] , temp1 ;
    for( int i = indx ; i < num+1 ; i++ )
    {
        if(indx==i)
            arr[i] = in ;
        else
        {
            temp1 = arr[i] ;
            arr[i] = temp ;
            temp = temp1 ;
        }
    }

    for( int i = 0 ; i < num+1 ; i++ )
        std::cout << arr[i] << ' ' ;


    return 0;
}
