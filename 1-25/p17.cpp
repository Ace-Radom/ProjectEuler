#include<iostream>
#include<unordered_map>

const std::unordered_map<int,int> letter_len = {
    { 1 , 3 } ,
    { 2 , 3 } ,
    { 3 , 5 } ,
    { 4 , 4 } ,
    { 5 , 4 } ,
    { 6 , 3 } ,
    { 7 , 5 } ,
    { 8 , 5 } ,
    { 9 , 4 } ,
    { 10 , 3 } ,
    { 11 , 6 } ,
    { 12 , 6 } ,
    { 13 , 8 } ,
    { 14 , 8 } ,
    { 15 , 7 } ,
    { 16 , 7 } ,
    { 17 , 9 } ,
    { 18 , 8 } ,
    { 19 , 8 } ,
    { 20 , 6 } ,
    { 30 , 6 } ,
    { 40 , 5 } ,
    { 50 , 5 } ,
    { 60 , 5 } ,
    { 70 , 7 } ,
    { 80 , 6 } ,
    { 90 , 6 } ,
    { 100 , 7 }
};

int get_letter_len( int n ){
    if ( n < 20 )
    {
        return letter_len.at( n );
    }
    else if ( n < 100 )
    {
        return letter_len.at( n / 10 * 10 ) + ( ( n % 10 == 0 ) ? 0 : letter_len.at( n % 10 ) );
    }
    else
    {
        return letter_len.at( n / 100 ) + 7 + ( ( n % 100 == 0 ) ? 0 : ( 3 + get_letter_len( n % 100 ) ) );
    }
}

int main(){
    int sum = 0;
    for ( int i = 1 ; i < 1000 ; i++ )
    {
        sum += get_letter_len( i );
    }
    sum += 11;
    std::cout << sum << std::endl;
    return 0;
}
