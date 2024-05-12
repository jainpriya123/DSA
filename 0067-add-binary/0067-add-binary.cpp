class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.length();
        int m=b.length();
        if(m>n) return addBinary(b,a);
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int carry=0;
        string ans="";
        int i=0,j=0;
        // cout<<(1+'0');
        while(i<n && j<m){
            int num= a[i]-'0' + b[j]-'0' + carry;
            carry=num/2;
            num=num%2;
            
            ans+=to_string(num);
            // ans.push_back(num);
            i++;
            j++;
        }
        
        
        while(i<n){
            int num= a[i]-'0' + carry;
            carry=num/2;
            num=num%2;
            ans+=to_string(num);
            // ans.push_back(num);
            i++;
        }
        
        if(carry==1){
            ans.push_back('1');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};