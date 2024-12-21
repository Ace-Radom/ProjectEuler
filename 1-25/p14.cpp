#include<iostream>

int count_collatz_seq_len( unsigned long long n , int step = 0 ){
    if ( n == 1 )
    {
        return step;
    }
    else if ( n % 2 == 0 )
    {
        return count_collatz_seq_len( n / 2 , step + 1 );
    }
    else
    {
        return count_collatz_seq_len( 3 * n + 1 , step + 1 );
    }
}

int main(){
    int max = 0;
    int maxn = 0;
    for ( int i = 1 ; i < 1000000 ; i++ )
    {
        int seq_len = count_collatz_seq_len( i );
        if ( seq_len > max )
        {
            max = seq_len;
            maxn = i;
        }
    }
    std::cout << maxn << std::endl;
    return 0;
}
