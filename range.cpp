#include<iostream>
#include<limits>
using namespace std;
int main()
{
    cout<<"range of char:"<<int(numeric_limits<char>::min())<<"to"<<int(numeric_limits<char>::max())<<endl;

    cout<<"range of short int:"<<numeric_limits<short int>::min()<<"to"<<numeric_limits<short int>::max()<<endl;

    cout<<"range of long int:"<<numeric_limits<long int>::min()<<"to"<<numeric_limits<long int>::max()<<endl;

    cout<<"range of double:"<<numeric_limits<double>::min()<<"to"<<numeric_limits<double>::max()<<endl;

    return 0;
      
}