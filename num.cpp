#include <iostream>
using namespace std;

int num(int n){
    
    if(n==0){
        return 1;
         
}
    
   
   int p=num(n-1);
   return p; 
}
int main(){
    int n;
    cin>>n;
    cout<<num(n)<<endl;


}