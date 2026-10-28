class Solution {
public:
    void nextPermutation(vector<int>& A) {

        int piv=-1;
        int n=A.size();

        for(int i=n-2;i>=0;i--){

            if(A[i]<A[i+1]){
                piv=i;
                break;
            }
        }

        if(piv==-1){
            int i=0,j=n-1;
            while(i<=j){
                swap(A[i],A[j]);
                i++,j--;
            }
            return;
        }

        for(int i=n-1;i>piv;i--){
            if(A[i]>A[piv]){
                swap(A[i],A[piv]);
                break;
            }
        }

        int i=piv+1;
        int j=n-1;
        while(i<=j){
            swap(A[i],A[j]);
            i++,j--;
        }
        
    }
};