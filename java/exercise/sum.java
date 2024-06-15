package exercise;
import java.util.Scanner;

public class sum {
   public static void main(String[] args) {
     Scanner s = new Scanner(System.in);
     int a,b,c;
     a = s.nextInt();
     b = s.nextInt();
     c = s.nextInt();
     
     int sum = a+b+c;
     System.out.println(sum);

     s.close();
   }
    
    
}
