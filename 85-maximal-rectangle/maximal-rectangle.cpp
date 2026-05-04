class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxA=0;
        int n=heights.size();
        
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || heights[st.top()]>=heights[i])){
                int height=heights[st.top()];
                st.pop();

                int width;
                if(st.empty()) width =i;
                else 
                width=i-st.top()-1;
                maxA=max(maxA,width*height);
            }
            st.push(i);
        }

        return maxA;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {

        if (matrix.empty()) return 0;

        // Get number of columns
        int m = matrix[0].size();

        // Height array to build histogram row-wise
        vector<int> height(m, 0);

        // Variable to track max rectangle area
        int maxArea = 0;

        // Traverse each row of the matrix
        for (auto& row : matrix) {

            // Update histogram based on current row
            for (int i = 0; i < m; i++) {
                if (row[i] == '1') height[i]++;
                else height[i] = 0;
            }

            // Compute area for this histogram
            maxArea = max(maxArea, largestRectangleArea(height));
        }

        return maxArea;
    }
};