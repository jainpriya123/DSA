class Solution {
public:
    string addStrings(string a1, string a2) {
        int n= a1.length();
        int m= a2.length();
        string res="";
        if(n<m) return addStrings(a2,a1);
        
        reverse(a1.begin(),a1.end());
        reverse(a2.begin(),a2.end());
        
        int carry=0;
        int i=0,j=0;
        
        while(i<n && j<m){
            int x= (a1[i]-'0');
            int y= (a2[j]-'0');
            int ans= x+y+carry;
            
            string last = to_string(ans%10);
            carry = ans/10;
            res+=last;
            i++;
            j++;
        }
        
        while(i<n){
            int x= (a1[i]-'0');
            int ans= x+carry;
            string last = to_string(ans%10);
            carry = ans/10;
            res+=last;
            i++;
        }
        
        if(carry>0){
            res.push_back('1');
        }
        reverse(res.begin(),res.end());
        return res;
    }
};