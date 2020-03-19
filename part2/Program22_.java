// решение не проходит так как не влазит по памяти
// но оно и не нужно`, так как не нужно искать все числа!
// нужно проверить только одно!!!

import java.util.Scanner;

class Program {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
        
        int sum = n - 1; // так как 1 не является простым числом
        byte[] arr = new byte[n + 1]; // тип данных byte в 4 раза, меньше чем int
        int k = 2; // начинаем с двойки
        while (k * k <= n)
        {   // это традиционный алгоритм решета, у меня на сайте вы видели gif`ку про это решето
            for (int i = k * k; i <= n; i += k)
            {
                if (arr[i] != 1)
                {
                    arr[i] = 1; // вычёркиваем из простых
                    sum--; // уменьшаем кол-во простых
                }
            }
            for (int i = k + 1; i <= n; i++) // найти след. непустую позицию
            {
                if (arr[i] != 1) { k = i; break; }
            }
        }
        System.out.print(1-arr[n]);
//        for (byte b : arr) System.out.println(b);
	}
}