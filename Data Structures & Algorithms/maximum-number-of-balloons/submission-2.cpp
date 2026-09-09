class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int len = text.length();
        int cnt = 0;

        int b = count(text.begin(),text.end(),'b');
        int a = count(text.begin(),text.end(),'a');
        int l = count(text.begin(),text.end(),'l');
        int o = count(text.begin(),text.end(),'o');
        int n = count(text.begin(),text.end(),'n');

        for(int i = 0;i<len-1;i++){
            if(b >= 1 && a >= 1 && l >= 2 && o >= 2 && n >=1){
                cnt++;
                b--;a--;l -= 2;o -= 2;n--;
            } else {
                break;
            }
        }
        return cnt;

    }
};