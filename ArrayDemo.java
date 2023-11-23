package compiler-design-;

public import java.lang.*;
import java.util.Scanner;

public class ArrayDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr1[] = new int[2];
        arr1[0] = 10;
        arr1[1] = 20;
        for (int i = 0; i < arr1.length; i++) {
            System.out.println("arr1[" + i + "]: " + arr1[i]);
        }
        /*
         * int arr2[];
         * int size = arr1[1] / arr1[0];
         * arr2 = new int[size];
         * for (int i = 0; i < arr2.length; i++) {
         * System.out.print("Enter element for arr2[" + i + "]: ");
         * arr2[i] = sc.nextInt();
         * }
         * int j = 0;
         * while (j < arr2.length) {
         * System.out.println("arr2[" + j + "]: " + arr2[j]);
         * j++;
         * 
         * }
         * int arr3[] = new int[] { 50, 60 };
         * int k = 0;
         * do {
         * System.out.println("arr3[" + k + "]: " + arr3[k]);
         * k++;
         * } while (k < arr3.length);
         * 
         * int arr4[] = { 70, 80 };
         * for (int i = 0; i < arr4.length; i++) {
         * System.out.println("arr4[" + i + "]: " + arr4[i]);
         * }
         */
        int arr5[][] = new int[][] { { 100, 200 }, { 300, 400 } };
        for (int i = 0; i < 2; i++) {
            for (int m = 0; m < 2; m++) {
                System.out.println("arr5[" + i + "][" + m + "]: " + arr5[i][m]);
            }
        }

        int target = sc.nextInt();
        int flag = 0 ;
        int index = 0;
        int indeex = 0 ;
        for (int i = 0; i < 2; i++) {
            for (int m = 0; m < 2; m++) {

                if (arr5[i][m] == target) {
                    flag = 1;
                    index = i;
                    indeex = m;
                }
            }
        }
            if (flag == 1) {
                System.out.println("found at arr5[" + index + "][" + indeex + "]");
                    
            }
                else {
                    System.out.println(" not found");
                    
                }
            
        
    }
} {
    
}
