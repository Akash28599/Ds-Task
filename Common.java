import java.util.HashMap;
import java.util.Map;

class Common
{

	private static void findCommon(int[][] mat)
	{
		
		if (mat == null || mat.length == 0) {
			return;
		}

		Map<Integer, Integer> map = new HashMap<>();

		for (int i = 0; i < mat.length; i++)
		{
			for (int j = 0; j < mat[0].length; j++)
			{
			
				if (i == 0) {
					map.put(mat[0][j], 1);
				}

				if (i > 0 && map.containsKey(mat[i][j]) && map.get(mat[i][j]) == i)
				{
					map.put(mat[i][j], i + 1);

					if (i == mat.length - 1) {
						System.out.print(mat[i][j] + " ");
					}
				}
			}
		}
	}

	public static void main(String[] args)
	{
		int[][] mat =
		{
			{ 1,2,3,4 },
			{ 4, 5,1,3},
			{ 3,4,2,5 },
			{ 4,5,2,1 },
		};

		findCommon(mat);
	}
}