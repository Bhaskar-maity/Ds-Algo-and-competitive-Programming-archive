class Solution{
public:
	void merge(int a1[], int a2[], int n, int m) {
	    
	    for (int i = 0; i < m;  i++){
	        if(a1[i] > a2[0]){
	            swap(a1[i], a2[0]);
	            
	            int tmp=a2[0];
	            int k;
	            for ( k = 1; k < n && a2[k] < tmp; k++) {
	                a2[k-1]=a2[k];
	            }
	            a2[k-1]=tmp;
	        } 
	            
	    }
	}
};