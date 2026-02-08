//Keywords are the reserved words that have special meanings. 
//Since their meanings are reserved, we cannot redefine them or use them for a different purpose.

/*
---------How to Identify C++ Keywords------
1) Syntax Highlighting: Most modern IDEs (like Visual Studio, CLion, Code::Blocks) highlight keywords in a different color. This makes them stand out from variables or function names.
2) Compiler Errors: If you mistakenly use a keyword as a variable name, your code won’t compile. Example:
int int = 5; // This will cause a compilation error
3) Official Documentation: Refer to the official C++ documentation or trusted programming resources to get a
*/


#include <iostream>
using namespace std;

// 'int' is a keyword 
int main() {
    
    // 'int' is a keyword 
    int age = 20;
    
    // 'if' is a keyword
    if (age > 18) { 
        cout << "Adult";
    }
    
    // 'return' is a keyword 
    return 0;       
}