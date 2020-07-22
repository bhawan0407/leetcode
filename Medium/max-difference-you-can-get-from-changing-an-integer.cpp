class Solution {
public:
    int maxDiff(int num) {
        
        string ns = to_string(num);
        
        string a = ns;
        
        int len = ns.length();
        
        int i = 0;
        
        while(i < len && a[i] == '9')
        {
            i++;
        }
        
        if(i != len)
        {
            char tmp = a[i];
            
            std::replace( a.begin() + i, a.end(), tmp, '9');
        }
        
        string b = ns;
        
        i = 0;
        
        while(i < len && (b[i] == '1' || b[i] == '0'))
        {
            i++;
        }
        
        if(i != len)
        {
            char tmp = b[i];
            
            std::replace( b.begin() + i, b.end(), tmp, (i == 0) ? '1' : '0');
        }
        
        //return stoi(b);
        
        return abs(stoi(a) - stoi(b));
        
    }
};
