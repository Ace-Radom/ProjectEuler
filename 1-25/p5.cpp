#include<iostream>
#include<climits>
#include<vector>

int main(){
    int n = 20;
    int min_num = 1;
    std::vector<int> nums;
    nums.push_back( 0 );  // placeholder
    for ( int i = 1 ; i <= n ; i++ )
    {
        nums.push_back( i );
    }
    for ( int i = 1 ; i <= n ; i++ )
    {
        min_num *= nums[i];
        for ( int j = i + 1 ; j <= n ; j++ )
        {
            if ( nums[j] % nums[i] == 0 )
            {
                nums[j] /= nums[i];
            }
        }
    }
    std::cout << min_num << std::endl;
    return 0;
}
