#include <iostream>

int main()
{
    std::cout << "Enter the number of element in array : " ;
    int num ;
    std::cin >> num ;

    int arr[num] , arr1[num] ;
    int arr2[num] = {0} ;

    std::cout << "Enter the elements of the array" << '\n';
    for( int i = 0 ; i < num ; i++ )
        std::cin >> arr[i] ;

    int counter = 0 ;
    for( int i = 0 ; i < num ; i++ )
    {
        bool flag = true ;

        for( int j = 0 ; j < num ; j++ )
            if( arr[i] == arr1[j] )
                flag = false ;

        if(flag)
        {
            arr1[counter] = arr[i];
            counter++;
        }
        else
        {
            for( int j = 0 ; j <= counter ; j++ )
                if(arr[i]==arr1[j])
                    ++arr2[j];
        }
    }

    // Why I am using +1 with arr2 cout
    for( int i = 0 ; i < counter ; i++ )
        std::cout << "Total number of frequency of element " << arr1[i] << " is : " << arr2[i]+1 << '\n' ;

    return 0;
}
