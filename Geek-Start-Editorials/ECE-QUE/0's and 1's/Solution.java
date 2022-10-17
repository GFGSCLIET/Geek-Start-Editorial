import java.io.*;
import java.util.*;

public class Solution {
    static void binary(int n){
        int rem,i=0;
        int arr[] = new int [100];
        while (n!=0) {
            rem = n % 2;
            n /= 2;

            if (rem == 0)
                rem = 1;
            else
                rem = 0;

            arr[i] = rem;
            i++;
      }  
        for(i=i-1;i>=0;i--)
        {
            System.out.print(arr[i]);
        }
    }
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        
        if(n==0)
            System.out.println(1);
        else
            binary(n);
    } }
