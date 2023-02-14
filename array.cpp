#include<iostream>
using namespace std;
bool is_shorted(int a[], int size){
    if(size==0 || size== 1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool isSmallerSorted = is_shorted(a+1,size-1);
    return isSmallerSorted;
    if(isSmallerSorted){
        return true;
    }else{
        return false;
    }
}
int main(){
int a[4];
for(int i=0; i<=3; i++)
cin>>a[i];
}