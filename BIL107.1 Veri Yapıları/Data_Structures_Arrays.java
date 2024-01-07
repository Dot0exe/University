import java.util.Arrays;

public class Data_Structures_Arrays {
    public static void main(String[] args) 
    {
        int[] nums = new int[5];
        nums[0] = 1;
        nums[1] = 2;
        nums[2] = 3;
        nums[3] = 4;

        System.out.println(Arrays.toString(nums)); // Hepsini yazdırır. 
        
        nums[2] = 5; //Eleman Değiştirme

        System.out.println("2 indeksli eleman degisti: " + nums[2]);

        System.out.println(Arrays.toString(nums));


        Arrays.sort(nums); // Diziyi Sıralama
        
        System.out.println("Dizinin siralanmis butun elemanlari:");
        for (int i = 0; i < nums.length; i++) // Dizinin Boyutunu Alma
        {
            System.out.println(nums[i]);
        }
        
    }
}
