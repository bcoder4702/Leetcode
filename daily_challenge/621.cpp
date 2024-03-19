class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<pair<int, char>, vector<pair<int, char>>> pq;
        map<char, int> mp;
        for (int i = 0; i < tasks.size(); i++) {
            mp[tasks[i]]++;
        }
        for (auto it : mp) {
            pq.push({it.second, it.first});
            // cout<<it.second<<" "<<it.first<<endl;
        }
        int count = 0;
        // bool flag=true;
        while (!pq.empty()) {
            vector<pair<int, char>> temp;
            int t = 0;
            for (int i = 0; i < n + 1; i++) {
                if (!pq.empty()) {
                    temp.push_back({pq.top().first - 1, pq.top().second});
                    pq.pop();
                    t++;
                    // count++;
                }
            }
            for (int i = 0; i < temp.size(); i++) {
                if (temp[i].first > 0) {
                    pq.push(temp[i]);
                }
                // else{
                // count+=!pq.empty() ? t: n+1;
                // }
            }
            count += !pq.empty() ? n + 1 : t;
        }
        return count;
    }
};