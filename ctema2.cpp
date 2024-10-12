#include <iostream>
using namespace std;

int main(){
    char a;
    cin>>a;
    bool d=isupper(a);
    if(d){
        cout<<char(tolower(a));
    }
    else{
        cout<<char(toupper(a));
    }
    return 0;
}