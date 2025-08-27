#include <bits/stdc++.h>

using namespace std;

int main()
{
    int student_size;

    cin >> student_size;

    vector<int>student, skill(4,0);

    for( int i = 0; i < student_size; i++ )
    {
        int value;

        cin >> value;

        student.push_back(value);

        skill[value]++;
    }

    int low = min_element( skill.begin()+1, skill.end() ) - skill.begin();

    cout << skill[low] << endl;

    for( int i = 0; i < skill[low]; i++ )
    {
        for( int j = 1; j <= 3; j++ )
        {
            int position;

            auto target_located = find( student.begin(), student.end(), j );

            position = distance( student.begin(), target_located );

            cout << position+1 << " ";

            student[position] = 0;
        }

        cout << endl;
    }
}

