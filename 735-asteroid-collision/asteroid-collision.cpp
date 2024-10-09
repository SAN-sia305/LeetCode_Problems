#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int i = 1; // Start with the second asteroid (index 1)
        while (i < asteroids.size()) {
            if (asteroids[i - 1] > 0 && asteroids[i] < 0) { // Collision condition
                if (abs(asteroids[i - 1]) == abs(asteroids[i])) {
                    // Both are destroyed
                    asteroids.erase(asteroids.begin() + i - 1, asteroids.begin() + i + 1);
                    i = max(i - 1, 1); // Move back to check the new neighbors
                } else if (abs(asteroids[i - 1]) > abs(asteroids[i])) {
                    // Left asteroid wins, remove the right asteroid
                    asteroids.erase(asteroids.begin() + i);
                } else {
                    // Right asteroid wins, remove the left asteroid
                    asteroids.erase(asteroids.begin() + i - 1);
                    i = max(i - 1, 1); // Move back to check the new neighbors
                }
            } else {
                i++; // Move to the next pair of asteroids
            }
        }
        return asteroids;
    }
};
