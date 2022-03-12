# Every Variable have a name , value and address.

int i = 10;

    //  Address of Operator
    cout << &i << endl;

    //  Creating Pointer variable storing address of i
    int *p = &i;

    // Printing address of i
    cout << p << endl;

    //  printing value of i using dereferrance operator
    cout << *p << endl;

    // Null Pointer
    int *k = 0;


# Prefix vs Postfix:
    postfix gets the first presedence then the prefix will take place (right to left)

# Arrays:
    # Arrays are default passed by address int arr[] is same as int *ptr

    int arr[] = {1,2,3};
    int *ptr = arr;

# Pointer stores address of first element of array 
    arr[0]