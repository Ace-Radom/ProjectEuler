#include<algorithm>
#include<exception>
#include<fstream>
#include<iostream>
#include<string>
#include<vector>

std::vector<std::string> read_name_list( const std::string& fp ){
    std::ifstream rFile( fp , std::ios::in );
    if ( !rFile.is_open() )
    {
        throw std::runtime_error( "file not found" );
    }
    std::string content( ( std::istreambuf_iterator<char>( rFile ) ) , std::istreambuf_iterator<char>() );
    rFile.close();
    std::size_t pos = 0;
    std::vector<std::string> list;
    while ( ( pos = content.find( '"' , pos ) ) != std::string::npos )
    {
        std::size_t pos1 = content.find( '"' , pos + 1 );
        list.push_back( content.substr( pos + 1 , pos1 - pos - 1 ) );
        pos = pos1 + 1;
    }
    return list;
} 

int main(){
    std::vector<std::string> name_list = read_name_list( "./p22.txt" );
    std::sort( name_list.begin() , name_list.end() );
    unsigned long long sum = 0;
    for ( int i = 0 ; i < name_list.size() ; i++ )
    {
        int worth = 0;
        for ( const auto& it : name_list[i] )
        {
            worth += it - 'A' + 1;
        }
        sum += worth * ( i + 1 );
    }
    std::cout << sum << std::endl;
    return 0;
}
