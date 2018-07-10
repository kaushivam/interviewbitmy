//sort the array and then check brute force




string Solution::longestCommonPrefix(vector<string> &A)
{
    
    sort(A.begin(),A.end());
  
    
    string toreturn  = "";
    if(A.size() == 0)
    {
        return toreturn;
    }
    if(A.size() == 1)
    {
        return A[0];
    }
    string lcs = "";
    for(int i=0,j=0;i<A[0].length()&&j<A[1].length();i++,j++)
    {
        if(A[0][i]!=A[1][i])
        {
            break;
        }
        lcs+=A[0][i];
    }
    
    for(int i=2;i<A.size();i++)
    {
        string temp = lcs;
        string lcS = "";
        for(int j=0,k=0;j<A[i].length()&&k<temp.length();j++,k++)
        {
            if(A[i][j] != temp[k])
            {
                break;
            }
            lcS+=A[i][j];
        }
        lcs = lcS;
    }
    return lcs;
}
