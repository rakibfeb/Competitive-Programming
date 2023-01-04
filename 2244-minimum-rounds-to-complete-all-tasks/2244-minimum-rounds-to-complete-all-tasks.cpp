class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map <int,int> map;
        int count=0;
       if(tasks.size()== 1) return -1;
        for(int i = 0; i< tasks.size(); i++)
        {
            map[tasks[i]]++;
        }
        
        for (auto x:map)
        {
            if(x.second == 1) return -1;
            
            if(x.second == 2) 
            {
                count++;
            } 
            else
            {
                count+= x.second /3;
                int mod = x.second % 3;
                    if(mod > 0)
                    {
                        count++;
                    }
            }
        }
        return count;
    }
};