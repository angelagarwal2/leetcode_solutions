class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        int twenty=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                five++;
            }
            if(bills[i]==10){
                ten++;
                if(five>0)
                five--;
                else return false;
            }
            if(bills[i]==20){
                twenty++;
                if(ten>0&&five>0){
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five-=3;
                }
                else
                return false;
            }
        }
        return true;
    }
};