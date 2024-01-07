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

        int size = nums.size(); // Listenin boyutunu alma
        System.out.println(size);

        nums.add(4, 5); // Belirli bir indekse eleman ekleme
        Integer eleman = nums.get(4); // Belirli bir indeksteki elemanı alma
    }
}