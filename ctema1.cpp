#include <iostream>
using namespace std;

int main(){
    int s,m,h;
    cin>>s;
    h=(s/60)/60;
    m=(s%3600)/60;
    cout<<"It is "<<h<<" hours "<<m<<" minutes.";
    return 0;
}