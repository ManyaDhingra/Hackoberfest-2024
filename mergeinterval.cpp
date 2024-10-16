class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty())
        {
            return {};
        } 
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> MI;
        vector<int> current=intervals[0];
        for(const auto &interval:intervals)
        {
            if(interval[0]<=current[1])
            {
                current[1]=max(current [1], interval[1]);
            }
            else
            {
                MI.push_back(current);
                current=interval;
            }

        }
        MI.push_back(current);
        return MI;
            
    }
};
