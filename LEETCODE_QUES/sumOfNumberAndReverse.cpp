class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
                if(num == 0) return true;
        // if(num < 100) return num%11 == 0;
        // what about n = 100 
        if(num == 100) return false;

        int i=0;
        while(i<=num){
        string s=to_string(i);
        reverse(s.begin(),s.end());
        int temp=stoi(s);
        if(i+temp==num) return true;
        i++;
}return false;
        
    }
};
