import java.util.Scanner;

class Program {
	public static void main(String[] args) {		
		Scanner scanner = new Scanner(System.in);
		int count = Integer.parseInt(scanner.nextLine());
	    String str = scanner.nextLine();
	    String[] arrStr = str.split(" ");	 
	    scanner.close();
	    long add = 0;
	    for (int i = 0; i < count; i++) {
	    	add += Integer.parseInt(arrStr[i]);
	    }
   
	    System.out.println(add);
	}
}