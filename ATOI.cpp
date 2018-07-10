int Solution::atoi(const string A) 
{
    
int ind = 0;
    while(ind<A.size() && A[ind] == ' ')
    {
        ind++;
    }
    bool can_minus_come = 1;
    bool isNegative = 0;
    if(ind<A.size() && A[ind] == '-')
    {
        isNegative = 1;
        can_minus_come = 0;
        ind++;
    }
    else if(ind<A.size() && A[ind] == '+')
    {
        ind++;
    }
    long long int toreturn = 0;
    while(ind<A.size() && (A[ind]<='9' && A[ind]>='0'))
    {
        toreturn = toreturn*10 + A[ind]-'0';
        if(toreturn>INT_MAX)
        {
            if(isNegative && toreturn>(INT_MAX+1))
            {
                return INT_MIN;
            }
            else
            {
                return INT_MAX;
            }
        }
        ind++;
    }
    if(isNegative)
    toreturn = -toreturn;
    return toreturn;
    
}
