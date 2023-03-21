void increment(int a) {
    a++;
}

int main() {
    int x = 5;
    increment(x);
    cout << x << endl; // Output: 5
    return 0;
}
/*In pass by value, a copy of the value of the argument is passed to the function. This means that any changes made to the value inside the function do not affect the original value of the argument outside the function. This method is used for simple data types like integers, floats, and characters.*/
/*Here, the increment function takes an integer a as an argument and increments it. However, when increment(x) is called in main, the value of x remains unchanged because a copy of x is passed to the function.*/

void increment(int* a) {
    (*a)++;
}

int main() {
    int x = 5;
    increment(&x);
    cout << x << endl; // Output: 6
    return 0;
}
/*n pass by pointer, a memory address of the argument is passed to the function. This means that any changes made to the value at that memory address inside the function affect the original value of the argument outside the function. This method is used for complex data types like arrays and objects.*/
/*Here, the increment function takes a pointer to an integer a as an argument and increments the value at the memory address pointed to by a. When increment(&x) is called in main, the value of x is changed to 6 because the function modifies the value at the memory address of x.*/
