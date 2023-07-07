#include<bits/stdc++.h>
using namespace std;
string getMix(char color1, char color2) {
    if (color1 == color2) {
        return "";
    } else if ((color1 == 'R' && color2 == 'B') || (color1 == 'B' && color2 == 'R')) {
        return "P";
    } else if ((color1 == 'R' && color2 == 'G') || (color1 == 'G' && color2 == 'R')) {
        return "Y";
    } else if ((color1 == 'B' && color2 == 'G') || (color1 == 'G' && color2 == 'B')) {
        return "C";
    }
    return "";
}
string getColors(string colors) {
    stack<char> st;
    for (char color : colors) {
        if (!st.empty() && color == st.top()) {
            st.pop();
        } else {
            if (!st.empty()) {
                char color1 = st.top();
                string mix = getMix(color1, color);
                if (!mix.empty()) {
                    st.pop();
                    for (char c : mix) {
                        st.push(c);
                    }
                    continue;
                }
            }
            st.push(color);
        }
    }
    
    string finalColors;
    while (!st.empty()) {
        finalColors = st.top() + finalColors;
        st.pop();
    }
    
    return finalColors;
}
int main()
{
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        string colors;
        cin >> colors;
        string result = getColors(colors);
        if (result.empty()) {
            cout << "" << endl;
        } else {
            cout << result << endl;
        }
    }
    
    return 0;
}