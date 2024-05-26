import java.util.Scanner;
import java.math.*;

public class Hafta12_2 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Lütfen 1-10000 arasında bir sayı giriniz:");
        int sayi = scanner.nextInt();
        if(sayi < 1 || sayi > 10000)
        {
            System.out.println("Lütfen 1-10000 arasında bir sayı giriniz:");
        }
        
        for (int i = 2; i < sayi; i++)
        {
            if((sayi % i) == 0)
            {
                System.out.println("Tekrar Deneyin");
            }
        }


    }
            
    }
}
