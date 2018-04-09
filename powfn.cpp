     long long int pow_fn(int base, int pow, int mod){
         long long int val =1;
         long long int base1 = base;
         if(pow==0)
         return 1;
         if (pow==1)
         return base;
         
         while(pow>0)
         {
             if(pow%2==1)
             {
                 val=((val%mod)*(base1%mod))%mod;
             }
                 base1=((base1%mod)*(base1%mod))%mod;
                 pow=pow/2; 
             
         }
                 return val%mod;        
     }
int Solution:: pow(int x,int n, int d)
{
long long int t=pow_fn(x,n,d);
if(t<0)
return (t+d)%d;
else 
return (t)%d;
}
