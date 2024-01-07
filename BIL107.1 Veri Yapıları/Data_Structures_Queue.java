import java.util.LinkedList;
import java.util.Queue;;

public class Data_Structures_Queue {
    public static void main(String[] args) 
    {
        Queue<Integer> nums = new LinkedList<>(); //Queue oluşturma
        nums.add(1); // Eleman Ekleme
        nums.add(2);
        nums.add(3);
        nums.add(4);

        System.out.println("Sira Boş mu: "+nums.isEmpty()); // Dolumu Kontrol Etme
        System.out.println(nums.size()); // Queue Boyutunu Gösterme
        System.out.println(nums.peek()); // Sıradaki Elemana Çıkarmadan Bakma
        System.out.println(nums.poll()); // Sıradaki Elemanı Çıkarma
        System.out.println(nums.size());
        System.out.println(nums.peek());
    }
}