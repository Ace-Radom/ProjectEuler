#include<iostream>
#include<cmath>
#include<vector>

int main(){
    int n = 10001;
    long long upper_bound = ( long long ) std::round( n * ( std::log( n ) + std::log( std::log( n ) ) ) );
    int prime_count = 0;
    long long prime = 0;
    std::vector<bool> prime_table( upper_bound + 1 , true );
    for ( long long i = 2 ; i < upper_bound ; i++ )
    {
        if ( prime_table[i] )
        {
            prime_count++;
            prime = i;
            if ( prime_count == n )
            {
                break;
            }
            for ( int j = 2 ; ; j++ )
            {
                if ( i * j > upper_bound )
                {
                    break;
                }
                prime_table[i*j] = false;
            }
        }
    }
    if ( prime_count < n )
    {
        std::cerr << "Error: no enough prime number found, found " << prime_count << " primes, last one is " << prime << "." << std::endl;
        return 1;
    }
    std::cout << prime << std::endl;
    return 0;
}
