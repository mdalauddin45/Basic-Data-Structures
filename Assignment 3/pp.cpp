#include<bits/stdc++.h>
using namespace std;

string getMixedColor(char color1, char color2) {
    if (color1 == color2) {
        // Two same colors vanish each other
        return "";
    } else if ((color1 == 'R' && color2 == 'B') || (color1 == 'B' && color2 == 'R')) {
        return "P";
    } else if ((color1 == 'R' && color2 == 'G') || (color1 == 'G' && color2 == 'R')) {
        return "Y";
    } else if ((color1 == 'B' && color2 == 'G') || (color1 == 'G' && color2 == 'B')) {
        return "C";
    }

    // Return empty string for any other combinations
    return "";
}

string getFinalColors(const string& colors) {
    stack<char> colorStack;

    for (char color : colors) {
        string mixedColor;
        if (!colorStack.empty()) {
            mixedColor = getMixedColor(colorStack.top(), color);
            if (mixedColor.empty()) {
                // Two colors vanished each other
                colorStack.pop();
                continue;
            }
        }
        colorStack.push(mixedColor.empty() ? color : mixedColor[0]);
    }

    string finalColors;
    while (!colorStack.empty()) {
        finalColors = colorStack.top() + finalColors;
        colorStack.pop();
    }

    return finalColors;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string colors;
        cin >> colors;

        string finalColors = getFinalColors(colors);
        cout << finalColors << endl;
    }

    return 0;
}
