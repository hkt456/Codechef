#include <iostream>
#include <cstring>
using namespace std;

char s1[25010], s2[25010], s3[25010];

int main()
{
    int t, found;
    int i, j;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2;
        if (strlen(s1) < strlen(s2))
        {
            strcpy(s3, s1);
            strcpy(s1, s2);
            strcpy(s2, s3);
        }

        i = 0;
        j = 0;
        while (s2[i] != '\0')
        {
            found = 0;
            while (s1[j] != '\0')
            {
                if (s2[i] == s1[j])
                {
                    found = 1;
                    j++;
                    break;
                }
                j++;
            }
            if (found == 0)
                break;
            i++;
        }
        if (found == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
