#include <iostream>
using namespace std;

void drawSquare(int size, char character) {
for (int row = 0; row < size; row++) {
for (int col = 0; col < size; col++) {
if (row == 0 || row == size - 1 || col == 0 || col == size - 1) {
cout << character << " ";
} else {
cout << "  ";
}
}
cout << endl;
}
}

int main() {
int size;
char character;
cout << "Enter size of square: ";
cin >> size;
cout << "Enter character: ";
cin >> character;
drawSquare(size, character);
return 0;
}
