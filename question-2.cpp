#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the number 1"<<endl;
    cin>>a;
    cout<<"enter the number 2"<<endl;
    cin>>b;
    cout<<"enter the number 3"<<endl;
    cin>>c;
    if(a>b&&a>c){
        cout<<a<<" is the largest number"<<endl;

    }
    else if(b>a&&b>c){
        cout<<b<<" is the largest number"<<endl;

    }
    else{
        cout<<c<<" is the largest"<<endl;

    }

}
