import java.util.Stack;

public class Data_Structures_Stack {
    public static void main(String[] args) 
    {
        Stack<Integer> nums = new Stack<>(); //Stack Oluşturma
        nums.push(1); // Eleman Ekleme
        nums.push(2);
        nums.push(3);
        nums.push(4);
        System.out.println("En Ustteki Eleman: "+nums.peek()); // Üstteki Elemana Çıkarmadan Bakma
        System.out.println("Boyut: "+nums.size()); // Stack Boyutunu Gösterme
        System.out.println("Cikarlian Eleman: "+nums.pop()); // Eleman Çıkarma
        System.out.println("Boyut: "+nums.size());
        System.out.println("Stack Bosluk Durumu: "+nums.empty()); // Stack'in boş olup olmadiğini kontrol etme
    }
}