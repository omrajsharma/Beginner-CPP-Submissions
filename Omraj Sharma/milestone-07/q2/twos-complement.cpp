#include <iostream>

int main()
{
    std::cout << "Enter a string : " ;
    std::string binary ;
    std::cin >> binary ;

    for( int i = 0 ; i < binary.length() ; i++ )
    {
        if( binary[i] == '0')
            binary[i] = '1' ;
        else
            binary[i] = '0' ;
    }

    int carry = 1 ;
    for( int i = binary.length()-1 ; i >= 0 ; i-- )
    {
        std::cout << "ini val at " << i << " " << binary[i] << "\n";
        if( binary[i] == '1' )
        {
            if( carry == 1 )
            {
                binary[i] = '0' ;
                carry = 1 ;
            }
        }
        else
            {
                if( carry != 0 )
                {
                    binary[i] = '1' ;
                    carry = 0 ;
                }

            }
        std::cout << "ini val at " << i << " " << binary[i] << "\n";
    }

    std::cout << "two's complement is : " << binary << "\n" ;

    return 0 ;
}
