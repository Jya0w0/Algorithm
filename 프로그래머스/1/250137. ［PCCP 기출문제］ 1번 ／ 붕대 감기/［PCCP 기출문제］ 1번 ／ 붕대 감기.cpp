#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int currentHp = health;
    int t = bandage[0];
    int x = bandage[1];
    int y = bandage[2];
    int successTime = 0;
    int currentTime = 0;
    
    for (int i = 0; i < attacks.size(); i++) {
        int attackTime = attacks[i][0];
        int damage = attacks[i][1];

        while (currentTime < attackTime) 
        {
            currentTime++;
            successTime++;
            currentHp += x;
            if (successTime == t) 
            {
                currentHp += y;
                successTime = 0;
            }
            
            if (currentHp > health) currentHp = health;
        }

        currentHp -= damage;
        if (currentHp <= 0) return -1;
        successTime = 0;
        currentTime++;
    }
    
    return currentHp;
}