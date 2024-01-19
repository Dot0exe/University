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

        names.remove(2); // Eleman Silme

        System.out.println(names.size()); // Boyutu Yazdırma
        System.out.println(names.get(1)); // Belirli Bir Anahtarı Yazdırma
        System.out.println(names.containsKey(5)); // Anahtar Var mı Kontrol Etme
        System.out.println( names.keySet()); // Bütün Anahtarları Yazdırma
        System.out.println(names.entrySet()); // Bütün Girişleri Yazdırma

    }
}
