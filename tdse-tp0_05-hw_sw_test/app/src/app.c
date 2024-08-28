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
 * @file   : app.c
 * @date   : Set 26, 2023
 * @author : Juan Manuel Cruz <jcruz@fi.uba.ar> <jcruz@frba.utn.edu.ar>
 * @version	v1.0.0
 */

/* Development on Bare Metal vs. RTOS
 * (https://www.sysgo.com/professional-articles/bare-metal-vs-rtos)
 */
/*
 * When developing embedded systems that are to be real-time capable, one of
 * the first and most important questions is whether the applications should
 * run under a real-time operating system (RTOS) or whether a bare-metal
 * solution should be developed.
 *
 * Bare-metal programming is generally understood
 * to mean that an application is written directly on the hardware without
 * using an external programming interface, i.e. an operating system.
 *
 * Applications access here directly hardware registers of microcontrollers.
 * Here one helps oneself with approaches such as endless loops, which execute
 * tasks with fixed computing time. This sequential execution is only deviated
 * from when an interrupt event occurs. This bare-metal development approach
 * for embedded systems is therefore also known as super-loop.
 */

/* Event-Triggered Systems (ETS) and Time-Triggered (TTS)
 * (https://ebrary.net/51334/computer_science/time_event_triggered_systems)
 */
/*
 * A trigger is an event that causes the start of some action in the control
 * system. The action may be the execution of a task reading a variable and
 * computing a new value of a correcting variable, or the sending of a message
 * reporting current values of variables like pressure or temperature.
 *
 * In event-triggered control, an action is started only if a significant event
 * occurs. For instance, a sensor would send a message only if the temperature
 * has changed by more than 3°C since the last message was sent.
 *
 * In time-triggered control, all actions are initiated periodically by a
 * real-time clock. The sensor from our example would send a message every
 * clock cycle even if the temperature remains constant.
 */

/* C Programming Language Tutorial (https://www.geeksforgeeks.org/) */
/*
 *  C Basics - C Variables and Constants - C Data Types - C Input/Output
 *  C Operators - C Control Statements Decision-Making - C Functions
 *  C Arrays & Strings - C Pointers - C User-Defined Data Types
 *  C Storage Classes - C Memory Management - C Preprocessor - C File Handling
 *  Miscellaneous
 */

/* Embedded C Coding Standard by Michael Barr
 * www.barrgroup.com/embedded-systems/books/embedded-c-coding-standard */
/*
 *  Introduction - General Rules - Comment Rules - White Space Rules -
 *  Module Rules - Data Type Rules - Procedure Rules - Variable Rules
 *  Statement Rules - Appendices - Bibliography - Index
 */

/* Spaghetti Code (https://www.geeksforgeeks.org/) */
/*
 * Spaghetti Code is nothing but a generalized common-usage term for
 * unstructured and difficult-to-read code.
 *
 * Such a type of code in any large code-base can create problems of its own,
 * if not resolved on time. It can lead to a huge wastage of important
 * resources like time and energy to find bugs and fix them because the code
 * has no structure.
 */

/* Structured Programming Approach with Advantages and Disadvantages
 * (https://www.geeksforgeeks.org/)
 */
/*
 * , as the word suggests, can be defined as a programming approach in which
 * the program is made as a single structure.
 *
 * It means that the code will execute the instruction by instruction one after
 * the other. It doesn’t support the possibility of jumping from one
 * instruction to some other with the help of any statement like GOTO, etc.
 * Therefore, the instructions in this approach will be executed in a serial
 * and structured manner. The languages that support Structured programming
 * approach are:
 *
 *  C
 *  C++
 *  Java
 *  C#
 *  ..etc
 */

/* Introduction of Programming Paradigms
 * (https://www.geeksforgeeks.org/)
 */
/*
 * Paradigm can also be termed as method to solve some problem or do some task.
 * Programming paradigm is an approach to solve problem using some programming
 * language or also we can say it is a method to solve a problem using tools
 * and techniques that are available to us following some approach.
 *
 * There are lots for programming language that are known but all of them need
 * to follow some strategy when they are implemented and this methodology/
 * strategy is paradigms. Apart from varieties of programming language there
 * are lots of paradigms to fulfill each and every demand.
 */

/* Differences between Procedural and Object Oriented Programming
 * (https://www.geeksforgeeks.org/)
 */
/*
 * Procedural Programming can be defined as a programming model which is
 * derived from structured programming, based upon the concept of calling
 * procedure.
 *
 * Procedures, also known as routines, subroutines or functions,
 * simply consist of a series of computational steps to be carried out. During
 * a program’s execution, any given procedure might be called at any point,
 * including by other procedures or itself.
 */

/* Modular Approach in Programming (https://www.geeksforgeeks.org/) */
/*
 * Modular programming is the process of subdividing a computer program into
 * separate sub-programs. A module is a separate software component.
 * It can often be used in a variety of applications and functions with other
 * components of the system.
 */

/* Features of C Programming Language (https://www.geeksforgeeks.org/) */
/*
 * C language is lavishly portable as programs that are written in C language
 * can run and compile on any system with either no or small changes.
 */

/* Static functions in C (https://www.geeksforgeeks.org/) */
/*
 * Unlike global functions in C, access to static functions is restricted to
 * the file where they are declared. Therefore, when we want to restrict
 * access to functions, we make them static. Another reason for making
 * functions static can be the reuse of the same function name in other files.
 */

/* Referencias */
/*
 * SW
 * (https://campusgrado.fi.uba.ar/course/view.php?id=1217&section=10#tabs-tree-start)
 *
 * HW & FW/MW
 * (https://campusgrado.fi.uba.ar/course/view.php?id=1217&section=11#tabs-tree-start)
 *
 * Files & Folders
 * (https://campusgrado.fi.uba.ar/course/view.php?id=1217&section=12#tabs-tree-start)
 */

/********************** inclusions *******************************************/

/* C Preprocessors (https://www.geeksforgeeks.org/) */
/*
 * The #include preprocessor directive is used to include the header files in
 * the C program.
 */
/* Project includes. */
#include "main.h"

/* Demo includes. */
#include "logger.h"
#include "dwt.h"

/* Application & Tasks includes. */
#include "board.h"
#include "task_a.h"
#include "task_b.h"
#include "task_c.h"

/********************** macros and definitions *******************************/

/* #define in C (https://www.geeksforgeeks.org/) */
/* Macros and its types in C (https://www.geeksforgeeks.org/) */
/*
 * In C programming, #define is a preprocessor directive that is used to define
 * macros. The macros are the identifiers defined by #define which are replaced
 * by their value before compilation. We can define constants and functions
 * like macros using #define. The generics in C are also implemented using the
 * #define preprocessor directive along with _Generic.
 *
 * In C, a macro is a piece of code in a program that is replaced by the value
 * of the macro. Macro is defined by #define directive. Whenever a macro name
 * is encountered by the compiler, it replaces the name with the definition of
 * the macro. Macro definitions need not be terminated by a semi-colon(;).
 */
#define G_APP_CNT_INI	0ul
#define TASK_QTY 		3ul

/* C Structures (https://www.geeksforgeeks.org/) */
/*
 * The structure in C is a user-defined data type that can be used to group
 * items of possibly different types into a single type. The struct keyword is
 * used to define the structure in the C programming language. The items in
 * the structure are called its member and they can be of any valid data type.
 */

/* Function Pointer in C - How to declare a pointer to a function?
 * (https://www.geeksforgeeks.org/)
 */
/*
 * In C, like normal data pointers (int *, char *, etc), we can have
 * pointers to functions.
 *
 * While a pointer to a variable or an object is used to access them
 * indirectly, a pointer to a function is used to invoke a function indirectly.
 */
typedef struct {
	void (*p_task_x)(void *);	// Pointer to task
								// (must be a 'void (void *)' function)
	void *parameters;			// Pointer to parameters
} task_x_t;

/********************** internal data declaration ****************************/

/* C Arrays (https://www.geeksforgeeks.org/) */
/*
 * Array in C is one of the most used data structures in C programming. It is a
 * simple and fast way of storing multiple values under a single name.
 */
task_x_t task_x_init_list[TASK_QTY]		= {{task_a_init, NULL},
								  	  	   {task_b_init, NULL},
										   {task_c_init, NULL}};

task_x_t task_x_update_list[TASK_QTY]	= {{task_a_update, NULL},
								  	  	   {task_b_update, NULL},
										   {task_c_update, NULL}};

/********************** internal functions declaration ***********************/

/********************** internal data definition *****************************/

/* Memory Layout of C Programs (https://www.geeksforgeeks.org/) */
/* Storage Classes in C (https://www.geeksforgeeks.org/) */
/* C Variables (https://www.geeksforgeeks.org/) */
/* Constants in C (https://www.geeksforgeeks.org/) */
/* Const Qualifier in C (https://www.geeksforgeeks.org/) */
/*
 * The constants in C are the read-only variables whose values cannot be
 * modified once they are declared in the C program. The type of constant can
 * be an integer constant, a floating pointer constant, a string constant, or
 * a character constant. In C language, the const keyword is used to define the
 * constants.
 *
 * The qualifier const can be applied to the declaration of any variable to
 * specify that its value will not be changed (which depends upon where const
 * variables are stored, we may change the value of the const variable by
 * using a pointer).
 * The result is implementation-defined if an attempt is made to change a
 * const.
 * Using the const qualifier in C is a good practice when we want to ensure
 * that some values should remain constant and should not be accidentally
 * modified.
 */
const char *p_sys	= " Bare Metal - Event-Triggered Systems (ETS)\r\n";
const char *p_app	= " App - retarget_printf_to_Console\r\n";

/********************** external data declaration *****************************/

/* Memory Layout of C Programs (https://www.geeksforgeeks.org/) */
/* Storage Classes in C (https://www.geeksforgeeks.org/) */
/* C Variables (https://www.geeksforgeeks.org/) */
/* Global Variables in C (https://www.geeksforgeeks.org/) */
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
 */
uint32_t g_app_cnt;

/* Understanding “volatile” qualifier in C | Set 1 (Introduction)
 * Understanding “volatile” qualifier in C | Set 2 (Examples)
 * (https://www.geeksforgeeks.org/)
 */
/*
 * The volatile keyword is intended to prevent the compiler from applying any
 * optimizations on objects that can change in ways that cannot be determined
 * by the compiler.
 * Objects declared as volatile are omitted from optimization because their
 * values can be changed by code outside the scope of current code at any time.
 * The system always reads the current value of a volatile object from the
 * memory location rather than keeping its value in a temporary register at the
 * point it is requested, even if a previous instruction asked for the value
 * from the same object.
 */
volatile uint32_t g_tick_cnt;

/********************** external functions definition ************************/

/* Memory Layout of C Programs (https://www.geeksforgeeks.org/) */
/* Storage Classes in C (https://www.geeksforgeeks.org/) */
/* C Functions (https://www.geeksforgeeks.org/) */
/*
 * The function definition consists of actual statements which are executed
 * when the function is called (i.e. when the program control comes to the
 * function).
 */
void app_init(void)
{
	uint32_t index;

	/* Print out: Application Initialized */
	LOGGER_LOG("\r\n");
	LOGGER_LOG("%s is running - Tick [mS] = %d\r\n", GET_NAME(app_init), (int)HAL_GetTick());

	LOGGER_LOG(p_sys);
	LOGGER_LOG(p_app);

	g_app_cnt = G_APP_CNT_INI;

	/* Print out: Application execution counter */
	LOGGER_LOG(" %s = %d\r\n", GET_NAME(g_app_cnt), (int)g_app_cnt);

	for (index = 0; index < (sizeof(task_x_init_list)/sizeof(task_x_t)); index++)
	{
		/* C Functions (https://www.geeksforgeeks.org/) */
		/*
		 * A function call is a statement that instructs the compiler to execute
		 * the function.
		 * We use the function name and parameters in the function call.
		 */
		/* Run task_x_init */
		(*task_x_init_list[index].p_task_x)(task_x_init_list[index].parameters);
	}

	cycle_counter_init();
}

void app_update(void)
{
	uint32_t index;
	uint32_t cycle_counter;
	uint32_t cycle_counter_time_us;

	/* Update App Counter */
	g_app_cnt++;

	/* Print out: Application Update */
	LOGGER_LOG("\r\n");
	LOGGER_LOG("%s is running - Tick [mS] = %d\r\n", GET_NAME(app_update), (int)HAL_GetTick());

	/* Print out: Application execution counter */
	LOGGER_LOG(" %s = %d\r\n", GET_NAME(g_app_cnt), (int)g_app_cnt);

	for (index = 0; index < (sizeof(task_x_update_list)/sizeof(task_x_t)); index++)
	{
		/* Print out: Cycle Counter Reset */
		LOGGER_LOG("\r\n");
		LOGGER_LOG(" %s\r\n", GET_NAME(cycle_counter_reset));

		HAL_GPIO_TogglePin(LED_A_PORT, LED_A_PIN);
		cycle_counter_reset();

		/* C Functions (https://www.geeksforgeeks.org/) */
		/*
		 * A function call is a statement that instructs the compiler to execute
		 * the function.
		 * We use the function name and parameters in the function call.
		 */
		/* Run task_x_update */
		(*task_x_update_list[index].p_task_x)(task_x_update_list[index].parameters);

		cycle_counter = cycle_counter_get();
		cycle_counter_time_us = cycle_counter_time_us();
		HAL_GPIO_TogglePin(LED_A_PORT, LED_A_PIN);

		/* Print out: Cycle Counter */
		LOGGER_LOG(" %s: %lu - %s: %lu uS\r\n", GET_NAME(cycle_counter), cycle_counter, GET_NAME(cycle_counter_time_us), cycle_counter_time_us);
	}
}

/* Callbacks in C (https://www.geeksforgeeks.org/) */
/*
 * A callback is any executable code that is passed as an argument to another
 * code, which is expected to call back (execute) the argument at a given time.
 * In simple language, If a reference of a function is passed to another
 * function as an argument to call it, then it will be called a Callback
 * function.
 */

void HAL_SYSTICK_Callback(void)
{
	g_tick_cnt++;
}

/********************** end of file ******************************************/
