class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int c=capacity;
        int s=0;
        for(int i=0;i<plants.size();i++){
            if(plants[i]<=c){
                c-=plants[i];
                s++;
            }
            else if(plants[i]>c){
                c=capacity;
                c-=plants[i];
                s+=i*2+1;
            }
        }
        return s;
    }
};