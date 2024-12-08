# Quiz Game - README

## Overview
This project is a **Quiz Game** implemented in C++. The game allows users to answer randomly generated arithmetic questions. The user competes against a computer to achieve a higher score based on correct answers. The difficulty levels and operations are customizable, making the game both engaging and educational.

---

## Features
1. **Random Question Generation**:
   - Numbers are generated based on selected difficulty levels.
   - Supported difficulty levels:
     - Easy: Numbers between 1 and 10.
     - Medium: Numbers between 10 and 20.
     - Hard: Numbers between 30 and 80.
     - Mixed: Numbers between 1 and 100.

2. **Arithmetic Operations**:
   - Addition (`+`)
   - Subtraction (`-`)
   - Multiplication (`*`)
   - Division (`/`)
   - Mixed: A random operation is chosen automatically.

3. **Game Mechanics**:
   - User specifies the number of rounds.
   - In each round:
     - Two numbers are generated based on the selected difficulty.
     - The user solves an arithmetic problem, and their answer is compared to the computer's calculated result.
   - The scores are displayed at the end of the game.

4. **Dynamic Visual Feedback**:
   - Correct answers change the console color to **green**.
   - Incorrect answers change the console color to **red**.

---

## How to Play
1. **Start the Game**:
   - The program begins by greeting the user.

2. **Enter the Number of Rounds**:
   - Input how many questions you want to answer (1 to 100).

3. **Choose Difficulty Levels**:
   - Select the difficulty level for the first and second numbers:
     - `[1] Easy`
     - `[2] Medium`
     - `[3] Hard`
     - `[4] Mixed`

4. **Select an Operation**:
   - Choose the arithmetic operation:
     - `[1] Addition`
     - `[2] Subtraction`
     - `[3] Multiplication`
     - `[4] Division`
     - `[5] Mixed (random operation)`

5. **Answer the Question**:
   - Solve the problem presented and input your answer.

6. **Review the Scores**:
   - At the end of the game, the total user and computer scores are displayed.

---

## Code Structure
### Enums
- `Qlevel`: Represents the difficulty levels (`easy`, `med`, `hard`, `mix`).
- `Top`: Represents the operations (`ADD`, `SUB`, `MUL`, `DIV`, `MIX`).

### Functions
1. **`number()`**:
   - Ensures valid input between a specified range.

2. **`randomnumber()`**:
   - Generates random integers within a given range.

3. **`User_ch()`**:
   - Generates random numbers based on the selected difficulty level.

4. **`choice()`**:
   - Handles user input for operations and calculates results for each question.

5. **`stratgame()`**:
   - Manages multiple rounds of the quiz.

### Main Function
- Initializes variables and starts the game by calling `stratgame()`.

---

## Requirements
- **Compiler**: A C++ compiler that supports modern C++ standards (e.g., GCC, Clang, or MSVC).
- **Operating System**: Any OS capable of running the C++ executable. (Windows recommended for color effects.)

---

## Compilation and Execution
### Compilation
Use the following command to compile the program:
```bash
g++ quiz_game.cpp -o quiz_game
```

### Execution
Run the compiled executable:
```bash
./quiz_game
```

---

## Example Gameplay
### Input:
```
Hello! Welcome to the Quiz Game!
Enter number of Rounds: 3
Question [1 - 3]:
Enter Question level for first number [1]easy  [2]med   [3]hard   [4]mix: 2
Enter Question level for second number [1]easy  [2]med   [3]hard   [4]mix: 3
Enter operation level [1] Add  [2] Sub   [3] mul   [4] div [5] mix: 1
```

### Output:
```
15 + 50 = ?
Your Answer: 65
Correct!
```

---

## Notes
1. **Division Edge Case**:
   - If division results in a fraction, the program performs integer division.
   - If the divisor is `0`, a warning is displayed, and the question is skipped.

2. **Scoring**:
   - Correct answers increment the user’s score.
   - Incorrect answers increment the computer’s score.

3. **Visual Feedback**:
   - Correct: Console color changes to **green**.
   - Incorrect: Console color changes to **red**.

---

## Future Improvements
- Add support for fractional answers in division.
- Implement a GUI version for better usability.
- Track user performance over multiple sessions.

Enjoy the game! 🎮
