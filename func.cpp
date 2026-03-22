#include <iostream>
using namespace std;

int sum(int a,int b) {//parameters
    return a + b;
}

int min(double a,double b){
    if(a>b){
        return b;
    }
    else{
        return a;// return is final statement of func 
    }
}

int digitsum(int n){
    int s=0;
    s+= n%10;
    s+= (n/10)%10;
    s+= (n/10)/10;
    return s;
}


int easydigitsum(int n){
    int s=0;
    while(n>0){
        int l=n%10;
        n=n/10;
        s+=l;
    }
    return s;
}

int fact(int f){
    for(int i=1;i<=f;i++){
        f*=i;
    }
    return f;
}

int ncr(int n,int r){
    int x=fact(n)/(fact(r)*fact(n-r));
    return x;
}

int main() {
    sum(3,4);
    cout<<sum(4,5)<<endl;
    cout<<"min=="<<min(4,2)<<endl;//arguments
    cout<<digitsum(123)<<endl;
    cout<<easydigitsum(123);
    cout<<ncr(2,4);
    
}
// stack memory and heep memory(dynamic)

// every func stored in stack frame
