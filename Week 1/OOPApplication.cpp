/* SAMPLE PROGRAM - From Tran Minh Nhat, s3926629 */

#include <iostream>
using namespace std;

class WebScore {
    public:
    int myScore;
    string myRank;
};

class UCDScore {
    public:
    int ucdScore;
    string ucdRank;
};

void scoreCalculator() {
    WebScore myResults;
    cout << "Please enter your score for the Web Programming bootcamp test: ";   // students input their scores
    cin >> myResults.myScore;
    cout << "Got your web score = " << myResults.myScore << "\n";   // system confirm the scores to prepare for their results
    if (myResults.myScore < 23 && myResults.myScore > 0) {
        cout << "Sorry, you have failed the test. Better luck next time. \n";
        myResults.myRank = "NN";
        cout << "Your rank is " << myResults.myRank << "\n" ;
    } else if (myResults.myScore > 23 && myResults.myScore < 45) {
        cout << "Congratulations, you have passed the test. Here is your rank: \n";
        if (myResults.myScore > 23 && myResults.myScore < 27.5) {
             myResults.myRank = "PA";
             cout << "Your score is " << myResults.myScore << "\n";
             cout << "Your rank is " << myResults.myRank << "\n";
        } else if (myResults.myScore > 27.5 && myResults.myScore < 31) {
             myResults.myRank = "CR";
             cout << "Your score is " << myResults.myScore << "\n";
             cout << "Your rank is " << myResults.myRank << "\n";
        } else if (myResults.myScore > 31 && myResults.myScore < 36) {
             myResults.myRank = "DI";
             cout << "Your score is " << myResults.myScore << "\n";
             cout << "Your rank is " << myResults.myRank << "\n";
        } else {
             myResults.myRank = "HD";
             cout << "Your score is " << myResults.myScore << "\n";
             cout << "Your rank is " << myResults.myRank << "\n";
        }
    } else {
        cout << "Not a valid score. Try again for authentic results. \n";
    }
}

void ucdRankingSystem() {
    UCDScore myUCD;
    cout << "Please enter your overall scores for the User-centered Design course: ";   // students input their scores
    cin >> myUCD.ucdScore;
    cout << "Got your web score = " << myUCD.ucdScore << "\n";   // system confirm the scores to prepare for their results
    if (myUCD.ucdScore < 50 && myUCD.ucdScore > 0) {
        cout << "You have failed the UCD course. \n";
        myUCD.ucdRank = "NN";
        cout << "Your rank is " << myUCD.ucdScore << "\n" ;
    } else if (myUCD.ucdScore > 50 && myUCD.ucdScore < 100) {
        cout << "You have passed the course with the score above: \n";
        if (myUCD.ucdScore > 50 && myUCD.ucdScore < 60) {
             myUCD.ucdRank = "PA";
             cout << "Your rank is " << myUCD.ucdRank << "\n";
        } else if (myUCD.ucdScore > 60 && myUCD.ucdScore < 70) {
             myUCD.ucdRank = "CR";
             cout << "Your rank is " << myUCD.ucdRank << "\n";
        } else if (myUCD.ucdScore > 70 && myUCD.ucdScore < 80) {
             myUCD.ucdRank = "DI";
             cout << "Your rank is " << myUCD.ucdRank << "\n";
        } else {
             myUCD.ucdRank = "HD";
             cout << "Your rank is " << myUCD.ucdRank << "\n";
        }
    } else {
        cout << "Not a valid total score. Please try again \n";
    }
}

int main() {
    cout << "Hello everyone! Welcome to the world of C++ \n";
    cout << "This application is a small app to demonstrate OOP in C++ \n";
    cout << "Have a good time using the app! \n";
    int choice;
    cout << "Enter your choice of function (1 or 2) \n";
    cin >> choice;
    switch (choice) {
        case 1:
          scoreCalculator();
          break;
        case 2:
          ucdRankingSystem();
          break;
        default:
          cout << "Invalid choice please try again \n";
    }
    cout << "Thank you for using this application. Have a good day! \n";
    cout << "Produced by Nhat Tran for COSC2082. (C) 2023 All rights reserved. ";
    return 0;
}
