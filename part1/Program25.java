import java.util.Scanner;

class Program {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int[] numbers = new int[n];
		for (int i = 0; i < n; i++)
			numbers[i] = scanner.nextInt();
		
		long result = numbers[0];
		long acc = 0;
		for (int i = 0; i < n; i++) {
			acc = Math.max(numbers[i], acc + numbers[i]);
			result = Math.max(result,  acc);
		}			 
		System.out.println(result);
	}
}