package gr.duth.ee.euclid.datastructures.simple_integer_sorting;

public class SimpleIntegerSorting {

	public static int[] simpleIntegerSorting(int[] values) {
		int t=0 ;
		for(int i=0;i<values.length;i++){
			for(int j=0;j<values.length-1;j++)
				if(values[j]<values[j+1])
				{
					t=values[j];
					values[j]=values[j+1];
					values[j+1]=t;
				}
		}
		return values;
	}

}
