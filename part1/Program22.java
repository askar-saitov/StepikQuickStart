import java.util.Scanner;

class Program {
	public static void main(String[] args) {		
		Scanner scanner = new Scanner(System.in);
		int count = Integer.parseInt(scanner.nextLine());	    
		int max = 0, maxi = 0, tmp = 0;
		String[] arrStr = scanner.nextLine().split(" ");
		for (int i = 0; i < count; i++) {
			tmp = Integer.parseInt(arrStr[i]);
			if (tmp > max) {
				max = tmp; maxi = i; 
			}
		}
	    System.out.println(maxi);
	}
}