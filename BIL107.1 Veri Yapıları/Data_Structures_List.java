import java.util.List;
import java.util.ArrayList;

public class Data_Structures_List {
    public static void main(String[] args) 
    {
        List<Integer> nums = new ArrayList<>(); // List oluşturma
        nums.add(0);
        nums.add(1);
        nums.add(2);
        
        for (int num : nums) //List Yazdırma
        {
            System.out.println(num);
        }

        System.out.println(nums.size()); // Listenin boyutunu alma
        nums.add(3, 3); // Belirli bir indekse eleman ekleme
        nums.get(3); // Belirli bir indeksteki elemanı alma
        nums.remove(2); //belirli bir indeksi silme
    }
}