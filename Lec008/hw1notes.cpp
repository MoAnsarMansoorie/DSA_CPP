#include<iostream>
using namespace std;

int main() {
    int amount;

    cout << " Enter the amount you want to count notes " << endl;
    cin >> amount;

    int notes;
    switch(1) {

        case 1: notes = amount/100;
                cout << " Number of 100 notes are " << notes << endl;
                amount = amount - notes*100;
        
        case 2: notes = amount/50;
                cout << " Number of 50 notes are " << notes << endl;
                amount = amount - notes*50;

        case 3: notes = amount/20;
                cout << " Number of 20 notes are " << notes << endl;
                amount = amount - notes*20;

        case 4: notes = amount/10;
                cout << " Number of 10 notes are " << notes << endl;
                amount = amount - notes*10;

        case 5: notes = amount/5;
                cout << " Number of 5 notes are " << notes << endl;
                amount = amount - notes*5;

        case 6: notes = amount/2;
                cout << " Number of 2 notes are " << notes << endl;
                amount = amount - notes*2;

        case 7: notes = amount/1;
                cout << " Number of 1 notes are " << notes << endl;
                amount = amount - notes*1;
                break;

        default: cout << " Please enter a valid Amount " << endl;

    }
}