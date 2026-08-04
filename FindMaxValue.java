package gr.duth.ee.euclid.datastructures.find_max_value_mdim;

public class FindMaxValue {

	public static int findMaxValue(int[][] values) {
		int max = values[0][0];
		for(int i=0;i<values.length;i++)
		{
			for(int j=0;j<values[i].length;j++)
			{
				if(values[i][j]>max)
					max=values[i][j];
			}

		}
		return max;

	}

}
