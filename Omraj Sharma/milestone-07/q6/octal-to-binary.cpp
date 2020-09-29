#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a number : " ;
    long oct , octTemp ;
    std::cin >> oct ;
    octTemp = oct ;

    std::string arr[] = {"000" , "001" , "010" , "011" , "100" , "101" , "110" , "111" } ;

    std::string binary ;
    int c = 0 ;
    while(octTemp > 0)
    {
        int temp = octTemp % 10 ;

        for( int i = 0 ; i < 8 ; i++ )
        {
            if( temp == i )
            {
                binary = arr[i] + binary;
            }
        }

        octTemp /= 10 ;
        c++ ;
    }

    std::cout << "Entered octal number " << oct << " is converted to binary : " << binary ;

    return 0 ;
}
