#include <iostream>

int main()
{
    std::string binary ;
    std::cout << "Enter a binary value : " ;
    std::cin >> binary ;

    for( int i = 0 ; i < binary.length() ; i++ )
    {
        if( binary[i] == '0')
            binary[i] = '1' ;
        else
            binary[i] = '0' ;
    }

    std::cout << "One's complement is : " << binary << "\n" ;

    return 0 ;
}
