// C++ program for the above approach
#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;

// Question Class
class Question {
private:
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;

public:
	// Setter Function
	void setValues(string, string,
				string, string,
				string, int, int);

	// Function to ask questions
	void askQuestion();
};

// Driver code
int main()
{
	cout << "\n\n\t\t\t\tWelcome to the GOLDEN DRAGON quiz"
		<< endl;
	cout << "\nPress Enter to start "
		<< "the quiz... " << endl;

	// Input
	cin.get();

	string Name;
	int Age;

	// Input the details
	cout << "What is your name?"
		<< endl;
	cin >> Name;
	cout << endl;

	cout << "How old are you?"
		<< endl;
	cin >> Age;
	cout << endl;

	string Respond;
	cout << "Are you ready to take"
		<< " the quiz " << Name
		<< "? yes/no" << endl;
	cin >> Respond;

	if (Respond == "yes") {
		cout << endl;
		cout << "OK then Good Luck!" << endl;
	}
	else {
		cout << "Have a nice day. Good Bye!" << endl;
		return 0;
	}

	// Objects of Question Class
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;
    Question q11;
    Question q12;

	// 3 is the position of
	// correct answer
	q1.setValues("Question 1: Who is the current monarch of the UK? ", "Charles III",
				"Elizabeth II", "1 and 2 are wrong",
				"1 and 2 are right", 1, 500);
	q2.setValues("Question 2: The winner of RTMO season 23 is from? ", "Hanoi",
				"Hue", "Thanh Hoa",
				"Haiphong", 3, 600);
	q3.setValues("Question 3: RMIT Vietnam has 4 schools which are SBM, SSET, SCD and what? ", "SMP",
				"Connect", "Student Council",
				"SEUP", 4, 700);
	q4.setValues("Question 4: The highest school in IELTS? ", "7.0",
				"9.0", "8.0",
				"10.0", 2, 800);
	q5.setValues("Question 5: If you're skeptical about something, you should take it with a grain of what?", "Sand",
				"Sugar", "Salt",
				"Sumaac", 3, 900);
	q6.setValues("Question 6: Hell's Kitchen - a famous kitchen competition - is hosted by who? ", "Marco Pierre",
				"Gordon Ramsay", "Jamie Oliver",
				"Luke Nguyen", 2, 1000);
	q7.setValues("Question 7: How many letters were in the longest word of English? ", "45",
				"50", "100",
				"189819", 4, 1100);
	q8.setValues("Question 8: The chemical formula for sulfuric acid is ", "H2SO4",
				"H2SO3", "H2SO2",
				"None of the above", 1, 1200);
	q9.setValues("Question 9: The general thing between Java, Python and C++ is that they can do ", "OOP",
				"Linked Lists", "Arrays",
				"All of the above", 4, 1300);
	q10.setValues("Question 10: Who gave the speech I have a dream 60 years ago to fight for human freedom and equality?", "Nelson Mandela",
				"John Kennedy", "Martin Luther King",
				"Oliver Tambo", 3, 1400);
    q11.setValues("Question 11: Vietnam currently has CSP with all those countries EXCEPT", "United States",
				"Russia", "Japan",
				"China PR", 3, 1500);
    q12.setValues("Question 12: Let four distinct positive integers such that the sum of each of the two numbers is divisible by 2 and the sum of each of the three numbers is divisible by 3. Find the minimum value of the sum of these four numbers?", "39",
				"40", "41",
				"42", 2, 10000);

	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();
    q11.askQuestion();
    q12.askQuestion();

	// Display the total score
	cout << "Total Score = " << Total
		<< " which will be multiplied with 1000 VND to get your money" << endl;

	// Display the results

	// If the player pass the quiz
	if (Total >= 70) {
		cout << "Congrats you passed the"
			<< " game with huge money!" << endl;
	}

	// Otherwise
	else {
		cout << "Alas! You failed to get big prize."
			<< endl;
		cout << "Better luck next time."
			<< endl;
	}
	return 0;
}

// Function to set the values of
// the questions
void Question::setValues(
	string q, string a1,
	string a2, string a3,
	string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}

// Function to ask questions
void Question::askQuestion()
{
	cout << endl;

	// Print the questions
	cout << Question_Text << endl;
	cout << "1. " << Answer_1 << endl;
	cout << "2. " << Answer_2 << endl;
	cout << "3. " << Answer_3 << endl;
	cout << "4. " << Answer_4 << endl;
	cout << endl;

	// Display the answer
	cout << "What is your answer?(in number)"
		<< endl;
	cin >> Guess;

	// If the answer is correct
	if (Guess == Correct_Answer) {
		cout << endl;
		cout << "Correct Answer !" << endl;

		// Update the correct score
		Total = Total + Question_Score;
		cout << "Score = " << Question_Score
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << endl;
	}

	// Otherwise
	else {
		cout << endl;
		cout << "Incorrect Answer !" << endl;
		cout << "Score = 0"
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << "Correct answer = "
			<< Correct_Answer
			<< "." << endl;
		cout << endl;
	}
}
