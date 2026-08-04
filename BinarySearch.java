package gr.duth.ee.euclid.datastructures.binary_search;

public class BinarySearch {

	public static int binarySearch(IntegerArray a, int valueToFind) {
		int s=0;
		int e=a.length()-1;
		int m=(e+s)/2;
		while(s<e) {
			int mv = a.get(m);
			if (mv == valueToFind) {
				return m;
			}
			else if (mv>valueToFind){
				s=m+1;
			}
			else{
				e=m-1;
			}
			m=s+(Math.max(m,e)-s)/2;
		}

		return -1;
	}
}
