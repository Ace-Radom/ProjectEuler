#include<iostream>

const long long N = 1000000000000;  // 10^12

long long calc_sequence( unsigned long long n ){
    if ( n == 1 )
    {
        return 1;
    }
    if ( n % 2 == 0 )
    {
        return 2 * calc_sequence( n / 2 );
    }
    return calc_sequence( ( n - 1 ) / 2 ) - 3 * calc_sequence( ( n + 1 ) / 2 );
}

// sum_1^k A_k = 2 * A_1 + A_2 - A_k/2

int main(){
    long long a1 = 1;
    long long a2 = calc_sequence( 2 );
    long long an_div_2 = calc_sequence( N / 2 );
    std::cout << 2 * a1 + a2 - an_div_2 << std::endl;
    return 0;
}
