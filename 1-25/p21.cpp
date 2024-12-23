#include<iostream>
#include<vector>

int func_d( int n ){
    int sum = 0;
    for ( int i = 1 ; i <= n / 2 ; i++ )
    {
        if ( n % i == 0 )
        {
            sum += i;
        }
    }
    return sum;
}

int main(){
    std::vector<int> nums;
    nums.push_back( 0 );
    nums.push_back( 0 );
    // place holder
    int sum = 0;
    for ( int i = 2 ; i < 10000 ; i++ )
    {
        nums.push_back( func_d( i ) );
    }
    for ( int i = 2 ; i < 10000 ; i++ )
    {
        for ( int j = i + 1 ; j < 10000 ; j++ )
        {
            if ( nums[i] == j && nums[j] == i )
            {
                sum += i + j;
            }
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
