// WAP to print all the prime numbers between a given range.



import java.util.Scanner;

class HelloWorld {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int first = sc.nextInt();
        int sec = sc.nextInt();
        if(first==1){
          first+=1;
        }
  for(int i=first;i<=sec;i++){
    if(isPrime(i))
      System.out.print(i+" ");
  }
}
public static boolean isPrime(int num){
      int count=0;
    for(int i=2;i<=num/2;i++){
      if(num%i==0){
        count++;
        break;
      }
    }
    if(count==0)
      return true;
      
    return false;
}
}
