#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={'a','b','c','d','e'};
    for(char val:v){
        cout << val << endl;
    }
    return 0;
}