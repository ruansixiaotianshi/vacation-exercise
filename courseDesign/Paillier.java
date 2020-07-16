package pack;



import java.math.*;
import java.util.*; 
/**
 * @author node
 *
 */
public class Paillier{
	//ѡȡ�����ϴ������p��q��lambda��p-1��q-1����С������
	 private BigInteger p, q, lambda; 
	 
	//n��p��q�ĳ˻�
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
		//�����������������������μ�API��BigInteger�Ĺ��췽��
		 p = new BigInteger(bitLength / 2, certainty, new Random());         
		 q = new BigInteger(bitLength / 2, certainty, new Random());  
		 
		 //n=p*q;
		 n = p.multiply(q); 
		 
		 //nsquare=n*n;        
		 n_square = n.multiply(n); 
		 g=n.add(BigInteger.ONE);
		 
		//��p-1��q-1�ĳ˻�����p-1��q-1�����Լ��
		 lambda = p.subtract(BigInteger.ONE).multiply(q.subtract(BigInteger.ONE))
				 .divide(p.subtract(BigInteger.ONE).gcd(q.subtract(BigInteger.ONE))); 
		 
		//���g��ĳ����Ҫ��
		 if (g.modPow(lambda, n_square).subtract(BigInteger.ONE).divide(n).gcd(n).intValue() != 1) {  
			 System.out.println("g��ѡȡ������!");             
			 System.exit(1); 
		 	}      
		 }
	
	//�������r�ļ���(1+m*(g-1��)*(r^n mod n^2)mod n^2 
	    public BigInteger En(BigInteger m) {      

			BigInteger r = new BigInteger(bitLength, new Random());  
	    	return m.multiply(g.subtract(BigInteger.ONE)).add(BigInteger.ONE).multiply(r.modPow(n, n_square)).mod(n_square);
	       } 
	    
	 //����
	    public BigInteger De(BigInteger c) {          
	    	BigInteger u = g.modPow(lambda, n_square).subtract(BigInteger.ONE).divide(n).modInverse(n);         
	        return c.modPow(lambda, n_square).subtract(BigInteger.ONE).divide(n).multiply(u).mod(n);      
   } 

	    
	    public static void main(String[] args) {
	    	 Paillier paillier = new Paillier(); 
	    	 //��������������m1,m2:
	    	 Scanner input=new Scanner(System.in);
	    	 String s=input.next();
	    	 BigInteger m1 = new BigInteger(s).multiply(new BigInteger("8"));   
	    	 s=input.next();
	    	 BigInteger m2 = new BigInteger(s).multiply(new BigInteger("150"));      
	    	 BigInteger b = new BigInteger(10 ,5, new Random());
	    	 System.out.println("ԭ����:");        
	    	 System.out.println("m1��"+m1+"\nm2��"+m2+"\n�����b��"+b);
	    	 
	    	 //��m1,m2���ܵõ�em1,em2:        
	    	 BigInteger em1 = paillier.En(m1.add(b));          
	    	 BigInteger em2 = paillier.En(m2.add(b));   
	    	 //���ܺ�Ľ��        
	    	 System.out.println("m1���ܽ��"+em1);          
	    	 System.out.println("m1���ܽ��"+em2);     
	    	 BigInteger mj1=paillier.De(em1);
	    	 BigInteger mj2=paillier.De(em2);
	    	//���ܺ�Ľ�� mj1,mj2       
	    	 System.out.println("m1+b���ܽ��"+mj1);          
	    	 System.out.println("m2+b���ܽ��"+mj2);  
	    	 //���ܺ��ȥ�����
	    	 System.out.println("m1���ܽ��"+mj1.subtract(b));          
	    	 System.out.println("m2���ܽ��"+mj2.subtract(b)); 
	    	 //���ܺ��ȥ�����ת��int����n1,n2��
	    	 int n1=mj1.subtract(b).intValue();
	    	 int n2=mj2.subtract(b).intValue();
	    	 System.out.println("���ս����"+Math.max(Math.min(Math.max(n1,n2 ) ,150000),50000));

		}
}