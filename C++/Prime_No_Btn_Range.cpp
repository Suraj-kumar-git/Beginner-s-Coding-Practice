// Question :
// WAP to print all the prime numbers between a given range inputed by a user.

#include <iostream>
using namespace std;
bool isPrime(int n);
int main(){
  cout<<"Enter first number: ";
  int first,sec;
  cin>>first;
  cout<<"Enter second number: ";
  cin>>sec;
  if(first==1){
      first+=1;
  }
  for(int i=first;i<=sec;i++){
    if(isPrime(i))
      cout<<i<< " ";
    else continue;
  }
  return 0;
}
  bool isPrime(int num){
    int count=0;
    for(int i=2;i<=num/2;i++){
      if(num%i==0){
        count++;
        break;
      }
    }
    if(count==0)
      return true;
    else
      return false;
  }
