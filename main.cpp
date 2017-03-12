#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    int i = 0, j = 0;
    string file1, file2, s1, s2;
    ifstream fin1, fin2;
    ofstream fout1, fout2;
    cout << "Enter the name of the first file" << endl;
    cin >> file1;
    cout << "Enter the name of the second file" << endl;
    cin >> file2;
    fin1.open (file1);
    fin2.open (file2);

    if ((!fin1.is_open()) || (!fin2.is_open()))
    {
        cout << "File not found\n" << endl;
    }
    if ((fin1.is_open()) && (fin2.is_open())) {
        while ((!fin1.eof()) && (!fin2.eof())) {
            i++;
            getline(fin1, s1);
            getline(fin2, s2);

            if (s1 == s2) {
                j = 1;
            }
            if (j == 0) {
                cout << file1 << " " << i << " " << s1 << endl;
                cout << file2 << " " << i << " " << s2 << endl;
            }
        }
    }

    fin1.close();
    fin2.close();

    system("pause");
    return 0;
}