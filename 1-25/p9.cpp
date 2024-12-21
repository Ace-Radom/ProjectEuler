#include<cmath>
#include<iostream>

int main(){
    for ( int a = 1 ; a < 334 ; a++ )
    {
        for ( int b = a + 1 ; b < 1000 - a ; b++ )
        {
            int c = 1000 - a - b;
            if ( c < b )
            {
                continue;
            }
            if ( std::pow( a , 2 ) + std::pow( b , 2 ) == std::pow( c , 2 ) )
            {
                std::cout << a << " " << b << " " << c << std::endl << a * b * c << std::endl;
                return 0;
            }
        }
    }
    return 1;
}
