#include <iostream>
using namespace std;

// Function to print the currency breakdown for a denomination
void printDenomination(int noteCount, const string& denomination) {
    if (noteCount > 0)
        cout << denomination << " Rs notes: " << noteCount << endl;
}

int main() {
    int amount;

    // Prompt user to enter the amount
    cout << "Enter the amount: ";
    cin >> amount;

    // Variables to store the number of notes of each denomination
    int note2000 = 0, note500 = 0, note200 = 0, note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;

    // Calculate the number of notes of each denomination
    while (amount > 0) {
        switch (amount) {
            case 2000:
                note2000++;
                amount -= 2000;
                break;
            case 500:
                note500++;
                amount -= 500;
                break;
            case 200:
                note200++;
                amount -= 200;
                break;
            case 100:
                note100++;
                amount -= 100;
                break;
            case 50:
                note50++;
                amount -= 50;
                break;
            case 20:
                note20++;
                amount -= 20;
                break;
            case 10:
                note10++;
                amount -= 10;
                break;
            case 5:
                note5++;
                amount -= 5;
                break;
            case 2:
                note2++;
                amount -= 2;
                break;
            case 1:
                note1++;
                amount -= 1;
                break;
            default:
                // If none of the above cases match, break the loop
                amount = 0;
                break;
        }
    }

    // Output the result
    cout << "Currency breakdown:" << endl;
    printDenomination(note2000, "2000");
    printDenomination(note500, "500");
    printDenomination(note200, "200");
    printDenomination(note100, "100");
    printDenomination(note50, "50");
    printDenomination(note20, "20");
    printDenomination(note10, "10");
    printDenomination(note5, "5");
    printDenomination(note2, "2");
    printDenomination(note1, "1");

    return 0;
}
