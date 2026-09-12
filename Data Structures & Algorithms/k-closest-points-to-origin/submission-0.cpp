class Solution {
private:
    double calc(double x, double y){
        double sq_x=x*x;
        double sq_y=y*y;
        double ans=pow((sq_x+sq_y), 0.5);
        return ans;
    }
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<double,int>,vector<pair<double,int>>,greater<pair<double,int>>> pq;
        for(int i=0;i<points.size();i++){
            double a=calc(points[i][0],points[i][1]);
            pq.push({a,i});
        }

        while(k--){
            auto p=pq.top();
            ans.push_back(points[p.second]);
            pq.pop();
        }

        return ans;
    }
};
