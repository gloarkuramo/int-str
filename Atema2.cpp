#include <iostream>
using namespace std;

int main(){
    char a;
    cin>>a;
    bool d=isdigit(a);
    if(d){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}