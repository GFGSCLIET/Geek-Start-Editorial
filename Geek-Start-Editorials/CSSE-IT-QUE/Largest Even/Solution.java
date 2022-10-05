import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int flag = 0;
        if(n==0){
            System.out.println("0");
            flag = 1;
        }
        else{
            while(n>0){
                if(n%2==0){
                    System.out.println(n);
                    flag = 1;
                    break;
                }
              n = n/10;
            }
        }
        if(flag==0)
            System.out.println("No");
    }
}