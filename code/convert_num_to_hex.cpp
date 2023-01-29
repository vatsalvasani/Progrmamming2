class Solution {
public:
    string toHex(int nums) {
        vector<char> v1 = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        string ans = "";
        if(nums==0)return"0";
        vector<int> v2(32,0);
        int k = 31;
        if(nums<0)
        {
            // nums = abs(nums);
            // while(nums>0 && k>=0)
            // {
            //     v2[k] = nums%2;
            //     nums=nums/2;
            //     k--;
            // }
            // int i = k;
            // while(v2[i]==0)
            // {i--;}
            // for(;i>=0;i--)
            // {
            //     v2[i] = ~(v2[i]);
            // }
            // while(k>=0){
            //     string s1="";
            //     for(int j=0;j<4;j++)
            //     {
            //         s1+=v2[k];
            //         k--;
            //     }
            //     reverse(s1.begin(),s1.end());
                
            // }
            //important point
            unsigned int num = nums;
            cout<<num;
            while(num>0)
            {
                ans+=v1[num%16];
                num = num/16;
            }
            reverse(ans.begin(),ans.end());
        }
        else{
            while(nums>0)
            {
                ans+=v1[nums%16];
                nums = nums/16;
            }
            reverse(ans.begin(),ans.end());
        }
        
        return ans;

        
    }
};