#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    long binary , binaryTemp ;
    std::cin >> binary ;
    binaryTemp = binary ;

    int arr[] = {0 , 1 , 10 , 11 , 100 , 101 , 110 , 111 } ;

    std::string oct ;
    while( binaryTemp > 0 )
    {
        int temp = binaryTemp % 1000 ;

        for( int i = 0 ; i < 8 ; i++ )
        {
            if( arr[i] == temp )
                oct = (char)(i+48) + oct ;
        }
        binaryTemp /= 1000 ;
    }

    std::cout << "octal value for binary number -> " << binary << " : " << oct << "\n" ;

    return 0 ;
}
