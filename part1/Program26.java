package Task26;

import java.util.HashSet;
import java.util.Scanner;

class Program {
	public static void main(String[] args) {
		int g = new Scanner(System.in).nextInt();
		int m = 98765431;
		int r = -1;
		
		String s;
		HashSet<Character> a = new HashSet<>();
		
		int i = g;
		while (i < m) {
			i += 1;
			
			s = Integer.toString(i);
		    if (s.indexOf('0') > -1) {
		    	continue;
		    }
		    if (s.indexOf('2') > -1) {
		    	continue;
		    }
		    a.clear();
		    for (Character character : s.toCharArray()) {
				a.add(character);
			}
//		    for (int j=0; j < s.length(); j++)
//		    	a.add(s.charAt(j));		    
		    if (a.size() == s.length()) {
		        r = i;
		        break;
		    }
		}
	    
	    System.out.println(r);
	}
}
