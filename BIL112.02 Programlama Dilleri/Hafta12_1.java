import java.util.Scanner;

public class Hafta12_1 {
    @SuppressWarnings("resource")
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        System.out.println("Bir Sayı Giriniz:");
        int boyut = scanner.nextInt();

        scanner.nextLine();

        char[] harfler = new char[boyut];

        for(int i = 0 ; i < boyut ; i++)
        {
			System.out.println("Lütfen " + (i+1) + ". Harfi Giriniz:");
			harfler[i] = scanner.nextLine().charAt(boyut);
		}

		for(int i = 0 ; i < boyut ; i++)
		{
			System.out.println("Dizinin " + (i+1) + ". elemanı " + harfler[i]+"'3dır");
		}
    }
}
