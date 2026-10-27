#include <iostream>
#include <iomanip>// give us formating tools like setw() and set precission to allighn our table nicely

using namespace std;

int main()
{
    char name[5][20];
    int marks[5][3];
    int totals[5];
    float average[5];
    int topindex = 0;
    int highesttotal = -1;

    for (int i = 0; i < 5; i++)
    {
        cout << "enter name for student " << i + 1 << ": ";
        cin.getline(name[i], 20);
        cout << "enter 3 marks for " << name[i] << " (m1 m2 m3): ";
        cin >> marks[i][0] >> marks[i][1] >> marks[i][2];
        cin.ignore();

        totals[i] = marks[i][0] + marks[i][1] + marks[i][2];
        average[i] = totals[i] / 3.0f;

        if (totals[i] > highesttotal) {
            highesttotal = totals[i];
            topindex = i;
        }
    }

  
    cout << endl;
    cout << "\n_____________________________________________________________________________" << endl;
    cout << setw(10) << left << "name"
        << setw(6) << "m1"
        << setw(6) << "m2"
        << setw(6) << "m3"
        << setw(8) << "totals"
        << setw(8) << "average" << endl;
    cout << "\n_____________________________________________________________________________" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << setw(10) << left << name[i]
            << setw(6) << marks[i][0]
            << setw(6) << marks[i][1]
            << setw(6) << marks[i][2]
            << setw(8) << totals[i]
            << setw(8) << fixed << setprecision(1) << average[i] << endl;
        cout << "\n_____________________________________________________________________________" << endl;
    }


    cout << "top student : " << name[topindex] << endl;

    return 0;
}