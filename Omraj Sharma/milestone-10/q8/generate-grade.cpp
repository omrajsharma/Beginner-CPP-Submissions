#include <iostream>

void showGrade( int ) ;

int main()
{
    std::cout << "Enter your marks (out of hundred) : " ;
    int x ;
    std::cin >> x ;

    showGrade( x ) ;

    return 0;
}

void showGrade( int a )
{
    std::string grade = " " ;

    if( a <= 100 && a >= 91 )
        grade = "AA" ;
    else if ( a <= 90 && a >= 81 )
        grade = "AB" ;
    else if ( a <= 80 && a >= 71 )
        grade = "BB" ;
    else if ( a <= 70 && a >= 61 )
        grade = "BC" ;
    else if ( a <= 60 && a >= 51 )
        grade = "CD" ;
    else if ( a <= 50 && a >= 41 )
        grade = "DD" ;
    else if ( a <= 40 )
        grade = "FAIL" ;
    else
        std::cout << "Invalid Input !!" ;

    if( grade != " " )
        std::cout << "Your Grade is : " << grade << '\n' ;

}
