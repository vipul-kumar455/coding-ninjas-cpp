#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &height)
{
    int p=0;
    int p1=0;
        for(int i=1;i<n;i++)
        {

        int ff=p+abs(height[i]-height[i-1]);
            int ss=INT_MAX;
            if(i>1)
                ss=p1+abs(height[i]-height[i-2]);
            int mi=min(ff,ss);
            p1=p;
            p=mi;       
            
          
        }
    return p;
}
