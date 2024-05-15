package sdf;
import java.util.Calendar;

public class dgf {

	public static void main(String[] args) {

		String[] name = {"A","l","i"," ","S","a","y","i","t"};
		String[] m = {"S","i","i","r","t"};
		
		int x = 0;
		int z = 1 ;
		int k = m.length-1;
		
		Calendar calendar = Calendar.getInstance();
		
		while(name.length > x)
		{
			System.out.println(name[x]);
			x++;
		}
		System.out.println("");
		while(k >= 0)
		{
			System.out.println(m[k]);
			k--;
		}
		System.out.println("");
		while (z > 0)
		{
			System.out.println(calendar.get(Calendar.YEAR)-2005);
			z--;
		}

	}

}
