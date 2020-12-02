/*
Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays. E.g.-
INITIAL array :
58 	24 	13 	15 	63 	9 	8 	81 	1 	78

After spliting :
58 	24 	13 	15 	63
9 	8 	81 	1 	78

*/

#include <iostream>

int main()
{
    int arr[] = {2,4,6,8,10,12,14,16,18,20} ;
    int arr1[5], arr2[5] ;

    for( int i = 0 ; i < 10 ; i++ )
    {
        if(i < 5)
            arr1[i] = arr[i] ;
        else
            arr2[i-5] = arr[i] ;
    }

    for( int i = 0 ; i < 5 ; i++ )
        std::cout << arr1[i] << ' ' ;

        std::cout << '\n' ;

    for( int i = 0 ; i < 5 ; i++ )
        std::cout << arr2[i] << ' ';

    return 0;
}
