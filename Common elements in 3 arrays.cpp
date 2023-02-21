class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i=0,j=0,k=0;
            vector<int>ans;
           
           // idhar na set ka istemaal karenge apan kyuki set duplicate element ko nhi leta
             
            
            set<int>s;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] and B[j]==C[k])
                {
                    s.insert(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j])
                {
                    i++;
                }
                else if(B[j]<C[k])
                {
                    j++;
                }
                else          //means chote waale ko aage badana hai
                { 
                    k++;                    
                }
            }
            for(auto i:s)
            {
                ans.push_back(i);
            }
            return ans;
        }

};
