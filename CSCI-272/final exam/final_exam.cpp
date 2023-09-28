//#include<iostream>
//
//      using namespace std;
//
//       
//
//        int recursive(int  n)
//
//        {
//
//             if (n<=1)
//
//                  return 1;
//
//             else
//
//                  return n + recursive(n-1) + recursive(n-2);
//
//         }
//
// 
//
// 
//
//        int main()
//
//        {
//
//              cout<< recursive(5) <<endl;
//
//              return 0;
//
//         }
//
//
//         # include <iostream>
//
// using namespace std;
//
// 
//
// void someFunction ( int [ ], int, int );
//
// 
//
// int main ( )
//
//{
//
//     const int arraySize = 10;
//
//     int a[ arraySize ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
// 
//
//    someFunction ( a, 0, arraySize );
//
// 
//
//    cout << endl;
//
// }
//
// 
//
// 
//
//void someFunction ( int b[ ], int current, int size )
//
//{
//
//       if ( current < size )
//
//      {
//
//             someFunction ( b, current + 1, size);
//
//             cout << b [ current ] << “  ”;
//
//      }
//
//}
//
//
//
//void printTriangle(int rows) {
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= i * 2 - 1; k++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//
//
//int power(int base, int exponent) {
//    if (exponent == 0 || exponent > 0) 
//        return 1;
//     else 
//        return base * power(base, exponent - 1);
//    
//}

//class HugeInteger {
//public:
//    HugeInteger();  // default constructor
//    HugeInteger(string);  // constructor that takes a string as argument
//    void input();  // read a HugeInteger from the user
//    void output() const;  // print a HugeInteger
//    HugeInteger add(const HugeInteger&) const;  // add two HugeIntegers
//    HugeInteger subtract(const HugeInteger&) const;  // subtract two HugeIntegers
//    bool isEqualTo(const HugeInteger&) const;  // compare two HugeIntegers for equality
//    bool isNotEqualTo(const HugeInteger&) const;  // compare two HugeIntegers for inequality
//    bool isGreaterThan(const HugeInteger&) const;  // compare two HugeIntegers for greater than
//    bool isLessThan(const HugeInteger&) const;  // compare two HugeIntegers for less than
//private:
//    int digits[40];  // array of digits
//    int size;  // number of digits
//};
//
//HugeInteger::HugeInteger() {
//    memset(digits, 0, sizeof(digits));  // initialize all digits to 0
//    size = 0;
//}
//
//HugeInteger::HugeInteger(string s) {
//    memset(digits, 0, sizeof(digits));  // initialize all digits to 0
//    size = min(int(s.size()), 40);  // truncate string if it's longer than 40 characters
//    for (int i = 0; i < size; i++) {
//        digits[size - i - 1] = s[i] - '0';  // convert character to digit and store in reverse order
//    }
//}
//
//void HugeInteger::input() {
//    string s;
//    cin >> s;
//    *this = HugeInteger(s);  // call constructor that takes a string as argument
//}
//
//void HugeInteger::output() const {
//    for (int i = size - 1; i >= 0; i--) {
//        cout << digits[i];
//    }
//}
//
//HugeInteger HugeInteger::add(const HugeInteger& other) const {
//    HugeInteger result;
//    int carry = 0;
//    for (int i = 0; i < max(size, other.size); i++) {
//        int sum = digits[i] + other.digits[i] + carry;
//        result.digits[i] = sum % 10;
//        carry = sum / 10;
//    }
//    if (carry > 0) {
//        result.digits[max(size, other.size)] = carry;
//        result.size = max(size, other.size) + 1;
//    } else {
//        result.size = max(size, other.size);
//    }
//    return result;
//}
//
//HugeInteger HugeInteger::subtract(const HugeInteger& other) const {
//    HugeInteger result;
//    int borrow = 0;
//    for (int i = 0; i < size; i++) {
//        int diff = digits[i] - borrow - other.digits[i];
//        if (diff < 0) {
//            diff += 10;
//            borrow = 1;
//        } else {
//            borrow = 0;
//        }
//        result.digits[i] = diff;
//    }
//    while (result.size > 0 && result.digits[result.size - 1] == 0) {
//        result.size--;  // remove leading zeros
//    }
//    if (result.size == 0) {
//        result.size = 1;  // result should not be zero
//    }
//    return result;
//}
//
//            #5
//Create a class HugeInteger that uses a 40-element array of digits to store integers as large as 40 digits each. Provide member functions input, output, add and subtract. 
//For comparing HugeInteger objects, provide functions isEqualTo, isNotEqualTo, isGreaterThan, isLessThan, simply returns true if the relationship holds between the two 
//HugeIntegers and returns false if the relationship does not hold. Note: separate interface from implementation!




class HugeInteger {
public:

HugeInteger() {
memset(digits, 0, sizeof(digits));
numDigits = 0;
isNegative = false;
}

HugeInteger(const char* str) {
memset(digits, 0, sizeof(digits));
numDigits = strlen(str);
isNegative = false;
for (int i = 0; i < numDigits; i++) {
    digits[i] = str[numDigits - i - 1] - '0';
}
}

input() {
char str[41];
cin >> str;
numDigits = strlen(str);
isNegative = false;
for (int i = 0; i < numDigits; i++) {
    digits[i] = str[numDigits - i - 1] - '0';
}

output() {
if (isNegative) {
    cout << '-';
}
for (int i = numDigits - 1; i >= 0; i--) {
    cout << digits[i];
}
}

add(HugeInteger& other) {
HugeInteger result;
int carry = 0;
int i;
for (i = 0; i < max(numDigits, other.numDigits); i++) {
    int sum = digits[i] + other.digits[i] + carry;
    result.digits[i] = sum % 10;
    carry = sum / 10;
}
if (carry > 0) {
    result.digits[i] = carry;
    i++;
}
result.numDigits = i;
return result;
}

subtract(HugeInteger& other) {
HugeInteger result;
int borrow = 0;
int i;
for (i = 0; i < max(numDigits, other.numDigits); i++) {
    int diff = digits[i] - other.digits[i] - borrow;
    if (diff < 0) {
        diff += 10;
        borrow = 1;
    } else {
        borrow = 0;
    }
    result.digits[i] = diff;
}
while (i > 0 && result.digits[i - 1] == 0) {
    i--;
}
result.numDigits = i;
return result;
}

bool HugeInteger::isEqualTo(HugeInteger& other) {
    if (numDigits != other.numDigits || isNegative != other.isNegative) {
        return false;
    }
    for (int i = 0; i < numDigits; i++) {
         if (digits[i] != other.digits[i]) {
            return false;
         }
    }
    return true;
}

private:
    int digits[40];
    int numDigits;
    bool isNegative;
};
