package exercise;
import java.util.Scanner;


public class percentage {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        float math,english,hindi,science,sst;
        System.out.println("Input your marks : \n");
        System.out.println("Maths : ");
        math = scan.nextFloat();
        System.out.println("English");
        english = scan.nextFloat();
        System.out.println("Hindi");
        hindi = scan.nextFloat();
        System.out.println("Science");
        science = scan.nextFloat();
        System.out.println("S.St");
        sst = scan.nextFloat();

        System.out.println("percentage is : ");
        float per = (math+english+hindi+sst+science)/5;
        System.out.println(per);

        scan.close();
    }
}
