package pack;



import java.math.*;
import java.util.*; 
/**
 * @author node
 *
 */
public class Paillier{
	//选取两个较大的质数p与q，lambda是p-1与q-1的最小公倍数
	 private BigInteger p, q, lambda; 
	 
	//n是p与q的乘积
	 public BigInteger n;
	 
	//n_square = n*n 
	 public BigInteger n_square; 
	 private BigInteger g;           
	 private int bitLength;
	 
	 public Paillier(int bitLengthVal, int certainty) {         
		   Key(bitLengthVal, certainty);     
		   } 
	 public Paillier() {          
		 Key(512, 64);   
		 }
	 public void Key(int bitLengthVal, int certainty) {
		 bitLength = bitLengthVal;
		//随机构造两个大素数，详情参见API，BigInteger的构造方法
		 p = new BigInteger(bitLength / 2, certainty, new Random());         
		 q = new BigInteger(bitLength / 2, certainty, new Random());  
		 
		 //n=p*q;
		 n = p.multiply(q); 
		 
		 //nsquare=n*n;        
		 n_square = n.multiply(n); 
		 g=n.add(BigInteger.ONE);
		 
		//求p-1与q-1的乘积除于p-1于q-1的最大公约数
		 lambda = p.subtract(BigInteger.ONE).multiply(q.subtract(BigInteger.ONE))
				 .divide(p.subtract(BigInteger.ONE).gcd(q.subtract(BigInteger.ONE))); 
		 
		//检测g是某满足要求
		 if (g.modPow(lambda, n_square).subtract(BigInteger.ONE).divide(n).gcd(n).intValue() != 1) {  
			 System.out.println("g的选取不合适!");             
			 System.exit(1); 
		 	}      
		 }
	
	//随机生成r的加密(1+m*(g-1）)*(r^n mod n^2)mod n^2 
	    public BigInteger En(BigInteger m) {      

			BigInteger r = new BigInteger(bitLength, new Random());  
	    	return m.multiply(g.subtract(BigInteger.ONE)).add(BigInteger.ONE).multiply(r.modPow(n, n_square)).mod(n_square);
	       } 
	    
	 //解密
	    public BigInteger De(BigInteger c) {          
	    	BigInteger u = g.modPow(lambda, n_square).subtract(BigInteger.ONE).divide(n).modInverse(n);         
	        return c.modPow(lambda, n_square).subtract(BigInteger.ONE).divide(n).multiply(u).mod(n);      
   } 

	    
	    public static void main(String[] args) {
	    	 Paillier paillier = new Paillier(); 
	    	 //创建两个大整数m1,m2:
	    	 Scanner input=new Scanner(System.in);
	    	 String s=input.next();
	    	 BigInteger m1 = new BigInteger(s).multiply(new BigInteger("8"));   
	    	 s=input.next();
	    	 BigInteger m2 = new BigInteger(s).multiply(new BigInteger("150"));      
	    	 BigInteger b = new BigInteger(10 ,5, new Random());
	    	 System.out.println("原文是:");        
	    	 System.out.println("m1是"+m1+"\nm2是"+m2+"\n随机数b是"+b);
	    	 
	    	 //将m1,m2加密得到em1,em2:        
	    	 BigInteger em1 = paillier.En(m1.add(b));          
	    	 BigInteger em2 = paillier.En(m2.add(b));   
	    	 //加密后的结果        
	    	 System.out.println("m1加密结果"+em1);          
	    	 System.out.println("m1加密结果"+em2);     
	    	 BigInteger mj1=paillier.De(em1);
	    	 BigInteger mj2=paillier.De(em2);
	    	//解密后的结果 mj1,mj2       
	    	 System.out.println("m1+b解密结果"+mj1);          
	    	 System.out.println("m2+b解密结果"+mj2);  
	    	 //解密后减去随机数
	    	 System.out.println("m1解密结果"+mj1.subtract(b));          
	    	 System.out.println("m2解密结果"+mj2.subtract(b)); 
	    	 //解密后减去随机数转成int类型n1,n2；
	    	 int n1=mj1.subtract(b).intValue();
	    	 int n2=mj2.subtract(b).intValue();
	    	 System.out.println("最终结果："+Math.max(Math.min(Math.max(n1,n2 ) ,150000),50000));

		}
}