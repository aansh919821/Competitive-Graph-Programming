class Solution{
    public:
    int NthRoot(int n, long long int m)
    {
	   if (m ==1 || n==1){
	       return m;
	   }
       else{
    	   long long int l = 1, r = m;
    	   while(l<=r){
    	       long long int mid = 1, temp = (l+r)/2;
    	       for(int i = 1; i<=n; i++){
    	           mid *= temp;
    	           if (mid>m){
    	               r = temp-1;
    	               break;
    	           }
        	       
    	       }
    	       if (mid == m){
    	           return temp;
    	       }
    	       else if (mid<m){
    	           l = temp+1;
    	           }
    	   }
    	   return -1;
	   }
	}
};