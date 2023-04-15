#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    int sum=0;
    while (i<=n)
    {
        sum =sum+i;
        i=i+1;
    }
    cout<<sum<<endl;
}