#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> binary={1,1,1,0,0};
    int decimal=0;
    int x;
    int length=binary.size();
    for(int i=0;i<length;++i){
        if(binary[i]==1){

            x=pow(2,length-1-i);

            decimal=decimal+x;

        }
    }

    cout<<decimal;
}