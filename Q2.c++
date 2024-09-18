#include <iostream>
using namespace std;
int isprime(int num){
   if (num <= 1)
      return 0;
   for (int i = 2; i <= num/2; i++){
      if (num % i == 0)
         { return 0; }
   }
   return 1; //if both failed then num is prime
}
int noofprime(int n){
   int count=0;
   int num = 2;

   while(count < n){
      if (isprime(num)){
        cout<<num<<endl;
         count ++;
        }
       num++;
   }       
}
int main(){
   int n;
   cout <<endl<<"Enter the Number : ";
   cin>>n;
   noofprime(n);
   return 0;
}