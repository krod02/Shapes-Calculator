## Project Iteration 1

1. Item ID: 3
* Issue: OS access controls are used to only allow authorized changes to be made to code.
* Identifier: SEC-01
* Explanation: 
In order to prevent unauthorized changes being made to my source code files, I utilized my OS access controls. I went through security properties for each source code file, and edited the permissions. This allowed me to modify permissions for each user or group to where only I am allowed to make changes to the files. 

2. Item ID: 9 
* Issue: Logging is integrated into the code itself (for exceptions, errors, and user input failures at minimum)
* Identifier: SEC-02
* Explanation: In order to track changes being made to the project, as well as tracking to see who made the changes, I fully integrated Git and Github into my development process. Rather than just uploading the source code files from my file directory into github, I will pull and push changes to github through my IDE. This will allow me to track changes being made to the project. 

## Project Iteration 2
1. Item ID: 2
* Issue: The cloud based platform provides for hiding information and this is used to protect sensitive information and code.
* Identifier: SEC-03
* Explanation:
The use of GitHub as the VCS allows me to only push files/changes to the repo that can be shown to the public. It allows me t protect sensitive information and code such as files like .gitignore, cache files, or any file that may have a security risk if shown on a public repository.

2. Issue: Code Issue
* Identifier: SEC-04
* Explanation: Implemented the use of STL array style over the c-style to the string menu array. This allows for a more updated method. Also, changed variable type to const array<string, 5> menu to prevent any changes to the size of the array. 

3. Issue: Buffer Overflows
* Identifier: SEC-05
* Explanation: To prevent memory leaks and buffer overflow issues, I implemented smart_pointers so that dynamically allocated memory would be deleted automatically. I also implemented for loops that use an iterator of type vector<smart_pointer>, which iterate better through dynamically allocated memory such as pointers. This will also help prevent buffer overflows since the .size method of a vector is not in use anymore.  

Link to commit for code changes: https://github.com/krod02/Shapes-Calculator/commit/76904bc34ce2df8284202e291bcff9683a13f697

## Next Items
1. Item ID: 7
* Issue: Physical Security of actual computer code is stored on is adequete
3. Item ID: 13
* Issue: Security Testing used (the type varies)
4. Item ID: 12
* Issue: Standard Unit Testing used
