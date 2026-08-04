package gr.duth.ee.euclid.datastructures.factorial;

public class Factorial {

	 static long compute(long x) {
		if (x == 0)

		return -1;

		return x*compute(x-1);

	}



