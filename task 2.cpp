#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string slovo="word";
    string stroka="position of word in word a string";

    string word;
    int count = 0;
cout<<stroka<<endl;
    for ( istringstream is( stroka ); is >> word; ){

        count ++;

        if (word == slovo) {
            cout<<word<<endl;
            cout << "position:"<< count << endl;
        }
    }
}