#include <iostream>

using namespace std;

int main()
{
    string str;
    int d1, d2, h1, h2, m1, m2, s1, s2;
    int d3, h3, m3, s3;

    cin >> str >> d1;
    cin >> h1 >> str >> m1 >> str >> s1;
    cin >> str >> d2;
    cin >> h2 >> str >> m2 >> str >> s2;

    s3 = s2 - s1;
    m3 = m2 - m1;
    h3 = h2 - h1;
    d3 = d2 - d1;

    if (s3 < 0)
    {
        s3 = s3 + 60;
        m3 = m3 - 1;
    }

    if (m3 < 0)
    {
        m3 = m3 + 60;
        h3 = h3 - 1;
    }

    if (h3 < 0)
    {
        h3 = h3 + 24;
        d3 = d3 - 1;
    }

    cout << d3 << " dia(s)" << endl;
    cout << h3 << " hora(s)" << endl;
    cout << m3 << " minuto(s)" << endl;
    cout << s3 << " segundo(s)" << endl;
    
    
    


    return 0;
}