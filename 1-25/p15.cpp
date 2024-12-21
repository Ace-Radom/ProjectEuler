#include<iostream>

const int A = 20;

int main(){
    long long grid[A+1][A+1] = {};
    grid[0][0] = 1;
    for ( int i = 0 ; i <= A ; i++ )
    {
        for ( int j = 0 ; j <= A ; j++ )
        {
            if ( i != 0 )
            {
                grid[i][j] += grid[i-1][j];
            }
            if ( j != 0 )
            {
                grid[i][j] += grid[i][j-1];
            }
        }
    }
    std::cout << grid[A][A] << std::endl;
    return 0;
}
