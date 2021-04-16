import java.util.Scanner;
public class years
{
	public static void main(String[] args) {
	    Scanner sc= new Scanner(System.in);
	    int min=sc.nextInt();
	    int years=min/(60*24*365);
	    int days=(min/(60*24))%365;
	    System.out.println(min + " minutes is approximately " + years + " years and " + days + " days");
		
	}
}
