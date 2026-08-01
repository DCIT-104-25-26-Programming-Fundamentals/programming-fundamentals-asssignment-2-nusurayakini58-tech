// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 2
// =============================================================================
//
// TASK: Student Grade System
//
// Write a C++ program that reads a student's score and outputs the
// corresponding letter grade based on the scale below.
//
// Grading Scale:
//   Score 80 – 100  →  Grade A
//   Score 70 – 79   →  Grade B
//   Score 60 – 69   →  Grade C
//   Score 50 – 59   →  Grade D
//   Score below 50  →  Grade F
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLES
// -----------------------------------------------------------------------------
//
//   Enter student score (0-100): 85
//   Grade: A
//
//   Enter student score (0-100): 73
//   Grade: B
//
//   Enter student score (0-100): 45
//   Grade: F
//
//   Enter student score (0-100): 110
//   Error: Score must be between 0 and 100.
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST use functions (see scaffold below).
// - Validate the score inside getGrade(). If it is out of range, return '\0'
//   (null character) and let main() print the error message.
// - Use if / else if / else to determine the grade.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

Here's a complete C++ solution that follows all the assignment requirements. It uses an isPrime() function, handles numbers less than 2, and calls the function from main().

// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 1
// =============================================================================
//
// TASK: Prime Number Checker
//
// Write a C++ program that checks whether a given number is prime.
//
// =============================================================================

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is NOT a prime number." << endl;
    }

    return 0;
}
Sample Output 1
Enter a number: 7
7 is a prime number.
Sample Output 2
Enter a number: 10
10 is NOT a prime number.
Sample Output 3
Enter a number: 1
1 is NOT a prime number.

This solution is efficient because it only checks for divisors up to the square root of the number (i * i <= number) instead of checking all numbers up to number - 1.

is the code correct                                                                     #include <iostream>
using namespace std;

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is NOT a prime number." << endl;
    }

    return 0;
}

Yes, the code is correct and will work as expected. It meets all the assignment requirements:

✅ Uses a separate isPrime() function.
✅ Returns false for numbers less than 2.
✅ Checks whether a number is prime correctly.
✅ Calls isPrime() from main().
✅ Prints the correct output.

The only issue is that you've included these lines twice:

#include <iostream>
using namespace std;

You only need them once. Here's the cleaned-up version:

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is NOT a prime number." << endl;
    }

    return 0;
}
Test Cases
Input	Output
2	2 is a prime number.
7	7 is a prime number.
10	10 is NOT a prime number.
1	1 is NOT a prime number.
0	0 is NOT a prime number.
-5	-5 is NOT a prime number.

Verdict: 9.5/10. The logic is correct. Remove the duplicate #include <iostream> and using namespace std; lines, and your code is ready to submit.

 write  this code for me                                             / =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 2
// =============================================================================
//
// TASK: Student Grade System
//
// Write a C++ program that reads a student's score and outputs the
// corresponding letter grade based on the scale below.
//
// Grading Scale:
//   Score 80 – 100  →  Grade A
//   Score 70 – 79   →  Grade B
//   Score 60 – 69   →  Grade C
//   Score 50 – 59   →  Grade D
//   Score below 50  →  Grade F
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLES
// -----------------------------------------------------------------------------
//
//   Enter student score (0-100): 85
//   Grade: A
//
//   Enter student score (0-100): 73
//   Grade: B
//
//   Enter student score (0-100): 45
//   Grade: F
//
//   Enter student score (0-100): 110
//   Error: Score must be between 0 and 100.
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST use functions (see scaffold below).
// - Validate the score inside getGrade(). If it is out of range, return '\0'
//   (null character) and let main() print the error message.
// - Use if / else if / else to determine the grade.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;


Here's the complete C++ solution that satisfies all the assignment requirements.

// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 2
// =============================================================================
//
// TASK: Student Grade System
//
// Write a C++ program that reads a student's score and outputs the
// corresponding letter grade based on the grading scale.
//
// =============================================================================

#include <iostream>
using namespace std;

// Function to determine the student's grade
char getGrade(int score)
{
    // Validate score
    if (score < 0 || score > 100)
    {
        return '\0';   // Null character indicates invalid score
    }

    // Determine grade
    if (score >= 80)
    {
        return 'A';
    }
    else if (score >= 70)
    {
        return 'B';
    }
    else if (score >= 60)
    {
        return 'C';
    }
    else if (score >= 50)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    int score;

    cout << "Enter student score (0-100): ";
    cin >> score;

    char grade = getGrade(score);

    if (grade == '\0')
    {
        cout << "Error: Score must be between 0 and 100." << endl;
    }
    else
    {
        cout << "Grade: " << grade << endl;
    }

    return 0;
}