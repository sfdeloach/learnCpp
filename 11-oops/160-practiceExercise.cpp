/*
 *  title:       Practice Student Exercise #9
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Jan 4, 2020
 *  description: Define a Student class as demonstrated in the video
 */

#include <iostream>

using namespace std;

class Student
{
private:
   string name;
   double *scores;
   int scoreArraySize;
   int numScores;

public:
   Student(int scoreSize);
   ~Student();

   string getName() { return this->name; };
   double *getScores() { return this->scores; };
   int getScoreArraySize() { return this->scoreArraySize; };
   int getNumScores() { return this->numScores; };

   void setName(string name) { this->name = name; };

   void addScore(double score);
   double calcAverage();
   char findGrade();
   void printReport();
};

Student::Student(int scoreSize)
{
   this->scoreArraySize = scoreSize;
   this->numScores = 0;
   this->scores = new double[scoreSize];
}

Student::~Student()
{
   delete[] this->scores;
   this->scores = nullptr;
}

void Student::addScore(double score)
{
   if (this->numScores < this->scoreArraySize)
   {
      this->scores[this->numScores] = score;
      this->numScores++;
   }
}

double Student::calcAverage()
{
   double sum = 0.0;
   for (int i = 0; i < this->numScores; ++i)
   {
      sum += this->scores[i];
   }
   return sum / (double)numScores;
}

char Student::findGrade()
{
   double ave = this->calcAverage();

   if (ave >= 90.0)
      return 'A';
   if (ave >= 80.0)
      return 'B';
   if (ave >= 70.0)
      return 'C';
   if (ave >= 64.0)
      return 'D';
   return 'F';
}

void Student::printReport()
{
   cout << endl
        << "*** Student Report ***" << endl
        << "Name: " << this->name << endl;

   for (int i = 0; i < this->numScores; ++i)
   {
      cout << "Score #" << (i + 1) << ": " << this->scores[i] << endl;
   }

   cout << "Average:  " << this->calcAverage() << endl
        << "Grade:    " << this->findGrade() << endl;
}

int main()
{
   string studentName;
   int numScores;

   cout << "Student Scores" << endl
        << "--------------" << endl;

   cout << "Enter name: ";
   cin >> studentName;
   cout << "Enter number of scores: ";
   cin >> numScores;

   Student student(numScores);
   student.setName(studentName);

   for (int i = 0; i < numScores; ++i)
   {
      double s;
      cout << "Enter score " << (i + 1) << " of " << numScores << ": ";
      cin >> s;
      student.addScore(s);
   }

   student.printReport();

   return 0;
}
