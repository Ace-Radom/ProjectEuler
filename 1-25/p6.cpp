#include<iostream>

int main(){
    long long sum_squares = 0;
    long long square_sum = 0;
    for ( int i = 1 ; i <= 100 ; i++ )
    {
        sum_squares += ( i * i );
        square_sum += i;
    }
    square_sum *= square_sum;
    std::cout << square_sum - sum_squares << std::endl;
    return 0;
}
