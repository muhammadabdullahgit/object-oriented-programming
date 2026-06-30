#include <iostream>
#include "Number.h"
#include "Complex.h"
#include "Logs.h"
#include "Calculator.h"

using namespace std;

int main() {
    Calculator calculator;
    Logs logs;
    int x;
    cout << "enter (1) for calculator complex functions" << endl;
    cout << "enter (2) for calculator natural numbers functions" << endl;
    cin >> x;
    switch (x) {
        case 1: {
            int x1;
            cout << "enter (1) for calculator complex addition" << endl;
            cout << "enter (2) for calculator complex subtraction" << endl;
            cout << "enter (3) for calculator complex multiplication" << endl;
            cout << "enter (4) for calculator complex division" << endl;
            cin >> x1;
            switch (x1) {
                case 1: {
                    double real1, real2, imaginary1, imaginary2;
                    cout << "enter first complex number real part " << endl;
                    cin >> real1;
                    cout << "enter first complex number imaginary part " << endl;
                    cin >> imaginary1;
                    cout << "enter second complex number real part" << endl;
                    cin >> real2;
                    cout << "enter second complex number imaginary part " << endl;
                    cin >> imaginary2;
                    Complex c1(real1, imaginary1);
                    Complex c2(real2, imaginary2);
                    Complex c3;
                    c3 = c1 + c2;
                    cout << endl;
                    cout << "Complex(" << c3.getReal() << " , " << c3.getImaginary() << ")" << endl;
                    break;
                }
                case 2: {
                    double real1, real2, imaginary1, imaginary2;
                    cout << "enter first complex number real part " << endl;
                    cin >> real1;
                    cout << "enter first complex number imaginary part " << endl;
                    cin >> imaginary1;
                    cout << "enter second complex number real part" << endl;
                    cin >> real2;
                    cout << "enter second complex number imaginary part " << endl;
                    cin >> imaginary2;
                    Complex c4(real1, imaginary1);
                    Complex c5(real2, imaginary2);
                    Complex c6 = c4 - c5;
                    cout << endl;
                    cout << "Complex(" << c6.getReal() << " , " << c6.getImaginary() << ")" << endl;
                    break;
                }
                case 3: {
                    double real1, real2, imaginary1, imaginary2;
                    cout << "enter first complex number real part " << endl;
                    cin >> real1;
                    cout << "enter first complex number imaginary part " << endl;
                    cin >> imaginary1;
                    cout << "enter second complex number real part" << endl;
                    cin >> real2;
                    cout << "enter second complex number imaginary part " << endl;
                    cin >> imaginary2;
                    Complex c7(real1, imaginary1);
                    Complex c8(real2, imaginary2);
                    Complex c9 = c7 * c8;
                    cout << endl;
                    cout << "Complex(" << c9.getReal() << " , " << c9.getImaginary() << ")" << endl;
                    break;
                }
                case 4: {
                    double real1, real2, imaginary1, imaginary2;
                    cout << "enter first complex number real part " << endl;
                    cin >> real1;
                    cout << "enter first complex number imaginary part " << endl;
                    cin >> imaginary1;
                    cout << "enter second complex number real part" << endl;
                    cin >> real2;
                    cout << "enter second complex number imaginary part " << endl;
                    cin >> imaginary2;
                    Complex c10(real1, imaginary1);
                    Complex c11(real2, imaginary2);
                    Complex c12 = c10 / c11;
                    cout << endl;
                    cout << "Complex(" << c12.getReal() << " , " << c12.getImaginary() << ")" << endl;
                    break;
                }
                default: {
                    cout << "wrong key pressed in calculator complex functions menu" << endl;
                    break;
                }
            }
            break;
        }
        case 2: {
            int x2;
            cout << "enter (1) for addition" << endl;
            cout << "enter (2) for subtraction" << endl;
            cout << "enter (3) for multiplication" << endl;
            cout << "enter (4) for division" << endl;
            cout << "enter (5) for adding number to logs" << endl;
            cin >> x2;
            switch (x2) {
                case 1: {
                    double a1, b1;
                    cout << "enter first number" << endl;
                    cin >> a1;
                    cout << "enter second number" << endl;
                    cin >> b1;
                    Number num1(a1);
                    Number num2(b1);
                    Number num3;
                    num3 = calculator.add(num1, num2);
                    cout << "addition : " << num3.getValue() << endl;
                    break;
                }
                case 2: {
                    double a1, b1;
                    cout << "enter first number" << endl;
                    cin >> a1;
                    cout << "enter second number" << endl;
                    cin >> b1;
                    Number num4(a1);
                    Number num5(b1);
                    Number num6;
                    num6 = calculator.subtract(num4, num5);
                    cout << "subtraction : " << num6.getValue() << endl;
                    break;
                }
                case 3: {
                    double a1, b1;
                    cout << "enter first number" << endl;
                    cin >> a1;
                    cout << "enter second number" << endl;
                    cin >> b1;
                    Number num7(a1);
                    Number num8(b1);
                    Number num9;
                    num9 = calculator.multiply(num7, num8);
                    cout << "multiplication : " << num9.getValue() << endl;
                    break;
                }
                case 4: {
                    double a1, b1;
                    cout << "enter first number" << endl;
                    cin >> a1;
                    cout << "enter second number" << endl;
                    cin >> b1;
                    Number num10(a1);
                    Number num11(b1);
                    Number num12;
                    num12 = calculator.divide(num10, num11);
                    cout << "division : " << num12.getValue() << endl;
                    break;
                }
                case 5: {
                    int size;
                    double a1;
                    cout << "enter total numbers to add" << endl;
                    cin >> size;
                    for (int i = 1; i <= size; ++i) {
                        cout << "enter  number" << endl;
                        cin >> a1;
                        Number num13(a1);
                        calculator.addNumberToLogs(logs, num13);
                        cout << "number( " << i << " )is added to logs" << endl;
                        cout << endl;
                    }
                    cout << "enter (1) to recall numbers from log otherwise enter any number to not recall" << endl;
                    int a;
                    cin >> a;
                    if (a == 1) {
                        cout << "     recalling numbers       " << endl;
                        for (int i = 0; i < size; ++i) {
                            cout << "recalled num  : " << calculator.recallNumberFromLogs(logs, i).getValue() << endl;
                        }
                    }
                    break;
                }
                default: {
                    cout << "wrong key pressed in calculator natural numbers functions menu" << endl;
                    break;
                }
            }
            break;
        }
        default: {
            cout << "wrong key press in main menu" << endl;
            break;
        }
    }
    //Make a Menu Driven Program and Call your functions here

    return 0;
}
