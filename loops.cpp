#include <iostream>
using namespace std;

int main() {
    
    float c=0.2342;
    while(c<5){
        cout<<c<<endl;
        c++;
    }
   
  for(int i=0;i<=11;i++){
      cout<<i<<endl;
  }

int n,i,sum=0;
cout<<"Enter no:";
cin>>n;
for(i=1;i<=n;i++){
    sum+=i;
}

cout<<sum;

int n,oddsum=0;
cout<<":-";
cin>>n;
for(int i=1;i<=n;i++){
    if(i%2!=0){
        oddsum+=i;
    }
}
cout<<sum;


int n,evensum=0;
cout<<":-";
cin>>n;
for(int i=1;i<=n;i++){
    if(i%2==0){
        evensum+=i;
    }
}
cout<<evensum;

int n,i=1,oddsum=0;
cout<<":-";
cin>>n;
while(i<=n){
    if(i%2!=0){
        oddsum+=i;
    }
    i++;
}

cout<<oddsum;

int i = 1,n=10;
do{
    cout<<i<<" ";
    i++;
}while(i<=n);

int n,prime;
cout<<"=";
cin>>n;// OR isprime=true;
isprime=true;
for(int i=2;i<n;i++){
    
    if(n%i==0){
        cout<<n<<" is a not Prime no.";// OR isprime=false;
        break;
    }
    else{
        cout<<"Prime no.";
    }
}

/* WE CAN ALSO FIND OUT PRIME BY LOOP RANGE
  FROM 1 - root(n)  bcoz after a time factors start repeating
   like eg of 8 {1*8 , 2*4 , 4*2 , 8*1 } in this see how they repeat after 2 terms and highest factor can be root(n) * root(n)
  so yaa       */

int n,prime;
cout<<"=";
cin>>n;
for(int i=2;i*i<=n;i++){
    
    if(n%i==0){
        cout<<n<<" is a not Prime no.";// OR isprime=false;
        break;
    }
    else{
        cout<<"Prime no.";
    }
}





    return 0;}
