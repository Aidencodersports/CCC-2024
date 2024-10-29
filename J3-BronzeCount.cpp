#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMax(int scoreamount, vector<int> scores, int max) {
  for (int j = 0; j < scoreamount; j++) {
    int currentelement = scores[j];

    if (currentelement > max) {
      max = currentelement;
    }
  }

  return max;
}

int main() {
  //use vectors since they are dynamic unlike arrays
  vector<int> scores;

  //variables
  int scoreamount;
  int firstmax = 0;
  int secondmax = 0;
  int thirdmax = 0;
  int input = 0;
  int count = 0;

  //num of scores
  cin >> scoreamount;

  //user input of scores
  for (int i = 0; i < scoreamount; i++) {
    cin >> input;
    scores.push_back(input);
  }

  //call getMax function
  firstmax = getMax(scoreamount, scores, firstmax);

  //find location of first max
  auto it = find(scores.begin(), scores.end(), firstmax); 

  //remove first max
  if (it != scores.end()) { 
    scores.erase(it); 
  }

  //call getMax function
  secondmax = getMax(scoreamount, scores, secondmax);

  //find location of second max
  it = find(scores.begin(), scores.end(), secondmax); 

  //remove second max
  if (it != scores.end()) { 
    scores.erase(it); 
  }

  //call getMax function
  thirdmax = getMax(scoreamount, scores, thirdmax);

  //count how many bronze medals
  for (int i = 0; i < scores.size(); i++) {
    if (scores[i] == scores[i+1]) {
      count++;
    }
  }

  //print answer
  cout << thirdmax << " " << count;
}

