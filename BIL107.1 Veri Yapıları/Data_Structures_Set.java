import java.util.HashSet;
import java.util.Set;

public class Data_Structures_Set {
    public static void main(String[] args) {
        Set<Integer> numbers = new HashSet<>(); // Set oluşturma
        
        numbers.add(1); // Eleman ekleme
        numbers.add(2);
        numbers.add(3);
        numbers.add(4);

        
        System.out.println("Boyut: " + numbers.size()); // Boyutunu gösterme

        System.out.println("Set'te '2' var mi? " + numbers.contains(2)); // Belirli bir elemanin olup olmadiğini kontrol etme
        
        numbers.remove(3); // Eleman Çıkarma
        System.out.println("'3' Set'ten kaldirildi.");

        
        System.out.println("Set bos mu? " + numbers.isEmpty()); // Boş olup olmadiğini kontrol etme

        System.out.println("Set icindeki elemanlar:"); // Set içindeki elemanlari yazdirma
        for (Integer number : numbers) {
            System.out.println(number);
        }
    }
}
