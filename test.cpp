#include <iostream>

using namespace std;

int rec(int m, int n){
    if(m==n){
        return 1;
    }
    return m*rec(m-1, n);
}

int ite(int m, int n){
    int ans=1;
    int s=m-n;
    for(int i=0; i<s; i++){
        ans=ans*m;
        m--;
    }
    return ans;
}

int main(){
    cout<<"rec "<<rec(6, 4)<<endl<<"ite "<<ite(6, 4);
    return 0;
}