// проходит только половину тестов - далее TimeLimit

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
 
class FastScanner {
	BufferedReader br;
	StringTokenizer st;
	public FastScanner(){
		init();
	}
	private void init(){
		br = new BufferedReader(new InputStreamReader(System.in));
	}
	public String nextToken(){
		while(st == null || !st.hasMoreElements()){
			try {
				st = new StringTokenizer(br.readLine());
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
		return st.nextToken();
	}
	public int nextInt(){
		return Integer.parseInt(nextToken());
	}
}

class Program {
	public static void main(String[] args) {
		FastScanner scanner = new FastScanner();
		int n = scanner.nextInt();
		int m = scanner.nextInt();
		long[] z = new long[n+1];
		z[0] = 0;
		for (int i = 1; i <= n; i++)
			z[i] = z[i-1] + scanner.nextInt();
		
		String result = ""; int l, r;
		for (int i = 0; i < m; i++) {
			l = scanner.nextInt();
			r = scanner.nextInt();
			result += Long.toString(z[r]-z[l-1]) + "\n";
		}
		System.out.print(result);
	}
}