#include <iostream>
using namespace std;
int main(){
    char choice1{};
    char choice2{};
    char choice3{};
    do{
        cout << "---------------------Main Menu------------------------" << endl;
        cout << "1. Math\n2. Words\nQ: Quit\n";
        cout << "Enter selection: ";
        cin >> choice1;
        if(choice1 == '1'){ // math
            do{
            cout << "---------------------Math Menu------------------------" << endl;
            cout << "1. Basic math\n2. Calculate distance traveled\n3. Calculate area\nM: Main Menu\n";
            cout << "Enter selection: ";
            cin >> choice2;
            if(choice2 != '1' && choice2 != '2' && choice2 != '3' && choice2 != 'm' && choice2 != 'M'){
                cout << "invalid input" << endl;
            }else if(choice2 == '1'){
                double num1{}, num2{}, result{};
                num1 = num2 = result = 0;
                cout << "Input a symbol (/,*,-,+): ";
                char math{};
                math = 0;
                cin >> math;
                if(math != '/' && math != '*' && math != '-' && math != '+'){
                    cout << "Invalid Input" << endl;
                }else if(math == '/'){
                    cout << "Enter 2 numbers seperated by spaces to divide: ";
                    cin >> num1 >> num2;
                    result = num1 / num2;
                }else if(math == '*'){
                    cout << "Enter 2 numbers seperated by spaces to multiply: ";
                    cin >> num1 >> num2;
                    result = num1 * num2;
                }else if(math == '-'){
                    cout << "Enter 2 numbers seperated by spaces to subtract: ";
                    cin >> num1 >> num2;
                    result = num1 - num2;
                }else if(math == '+'){
                    cout << "Enter 2 numbers seperated by spaces to add: ";
                    cin >> num1 >> num2;
                    result = num1 + num2;
                }
                cout << "Result: " << result << endl;
            }
            if(choice2 == '2'){
                double mph{};
                double minutes{};
                double traveled{};
                cout << "Enter how fast the object traveled in MPH: ";
                cin >> mph;
                cout << "Enter how many minutes the object has taveled: ";
                cin >> minutes;
                traveled = (mph / 60) * minutes;
                cout << "Distance traveled: " << traveled << " miles" << endl;
            }
            if(choice2 == '3'){
                cout << "Enter the width and length seperated by a space: ";
                int width{};
                int length{};
                int area{};
                cin >> width >> length;
                area = width * length;
                cout << "Area: " << area << endl;
            }
            }while(choice2 != 'M' && choice2 != 'm');
        }
        if(choice1 == '2'){ // words
            do{
            cout << "---------------------Word Menu------------------------" << endl;
            cout << "1. Reverse word\nM: Main Menu\n";
            cout << "Enter selection: ";
            cin >>  choice3;
            if(choice3 == '1'){
                cout << "Enter a word: ";
                string word{};
                word = '0';
                cin >> word;
                for(int i{word.size()}; i >= 0; i--){
                    cout << word[i];
                }
                cout << endl;
            }
            }while(choice3 != 'm' && choice3 != 'M');
        }
    }while(choice1 != 'q' && choice1 != 'Q');
    return 0;
    }