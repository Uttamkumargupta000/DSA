//----------- APPROACH 1  using unnordered map ----------------

// TC = O(N)    SC = O(N)


class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        unordered_map<int, string> mapping;

        for(int i = 0; i < names.size() ; i++){
            mapping[heights[i]] = names[i];
        }

        // SORTING IN REVRESE ORDER FROM LAST TO END
        sort(heights.rbegin(), heights.rend());
        
        for(int i = 0; i < names.size() ; i++){
            names[i] = mapping[heights[i]];
        }

        return names;
    }
};


//-------------- APPROACH 2 USING PRIORITY QUEUE -----------------

// TC = O(N)

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        priority_queue<pair<int, string>> pq;
        
        for(int i =0; i < names.size(); i++){
            pq.push({heights[i], names[i]});
        }

        int index = 0;
        
        while(!pq.empty()){
            names[index] = pq.top().second;
            pq.pop();
            index++;
        }
        return names;
    }
};