package signal_range;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 * @author Amit Kumar Gupta
 * May 20, 2018
 * Problem URL: https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/signal-range/
 */

public class Signal_Range {
	
	boolean myvar = false;
	
	public static void main (String[] args) {		
		
		int t, currTowerSum;
		long n;
		long []h;	
		FastReader sc = new FastReader();
		t = sc.nextInt();	
		
		for (int k = 0; k < t; k++) {
			
			n = sc.nextLong();
			h = new long[(int) n];
			
			for (int i = 0; i < n; i++) {
				h[i] = sc.nextLong();
			}	
			
			// Printing 1 for the first tower.
			System.out.print(1 + " ");
			
			for (int i = 1; i < n; i++) {				
				currTowerSum = 1;
				for (int j = i-1; j >= 0; j--) {
					
					if (h[j] > h[i]) {
						break;
					}
					currTowerSum++;
				}
				System.out.print(currTowerSum + " ");
			}			
			System.out.println();
		}		
	}
	
	class Stack{
		
	    private int top=-1;
	    private int arr[]=new int[100005];

	    public boolean isEmpty(){
	        return top==-1;
	    }

	    public int pop(){
	        return arr[top--];
	    }

	    public int peek(){
	        return arr[top];
	    }

	    public void push(int val){
	        arr[++top]=val;
	    }
	}

	public static class FastReader
	{
	    BufferedReader br;
	    StringTokenizer st;

	    public FastReader()
	    {
	        br = new BufferedReader(new
	                InputStreamReader(System.in));
	    }

	    String next()
	    {
	        while (st == null || !st.hasMoreElements())
	        {
	            try
	            {
	                st = new StringTokenizer(br.readLine());
	            }
	            catch (IOException e)
	            {
	                e.printStackTrace();
	            }
	        }
	        return st.nextToken();
	    }

	    int nextInt()
	    {
	        return Integer.parseInt(next());
	    }

	    long nextLong()
	    {
	        return Long.parseLong(next());
	    }

	    double nextDouble()
	    {
	        return Double.parseDouble(next());
	    }

	    String nextLine()
	    {
	        String str = "";
	        try
	        {
	            str = br.readLine();
	        }
	        catch (IOException e)
	        {
	            e.printStackTrace();
	        }
	        return str;
	    }
	}



}

