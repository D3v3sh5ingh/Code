import java.util.*;
import java.io.*;
public class Main
{
	public static void main(String[] args) throws java.lang.Exception {
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	    int T=Integer.parseInt(br.readLine());
	    int res=0;
	    while(T-->0){
	        int N=Integer.parseInt(br.readLine());
	        if(N!=0){
	        int[][] arr=new int[4][4];
	        int[] max=new int[4];
	        int[] price=new int[4];
	        price[0]=25;price[1]=50;price[2]=75;price[3]=100;
	        for(int i=0;i<N;i++){
	            String[] str=br.readLine().split(" ");
	            if(str[0].equals("A")){
	                int x=Integer.parseInt(str[1]);
	                x=x%12;x=x/3;
	                arr[0][x]+=1;
	                //max[0]=Math.max(max[0],arr[0][x]);
	            }
	            if(str[0].equals("B")){
	                int x=Integer.parseInt(str[1]);
	                x=x%12;x=x/3;
	                arr[1][x]+=1;
	                //max[1]=Math.max(max[1],arr[1][x]);
	            }
	            if(str[0].equals("C")){
	                int x=Integer.parseInt(str[1]);
	                x=x%12;x=x/3;
	                arr[2][x]+=1;
	                //max[2]=Math.max(max[2],arr[2][x]);
	            }
	            if(str[0].equals("D")){
	                int x=Integer.parseInt(str[1]);
	                x=x%12;x=x/3;
	                arr[3][x]+=1;
	                //max[3]=Math.max(max[3],arr[3][x]);
	            }
	        }
	        ArrayList<ArrayList<Integer>> al = new ArrayList<>();
	        for(int i=0;i<4;i++){
	            al.add(new ArrayList<Integer>());
	            for(int j=0;j<4;j++){
	                al.get(i).add(arr[i][j]);
	            }
	        }
	        ArrayList<Integer> bl = new ArrayList<>();bl.add(0);bl.add(0);bl.add(0);bl.add(0);
	        for(int i=0;i<4;i++){
	            ArrayList<Integer> al1 = new ArrayList<>();
	            for(int j=0;j<4;j++){
	                al1.add(al.get(j).get(i));
	            }
	            //bw.write(al1+"\n");
	            for(;;){
	                if(al1.isEmpty()){
	                    //bw.write("break\n");
	                    break;
	                }
	                int max1=Collections.max(al1);
	                int idx=al1.indexOf(max1);
	                int max2=Collections.max(al.get(idx));
	                if(max1==max2){
	                    max[i]=max1;
	                    al.set(idx,bl);
	                    break;
	                }
	                else{
	                    al1.remove(idx);
	                }
	            }
	        }
	        Arrays.sort(max);int sum=0;
	        for(int i=0;i<4;i++){
	            if(max[i]>0){
	                sum+=price[i]*max[i];
	            }
	            else{
	                sum-=100;
	            }
	        }
	        bw.write(sum+"\n");
	        res+=sum;
	    }
	    else{
	        bw.write("-400\n");
	        res-=400;
	    }
	    }
	    bw.write(res+"\n");
	    bw.flush();
	}
}