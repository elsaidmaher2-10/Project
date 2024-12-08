Quiz Game - README
Overview
This project is a Quiz Game implemented in C++. The game allows users to answer randomly generated arithmetic questions. The user competes against a computer to achieve a higher score based on correct answers. The difficulty levels and operations are customizable, making the game both engaging and educational.

Features
Random Question Generation:

Numbers are generated based on selected difficulty levels.
Supported difficulty levels:
Easy: Numbers between 1 and 10.
Medium: Numbers between 10 and 20.
Hard: Numbers between 30 and 80.
Mixed: Numbers between 1 and 100.
Arithmetic Operations:

Addition (+)
Subtraction (-)
Multiplication (*)
Division (/)
Mixed: A random operation is chosen automatically.
Game Mechanics:

User specifies the number of rounds.
In each round:
Two numbers are generated based on the selected difficulty.
The user solves an arithmetic problem, and their answer is compared to the computer's calculated result.
The scores are displayed at the end of the game.
Dynamic Visual Feedback:

Correct answers change the console color to green.
Incorrect answers change the console color to red.
How to Play
Start the Game:

The program begins by greeting the user.
Enter the Number of Rounds:

Input how many questions you want to answer (1 to 100).
Choose Difficulty Levels:

Select the difficulty level for the first and second numbers:
[1] Easy
[2] Medium
[3] Hard
[4] Mixed
Select an Operation:

Choose the arithmetic operation:
[1] Addition
[2] Subtraction
[3] Multiplication
[4] Division
[5] Mixed (random operation)
Answer the Question:

Solve the problem presented and input your answer.
Review the Scores:

At the end of the game, the total user and computer scores are displayed.
Code Structure
Enums
Qlevel: Represents the difficulty levels (easy, med, hard, mix).
Top: Represents the operations (ADD, SUB, MUL, DIV, MIX).
Functions
number():

Ensures valid input between a specified range.
randomnumber():

Generates random integers within a given range.
User_ch():

Generates random numbers based on the selected difficulty level.
choice():

Handles user input for operations and calculates results for each question.
stratgame():

Manages multiple rounds of the quiz.
Main Function
Initializes variables and starts the game by calling stratgame().
