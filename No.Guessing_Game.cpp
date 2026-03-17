#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
   
   srand(time(0));
   int a;
   int n = rand()%10 + 1;
   cout<<"yup! I have chossen the no.Now your guessing time ⬇⬇⬇\n";
   cout<<"3 Chances\n";
   
   
   cout<<"Guess no. b/w 1 to 100 :-";
   cin>>a;
   
   
   
   
   if(n>a){
       cout<<"too High too High !";
       cout<<":-";
       cin>>a;
       if(n>a){
           cout<<"again too High too High !";
           cout<<":-";
           cin>>a;
           if(n>a){
               cout<<"Are you on High ? , You loose 😌";
           }
           else if(n<a){
               cout<<"Number is too low , you loose 😌";
           }
           else{
               cout<<"Finally you find it correct !!";
           }
       }
       else if(n<a){
           cout<<"Too low Too low !";
           cout<<":-";
           cin>>a;
           if(n>a){
               cout<<"Think Higher My friend Think High ? , You loose 😌";
           }
           else if(n<a){
               cout<<"Number is too low , you loose 😌";
           }
           else{
               cout<<"Finally you find it correct !!";
           }
           
       }
       else{
           cout<<"WOW you correct it right";
       }
   }
   else if(n<a){
       cout<<"too low too low !";
       cout<<":-";
       cin>>a;
       if(n>a){
           cout<<"too High !";
           cin>>a;
           if(n>a){
               cout<<"Are you on High ? , You loose 😌";
           }
           else if(n<a){
               cout<<"Number is too low , you loose 😌";
           }
           else{
               cout<<"Finally you find it correct !!";
           }
       }
           else if(n<a){
           cout<<"Too low Too low !";
           cout<<":-";
           cin>>a;
           if(n>a){
               cout<<"Think Higher My friend Think High ? , You loose 😌";
           }
           else if(n<a){
               cout<<"Number is too low , you loose 😌";
           }
           else{
               cout<<"Finally you find it correct !!";
           }
           
       }
        else{
            cout<<"you guessed it right !!";
          }
   }
   
   
   else{
       cout<<"WTH ! you guessed it Right";
   }
   
   
   

    return 0;
}
