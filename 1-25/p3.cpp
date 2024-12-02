#include<iostream>
#include<cmath>
#include<cstring>

const long long base_num = 600851475143;
const long long max_num_to_check = ( long long ) std::sqrt( base_num );

bool is_prime( long long num ){
    for ( int i = 2 ; i <= std::sqrt( num ) ; i++ )
    {
        if ( num % i == 0 )
        {
            return false;
        }
    }
    return true;
}

int main(){
    long long max_prime_factor = 0;
    for ( long long i = 2 ; i <= max_num_to_check ; i++ )
    {
        if ( base_num % i == 0 && is_prime( i ) )
        {
            max_prime_factor = i;
        }
    }
    std::cout << max_prime_factor << std::endl;
    return 0;
}
