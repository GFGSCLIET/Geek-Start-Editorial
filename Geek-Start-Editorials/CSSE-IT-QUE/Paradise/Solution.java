import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int c = 0;
        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]!=0)
                System.out.print(arr[i] + " ");
            else 
                c++;
        }
        for(int i=0;i<c;i++) 
            System.out.print("0 ");
       
        
    }
}
