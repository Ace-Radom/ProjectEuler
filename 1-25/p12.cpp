#include<cmath>
#include<iostream>

long long calc_triangle_num( int n ){
    return ( 1 + n ) * n / 2;
}

int count_divisors( long long n ){
    int count = 0;
    for ( long long i = 1 ; i <= std::sqrt( n ) ; i++ )
    {
        if ( n % i == 0 )
        {
            count += 2;
        }
    }
    if ( n == std::pow( static_cast<long long>( std::sqrt( n ) ) , 2 ) )
    {
        count--;
    }
    return count;
}

int main(){
    int n = 0;
    while ( ++n )
    {
        long long this_triangle_num = calc_triangle_num( n );
        if ( count_divisors( this_triangle_num ) > 500 )
        {
            std::cout << this_triangle_num << " " << count_divisors( this_triangle_num ) << std::endl;
            return 0;
        }
    }
    return 1;
}
