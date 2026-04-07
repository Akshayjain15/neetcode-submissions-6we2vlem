class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int max_area = 0;
        while(i < j)
        {
            int h = min(heights[i], heights[j]);
            int area = h*(j-i);
            max_area = max(area, max_area);
            if(heights[i] < heights[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return max_area;
    }
};
