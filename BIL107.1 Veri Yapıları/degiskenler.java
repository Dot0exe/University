public class degiskenler {
    public static void main(String[] args) {
        int deger1 = 99;
        double deger2 = 9.75;
        float deger3 = 9.86f;
        long deger4 = 9999;
        short deger5 = 98;
        byte deger6 = 9;
        boolean deger7 = true;
        char deger8 = 'D';

        // Toplama 
        double toplam = deger1 + deger4;
        System.out.println("Toplama işlemi sonucu: " + toplam + "'dir.");

        // Çıkarma 
        double cikarma = deger5 - deger2;
        System.out.println("Çıkarma işlemi sonucu: " + cikarma + "'dir.");

        // Çarpma 
        double carpma = deger3 * deger6;
        System.out.println("Çarpma işlemi sonucu: " + carpma + "'dir.");

        // Bölme 
        System.out.println("Bölme işlemi sonucu: " + (deger4 / deger6) + "'dir.");

        // Mod
        System.out.println("Mod alma işlemi sonucu: " + deger4 % deger1 + "'dir.");

    }
}