import java.util.Scanner;
import java.math.BigInteger;
import java.util.Vector;
class merge_Sort_list{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		Vector<BigInteger> numbers=new Vector<BigInteger> (n);
		{
			BigInteger num=BigInteger.ZERO;
			for(int i=0;i<n;i++)
			{
				num=sc.nextBigInteger();
				numbers.add(num);
			}
		}
		Merge_Sort(numbers,0,n-1);
		{
			for (int i=0;i<n;i++) 
			{
				System.out.println(numbers.get(i));
			}
		}
	}
	static void Merge_Sort(Vector<BigInteger> numarr,int l,int r){
		if(l<r)
		{
			int m=(l+r)/2;
			Merge_Sort(numarr,l,m);
			Merge_Sort(numarr,m+1,r);
			Merge(numarr,l,m,r);
		}
	}
	static void Merge(Vector<BigInteger> numarr,int l,int m,int r){
		int i=l,j=m+1;
		while((i<=m)&&(j<=r))
		{
			if((numarr.get(i)).compareTo(numarr.get(j))==-1)
				i++;
			else
			{
				numarr.insertElementAt(numarr.get(j),i);
				numarr.remove(j+1);
				m=m+1;
				j++;
			}
		}
	}
}