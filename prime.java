import java.util.*;
public class prime {
	static boolean isprime(int n) {
		if(n<=1) {
			return false;
		}
		if(n<=3) {
			return true;
		}
		if(n%2==0 || n%3==0) {
			return true;
		}
		for(int i=5;i*i<=n;i=i+2) {
			if(n%i==0) {
				return false;
			}
		}
		return true;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Please Enter any Number:");
		int num = sc.nextInt();
		if(isprime(num)) {
			System.out.println(num+" is a prime number");
		}
		else {
			System.out.println(num+"is not prime number");
		}
		
	}
}
