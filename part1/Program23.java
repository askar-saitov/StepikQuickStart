import java.util.Scanner;

class Main {
	public static int a = 0;
	public static int b = 0;
	public static int cur = 0;
	public static int mod = 1791791791;
	public static long NextRand(long cur) {
		return (cur*a+b)%mod;
	}
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = Integer.parseInt(scanner.nextLine());
		String[] arrStr = scanner.nextLine().split(" ");
		cur = Integer.parseInt(arrStr[0]);
		a = Integer.parseInt(arrStr[1]);
		b = Integer.parseInt(arrStr[2]);
		long[] arr = new long[n+1];
		long max1 = 0, max1i = 0;
		arr[0] = cur;
		for (int i = 1; i <= n; i++) {
			arr[i] = NextRand(arr[i-1]);
			if (arr[i] > max1) {
				max1 = arr[i];
				max1i = i;
			}
		}
		long max2 = 0, max2i = 0;
		for (int i = 1; i <= n; i++) {
			if ((arr[i] > max2) && (i != max1i)) {
				max2 = arr[i];
				max2i = i;
			}
		}
		System.out.printf("%d %d", max1i, max2i);
	}
}