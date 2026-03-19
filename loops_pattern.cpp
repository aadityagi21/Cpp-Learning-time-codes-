#include <iostream>
using namespace std;
int main() {
    
    int n,c;
    cout<<":=";
    cin>>n;
    
    
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
            
        }
        cout<<endl;
    }
    
    cout<<endl<<endl<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c++;
            cout<<c<<" ";
        }
        cout<<endl;
    }
    
    cout<<"\n\n\n";
    
    for(int i =0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }


}
