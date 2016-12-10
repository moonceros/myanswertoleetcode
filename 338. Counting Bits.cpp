class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> so;
        int q;
        int count;
        for(int i=0;i<=num;i++)
        {
        count=0;
         q=i;
        while(q!=0)
        {
            if(q%2==1) count++;
            q=q/2;
        }
        so.push_back(count);
        }
        return so;
    }
};
