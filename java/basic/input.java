package basic;
import java.util.Scanner;

public class input {
    public static void main(String[] args) {
        System.out.println("taking input from the user");
        Scanner sc = new Scanner(System.in);
        System.out.println("enter number 1");
        int a = sc.nextInt();
        System.out.println("enter number 2");
        int b = sc.nextInt();
        int sum = a+b;
        System.out.println("The Sum of the numnbers entered is : ");
        System.out.println(sum);
        sc.close();
    }
}
//scanner kai object ko close karna hota hai
