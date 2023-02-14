#include<iostream>
using namespace std;
int pow(int x, int n){
    
    if(n==0 && x!=0){
        return 1;
    }
    
    
   int s=x*pow(x,n-1);
    return s;
    
 
}
int main (){
    int x,n;
    cin>>x>>n;
    cout<<pow(x,n)<<endl;
}