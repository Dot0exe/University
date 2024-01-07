import java.util.HashMap;
import java.util.Map;

public class Data_Structures_Map {
    public static void main(String[] args) 
    {
        Map<Integer,String> names = new HashMap<>();
        names.put(1,"Emre"); // Eleman Ekleme
        names.put(2,"Hakan");    
        names.put(3,"Yavuz"); 
        names.put(4,"Baran");
        
        System.out.println(names); // Hepsini Yazdırma

        System.out.println(names.size());
        System.out.println(names.get(1));
        System.out.println(names.containsKey(5));
        System.out.println( names.keySet());
        System.out.println(names.entrySet());

    }
}
