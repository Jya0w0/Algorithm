#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isCovered(vector<float> position, float length, float w){
    sort(position.begin(), position.end());

    float current = 0.0f;
    float radius = w / 2.0f;

    if (position.empty() || position[0] - radius > 0.0)
    {
        return false;
    }

    for (float p : position) 
    {
        if (current >= length)
        {
            return true;
        }
        if (p - radius > current)
        {
            return false;
        }
        current = p + radius;
    }
    return current >= length;
}

int main() {
    while (true) 
    {
        int nx, ny;
        float w;
        cin >> nx >> ny >> w;

        if (nx == 0 && ny == 0 && w == 0.0) break;

        vector<float> horizontal(nx);
        vector<float> vertical(ny);
        for (int i = 0; i < nx; i++) 
        {
            cin >> horizontal[i];
        }

        for (int i = 0; i < ny; i++) 
        {
            cin >> vertical[i];
        }

        bool isHorizontalCovered = isCovered(horizontal, 75.0, w);
        bool isVerticaCovered = isCovered(vertical, 100.0, w);

        if (isHorizontalCovered && isVerticaCovered)
        {
            cout << "YES" << "\n";
        }
        else 
        {
            cout << "NO" << "\n";
        }
    }
}