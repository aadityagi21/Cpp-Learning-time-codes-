#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<":";
    cin>>n;

        char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch<<" ";
        }
            ch+=1;
        cout<<endl;
    }
    
    cout<<"\n\n\n";
    
    
    for(int i=0;i<n;i++){
        int a=1;
        for(int j=0;j<i+1;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    
    cout<<"\n\n\n";
    
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    cout<<"\n\n\n";
    
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    cout<<"\n\n\n";
    
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    
    cout<<"\n\n\n";
    
    
    
    ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
    cout<<"\n\n\n";
    
    
    

    for(int i=0;i<n;i++){
        
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    
    cout<<"\n\n\n";
    
    
    
    

    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    
    cout<<"\n\n\n";
}
