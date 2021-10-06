/* 
    LEET CODE : Running Sum of 1d Array 
        level : (easy)
    Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
    Return the running sum of nums.

    Input: nums = [1,2,3,4]
    Output: [1,3,6,10]
    Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
*/

package MyWorld;

import java.util.Scanner;

public class RunningSumOfArray {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = scn.nextInt();
        }
        int ans[] = runningSum(arr);
        display(ans);
    }

    public static int[] runningSum(int[] nums) {
        int arr[] = new int[nums.length];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j <= i; j++) {
                arr[i] = arr[i] + arr[j];
            }
        }
        return arr;
    }

    public static void display(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.err.println(arr[i]);
        }
    }
}
