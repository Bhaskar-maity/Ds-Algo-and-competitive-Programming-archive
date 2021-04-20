// https://www.interviewbit.com/problems/rotate-matrix/
// You are given an n x n 2D matrix representing an image.

// Rotate the image by 90 degrees (clockwise).
// Example:
// [
//     [1, 2],
//     [3, 4]
// ]
// Then the rotated array becomes:

// [
//     [3, 1],
//     [4, 2]
// ]
//time -o(n2), space - o(1)

public class Solution {
	public void rotate(ArrayList<ArrayList<Integer>> a) {

        //traspose array
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < i; j++) {
                int temp = a.get(i).get(j);
                a.get(i).set(j, a.get(j).get(i));
                a.get(j).set(i, temp);

            }
        }

        //reverse arraylist
        for (int i = 0; i < a.size(); i++){
            Collections.reverse(a.get(i));
        }

	}
}
