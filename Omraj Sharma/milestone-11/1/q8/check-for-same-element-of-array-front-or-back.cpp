// Write a program to check if elements of an array are same or not it read from front or back. E.g.-
// 2 	3 	15 	15 	3 	2

#include <iostream>

int main()
{
    int arr[] {1,2,3,4,5,4,3,2,1} ;

    int start = 0 , stop = 9 ;
    bool check = true ;
    for( int i = 0 ; i < stop ; i++ )
    {
        if( arr[start+i] != arr[stop-i-1] )
            check = false ;
    }
    if(check)
        std::cout << "Array is same from the front and last !!" << '\n' ;
    else
        std::cout << "Array is not same from the front and last !!" << '\n' ;

    return 0;
}
