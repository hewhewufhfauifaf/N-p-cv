#include <iostream>
#include <math.h>
using namespace std;
int songuyento(int n){
    for(int i=2;i<=sqrt(n);i++){
         if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    cout<<"chuong trinh tim so nguyen to trong 1 mang"<<endl;
    cout<<"so phan tu cua mang la :";
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"phan tu thu "<<i<<" la :";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(songuyento(a[i])){
            cout<<"cac phan tu trong mang la so nguyen to la :";
            cout<<a[i]<<endl;
        }
    }
}
