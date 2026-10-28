#include<iostream>
using namespace std;
 int main(){
   int a,b,c;
   cout<<"Enter three num:";
   cin>>a>>b>>c;

   if(a>=b && a>=c){
    cout<<"Largest number="<<a;
   }else if (b>=a && b>=c)
   {
      cout<<"Largest number="<<b;
   }else{
    cout<<"largest number="<<c;
   }
   

    return 0;
 }