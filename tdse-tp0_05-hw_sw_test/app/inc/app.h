/*
 * Copyright (c) 2023 Juan Manuel Cruz <jcruz@fi.uba.ar> <jcruz@frba.utn.edu.ar>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * @file   : app.h
 * @date   : Set 26, 2023
 * @author : Juan Manuel Cruz <jcruz@fi.uba.ar> <jcruz@frba.utn.edu.ar>
 * @version	v1.0.0
 */

/* C Preprocessors (https://www.geeksforgeeks.org/) */
/*
 * Conditional Compilation in C directives is a type of directive that helps to
 * compile a specific portion of the program or to skip the compilation of some
 * specific part of the program based on some conditions. There are the
 * following preprocessor directives that are used to insert conditional code:
 *  #if Directive
 *  #ifdef Directive
 *  #ifndef Directive
 *  #else Directive
 *  #elif Directive
 *  #endif Directive
 */
#ifndef APP_INC_APP_H_
#define APP_INC_APP_H_

/********************** CPP guard ********************************************/
#ifdef __cplusplus
extern "C" {
#endif

/********************** inclusions *******************************************/

/********************** macros ***********************************************/

/* C typedef (https://www.geeksforgeeks.org/) */
/*
 * The typedef is a keyword that is used to provide existing data types with a
 * new name. The C typedef keyword is used to redefine the name of already
 * existing data types.
 * When names of datatypes become difficult to use in programs, typedef is
 * used with user-defined datatypes, which behave similarly to defining an
 * alias for commands.
 */

/* Enumeration (or enum) in C (https://www.geeksforgeeks.org/) */
/*
 * Enumeration (or enum) is a user defined data type in C. It is mainly used to
 * assign names to integral constants, the names make a program easy to read
 * and maintain.
 */
//typedef enum {TEST_0, TEST_1, TEST_2} test_x_t;
#define TEST_0 (0)
#define TEST_1 (1)
#define TEST_2 (2)

#define TEST_X (TEST_0)

/********************** typedef **********************************************/

/********************** external data declaration ****************************/

/* Memory Layout of C Programs (https://www.geeksforgeeks.org/) */
/* Storage Classes in C (https://www.geeksforgeeks.org/) */
/* C Variables (https://www.geeksforgeeks.org/) */
/* Global Variables in C (https://www.geeksforgeeks.org/) */
/* Extern Keyword in C (https://www.geeksforgeeks.org/) */
/*
 * A variable declared outside any function or a block of code is called a
 * global variable. Global variables are frequently used to permanently store
 * data in a defined scope where they can be accessed and manipulated.
 *
 * Global variables do not stay limited to a specific function, which means
 * that one can use any given function to access and modify the global
 * variables. The initialization of these variables occurs automatically to 0
 * during the time of declaration. Also, we generally write the global
 * variables before the main() function.
 *
 * extern keyword in C applies to C variables (data objects) and C functions.
 * Basically, the extern keyword extends the visibility of the C variables and
 * C functions. That’s probably the reason why it was named extern.
 */
extern uint32_t g_app_cnt;
extern volatile uint32_t g_tick_cnt;

/********************** external functions declaration ***********************/

/* Memory Layout of C Programs (https://www.geeksforgeeks.org/) */
/* Storage Classes in C (https://www.geeksforgeeks.org/) */
/* C Functions (https://www.geeksforgeeks.org/) */
/*
 * In a function declaration, we must provide the function name, its return
 * type, and the number and type of its parameters. A function declaration
 * tells the compiler that there is a function with the given name defined
 * somewhere else in the program.
 */
void app_init(void);
void app_update(void);

/********************** End of CPP guard *************************************/
#ifdef __cplusplus
}
#endif

#endif /* APP_INC_APP_H_ */

/********************** end of file ******************************************/
