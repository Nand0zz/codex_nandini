#include <iostream>
using namespace std;

int main(){
    string name;
    string college_name;
    int age;
    cout<<"enter your full name:\n";
    getline(cin, name);

    cout<<"enter your college name:\n";
    cin>>college_name;

    cout<<"enter your age;\n";
    cin>>age;

    cout<<"hello "<<name<<".I see you are "<<age<<" years old and currently studying at "<<college_name;

    return 0;

}