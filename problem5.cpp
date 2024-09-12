#include <iostream>
using namespace std;

int main() {
    float h1,h2,h3;
    cout<<"Sardor's height (cm):"<<endl;
    cin>>h1;
    cout<<"Mike's height (ft):"<<endl;
    cin>>h2;
    h3 = h2*30.48;
    if(h3>h1) {
        cout<<1<<endl;
    }
    else {
        cout<<0<<endl;
    }
    return 0;
}