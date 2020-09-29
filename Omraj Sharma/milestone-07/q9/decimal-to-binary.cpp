#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    long dec , decTemp ;
    std::cin >> dec ;
    decTemp = dec ;

    long binary = 0 ;
    int place = 1 ;
    while(decTemp > 0)
    {
        int rem = decTemp % 2 ;
        binary = (rem*place) + binary ;
        decTemp /= 2 ;
        place *= 10 ;
    }

    std::cout << "Binary code is : " << binary ;

    return 0 ;
}
