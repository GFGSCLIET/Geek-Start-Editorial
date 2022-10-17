import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
     
        Scanner sc = new Scanner(System.in);
        
         
        int p = sc.nextInt();
        int i = sc.nextInt();
        
        int s= (p-i)/6;
    
        if (p>=i)
            System.out.println(s+1);
        else
            System.out.println("0");
        
    }
}
