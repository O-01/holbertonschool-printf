# _Printf Project

![image](https://github.com/tiffanywalker22/test/assets/121834519/77aefda3-ca99-4e00-bca9-b2f390d9873f)

<hr>

**Description**<br>
<ul style=“list-style-type:square”> 
<li> The _printf function is used to print output on the screen. </li> <br>
<li> _printf takes a format string "format" and a variable number of arguments "(...)". It returns the number of characters printed. </li> <br>
<li> The syntax is: *_printf(” format String”, Arguments);* </li><br>
<li> Format String: It is a string that specifies the output </li> <br>
<li> Arguments: These are the variable names corresponding to the format specifier </li> </ul> <br>

<hr>

**Synopsis** <br>

For this project, we were tasked to create our own printf function. <br>

Our custom printf function handles the following conversion specifiers: <br>
<ul style=“list-style-type:square”>
<li> c: for printing characters </li> <br>
<li> s: for printing strings </li> <br>
<li> %: for printing percentages </li> <br>
<li> d, i: for printing signed and unsigned integers </li> <br> </ul>

**Flowchart of _printf proccess**

![image](https://github.com/O-01/holbertonschool-printf/assets/121834519/b231936b-57f4-463c-8fc2-8545ae60d585)

**How the function works**
*Va_list* variable *mag* is declared. Variable is used to access the variable arguments passed to the function. If the *format* string is *NULL* or if only consists of a single '%' character, function returns -1. Code iterates through each character of *format* string. If current character is '%', it checks the next character to determine the specifier. Based on specifier, it calls functions "*c_printer, s_printer, di_printer, m_printer*" to process and print the variable argument. The return value of these functions is added to the *sum* variable, which keeps track of total number of characters printed. <br>

If current character is not '%', it is printed using *_putchar* and character is added to *sum* variable. After processing all characters in *format* string, the *va_list* is ended using *va_end*. Function finally returns total number of characters printed *(sum)*.


<hr>

**Requirements**
<ul style=“list-style-type:square”>
<li> Allowed editors: vi, vim, emacs </li>
<li> All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 </li>
<li> All files should end with a new line </li>
<li> A README.md file, at the root of the folder of the project is mandatory </li>
<li> Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl </li>
<li> Not allowed to use global variables </li>
<li> No more than 5 functions per file </li>
<li> The prototypes of all functions should be included in header file called main.h </li>
<li> All header files should be include guarded </li> </ul>

<hr>

**Authors** <br>
<a href="https://github.com/O-01">Sammy Ansari</a> <br>
<a href="https://github.com/tiffanywalker22">Tiffany Walker</a> <br>
