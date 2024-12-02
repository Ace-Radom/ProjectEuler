#include<iostream>
#include<deque>

const int max_num_to_check = 999 * 999;
const int min_num_to_check = 100 * 100;

bool is_palindrome( int num ){
    int temp = num;
    std::deque<int> digits;
    while ( temp > 0 )
    {
        digits.push_front( temp % 10 );
        temp /= 10;
    }
    int digits_count = digits.size();
    for ( int i = 0 ; i < digits_count / 2 ; i++ )
    {
        if ( digits[i] != digits[digits_count-i-1] )
        {
            return false;
        }
    }
    return true;
}

int main(){
    int max_num = max_num_to_check + 1;
    for ( int i = max_num_to_check ; i > min_num_to_check ; i-- )
    {
        if ( is_palindrome( i ) )
        {
            for ( int j = 100 ; j <= 999 ; j++ )
            {
                if ( i % j == 0 )
                {
                    int num = i / j;
                    if ( num >= 100 && num <= 999 )
                    {
                        std::cout << i << " = " << j << " * " << num << std::endl;
                        return 0;
                    }
                }
            }
        }
    }
    std::cout << "Not found" << std::endl;
    return 0;
}
