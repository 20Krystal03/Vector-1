#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    //vector<int> numbers;
    //numbers.push_back(4);
    //numbers.push_back(6);
    //numbers.push_back(10);
    //cout << "The size of the vector ---> " << numbers.size() << endl;
    //for (int x = 0; x < numbers.size(); x++) {
    //    cout << numbers[x] << endl;
    //}


    //string name;
    //double g;
    //vector<double> grades;
    //double totalgrades=0;
    //double average;
    //cout << "Enter student name --> ";
    //getline(cin, name);
    //for (int x = 0; x < 5; x++) {
    //    cout << "Enter Grade # " << (x + 1) << " ---> ";
    //    cin >> g;
    //    grades.push_back(g);
    //    totalgrades += g;
    //}
    //average = totalgrades / grades.size();
    //grades.push_back(average);
    //print
    //cout << "Student Name --> " << name << endl;
    //for (int x = 0; x < grades.size(); x++) {
    //    cout << grades[x] << endl;
    //}


    vector<int> numbers = { 23,56,78,89,90 };
    cout << "Original Vector" << endl;
    for (int x=0; x < numbers.size(); x++) {
        cout << numbers[x] << endl;
    }
    numbers.insert(numbers.begin() + 2, 100);
    cout << "\n\nCurrent Vector" << endl;
    for (int x=0; x < numbers.size(); x++) {
        cout << numbers[x] << endl;
    }
    numbers.erase(numbers.begin(), numbers.end() - 2);
    cout << "\n\nCurrent Vector" << endl;
    for (int x = 0; x < numbers.size(); x++) {
        cout << numbers[x] << endl;
    }
}
