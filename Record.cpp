#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
struct Score {
    string playerName;
    int score;
};

bool compareScores(const Score& score1, const Score& score2) {
    return score1.score > score2.score; // Sort in descending order
}

void saveScoresToFile(const Score* scores, size_t count, const string& fileName) {
   ofstream file("userData.txt");
    if (file.is_open()) {
        for (size_t i = 0; i < count; ++i) {
            file << scores[i].playerName << "," << scores[i].score << "\n";
        }
        file.close();
        cout << "Scores saved to file." << endl;
    } else {
       cout << "Unable to open file." << endl;
    }
}

int main() {
    const size_t MAX_SCORES = 10;   // size_t is used for array indexing and loop counting
    Score scores[MAX_SCORES];
    size_t scoreCount = 0;
    
    // Assume the game is played and scores are recorded
    
    // Sample scores for demonstration purposes
    scores[scoreCount++] = {"Player1", 100};
    scores[scoreCount++] = {"Player2", 200};
    scores[scoreCount++] = {"Player3", 150};
    scores[scoreCount++] = {"Player4", 300};
    scores[scoreCount++] = {"Player5", 250};
    scores[scoreCount++] = {"Player6", 180};

 return 0;   
}