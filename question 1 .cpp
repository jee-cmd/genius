#include<iostream>
using namespace std;
int main(){
    int n,r=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n>0){
        r=r*10 + n%10;
        n=n/10;
    }
    cout<<"reversed the number "<<r<<endl;

}
