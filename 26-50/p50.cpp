#include<cmath>
#include<iostream>
#include<vector>

int main(){
    int upper_bound = 1000000;
    std::vector<bool> num_table( upper_bound + 1 , true );
    std::vector<int> prime_table;
    for ( int i = 2 ; i < upper_bound ; i++ )
    {
        if ( num_table[i] )
        {
            prime_table.push_back( i );
            for ( int j = 2 ; ; j++ )
            {
                if ( i * j > upper_bound )
                {
                    break;
                }
                num_table[i*j] = false;
            }
        }
    }

    int max_prime_sum = 0;
    int most_consecutive_prime_count = 0;
    for ( int i = 0 ; i < prime_table.size() ; i++ )
    {
        int sum = 0;
        int prime_sum = 0;
        int consecutive_prime_count = 0;
        for ( int j = i ; j < prime_table.size() ; j++ )
        {
            sum += prime_table[j];
            if ( sum > upper_bound )
            {
                break;
            }
            if ( num_table[sum] )
            {
                prime_sum = sum;
                consecutive_prime_count = j - i;
            }
        }
        if ( consecutive_prime_count > most_consecutive_prime_count )
        {
            max_prime_sum = prime_sum;
            most_consecutive_prime_count = consecutive_prime_count;
        }
    }

    std::cout << max_prime_sum << std::endl;

    return 0;
}
