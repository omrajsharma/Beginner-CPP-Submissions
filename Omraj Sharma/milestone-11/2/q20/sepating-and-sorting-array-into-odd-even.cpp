#include <iostream>

void sortArray( int &arr , int sizi ) ;

int main()
{
    std::cout << "Enter the size of array : " ;
    int sizi ;
    std::cin >> sizi ;
    int arr[sizi] ;

    std::cout << "Enter elements in array : " ;
    for ( int i = 0 ; i < sizi ; i++ )
        std::cin >> arr[i] ;

    //counting number of odd and evens
    int evenCount = 0 , oddCount = 0 ;
    for( int i = 0 ; i < sizi ; i++ )
        if( arr[i] %2 == 0 )
            evenCount++ ;
        else
            oddCount++ ;

    // two diff array storing even and odd separately
    int arrEven[evenCount], arrOdd[oddCount] ;
    evenCount = 0 ;
    oddCount = 0 ;
    for( int i = 0 ; i < sizi ; i++ )
        if( arr[i] %2 == 0 )
            {
                arrEven[evenCount] = arr[i] ;
                evenCount++ ;
            }
        else
            {
                arrOdd[oddCount] = arr[i] ;
                oddCount++ ;
            }

    int idx , temp;
    for( int i = 0 ; i < evenCount ; i++ )
    {
        idx = 0 ;
        for( int j = 0 ; j < (evenCount-i) ; j++ )
            if( arrEven[j] > arrEven[idx])
                idx = j ;
        temp = arrEven[evenCount-1-i] ;
        arrEven[evenCount-1-i] = arrEven[idx] ;
        arrEven[idx] = temp ;
    }

    for( int i = 0 ; i < oddCount ; i++ )
    {
        idx = 0 ;
        for( int j = 0 ; j < (oddCount-i) ; j++ )
            if( arrOdd[j] > arrOdd[idx])
                idx = j ;
        temp = arrOdd[oddCount-1-i] ;
        arrOdd[oddCount-1-i] = arrOdd[idx] ;
        arrOdd[idx] = temp ;
    }

    for( int i = 0 ; i < sizi ; i++ )
    {
        if( i < evenCount )
            arr[i] = arrEven[i] ;
        else
            arr[i] = arrOdd[i-evenCount] ;
    }

    std::cout << "Elements in the array : " ;
    for ( int i = 0 ; i < sizi ; i++ )
        std::cout << arr[i] << ' ' ;

    return 0;
}
