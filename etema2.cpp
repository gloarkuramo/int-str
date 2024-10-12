#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    int j=0;
    char b=' ';
    getline(cin, a);
    for(int i=0;i<a.size();i++){
        if(char(a[i])==b){
            j++;
        }
    }
    cout<<j+1;
    return 0;
}