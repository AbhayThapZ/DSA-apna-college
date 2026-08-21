// Leetcode 733
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void dfs(vector<vector<int>> &image,int i,int j,int newColor,int orgColor)
    {
        // Boundary condition
        // Already new color
        // Not the original color
        if (i < 0 ||j < 0 ||i >= image.size() ||j >= image[0].size() ||image[i][j] == newColor ||image[i][j] != orgColor)
        {
            return;
        }

        // Change current pixel
        image[i][j] = newColor;

        // Top
        dfs(image, i - 1, j, newColor, orgColor);

        // Right
        dfs(image, i, j + 1, newColor, orgColor);

        // Bottom
        dfs(image, i + 1, j, newColor, orgColor);

        // Left
        dfs(image, i, j - 1, newColor, orgColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image,int sr,int sc,int color)
    {
        dfs(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};

int main()
{
    Solution obj;

    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}};

    int sr = 1;
    int sc = 1;
    int color = 2;

    vector<vector<int>> result =
        obj.floodFill(image, sr, sc, color);

    // Print result
    cout << "Flood Filled Image:" << endl;

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}