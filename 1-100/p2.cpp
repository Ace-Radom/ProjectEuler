#include<iostream>

int main(){
    long long sum = 2;  // the second fibonacci num is already an even num
    int n1 = 1;
    int n2 = 2;
    int n3 = 0;
    while ( n3 <= 4000000 )
    {
        n3 = n1 + n2;
        if ( n3 % 2 == 0 )
        {
            sum += n3;
        }
        n1 = n2;
        n2 = n3;
    }
    std::cout << sum << std::endl;
    return 0;
}
