#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    float marks[n], sum = 0, avg;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter marks of student " << i+1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    avg = sum / n;

    cout << "\nAverage Marks = " << avg << endl;

    if(avg >= 90)
        cout << "Grade: A";
    else if(avg >= 75)
        cout << "Grade: B";
    else if(avg >= 60)
        cout << "Grade: C";
    else if(avg >= 50)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}
