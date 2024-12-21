#include<iostream>
#include<vector>

int main(){
    int upper_bound = 2000000;
    long long sum = 0;
    std::vector<bool> prime_table( upper_bound + 1 , true );
    for ( int i = 2 ; i < upper_bound ; i++ )
    {
        if ( prime_table[i] )
        {
            sum += i;
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
    std::cout << sum << std::endl;
    return 0;
}
