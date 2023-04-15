/*#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter number";
    cin>>n;
    for(i=1; i<=n; i++)
    sum = sum+i;
    cout<<sum<<endl;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n,r,product=1,sum=0;
    cin>>n;
    while ((n>0))
    {
        r=n%10;
        if(r%2==0){
         sum = sum+r;
        }
        else{
        product = product*r;
        
        }
      n=n/10;  
    }
    cout<<sum<<endl;
   cout<<product<<endl;


}*/
/*#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cin>>n;
    while (n>0)
    {
        fact = fact*n;
        n--;
    }
    
    cout<<fact<<endl;
}*/
#include<iostream>
using namespace std;
int main(){
    int n,r,rev=0;
    cin>>n;
    while (n>0)
    {
        rev=(rev*10)+n%10;
        n=n/10;
        
    }
    cout<<rev<<endl;
}
