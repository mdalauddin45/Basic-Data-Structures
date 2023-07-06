#include<bits/stdc++.h>
using namespace std;
string getMixedColor(const string& color1, const string& color2) {
    if (color1 == color2) {
        return "";
    } else if ((color1 == "Red" && color2 == "Blue") || (color1 == "Blue" && color2 == "Red")) {
        return "Purple";
    } else if ((color1 == "Red" && color2 == "Green") || (color1 == "Green" && color2 == "Red")) {
        return "Yellow";
    } else if ((color1 == "Blue" && color2 == "Green") || (color1 == "Green" && color2 == "Blue")) {
        return "Cyan";
    }

    return "";
}

string getFinalColors(const string& colors) {
    stack<char> colorStack;

    for (char color : colors) {
        string mixedColor;
        if (!colorStack.empty()) {
            string prevColor(1, colorStack.top());
            mixedColor = getMixedColor(prevColor, string(1, color));
            if (mixedColor.empty()) {
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
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
       int x;
       cin>>x;
       string colors;
       cin>>colors;
       string finalColors = getFinalColors(colors);
       cout << finalColors << endl;
    }
    
    return 0;
}