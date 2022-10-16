import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int P,coins=0;
        P = input.nextInt();
        coins = coins + P/10;
        P = P%10;
        coins = coins + P/5;
        System.out.println(coins);
    }
}
