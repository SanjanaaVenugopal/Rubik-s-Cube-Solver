# Rubik-s-Cube-Solver

The Rubik’s Cube is a fascinating, timeless puzzle with quintillions of possible states. Solving a Rubik’s Cube is a real world problem. As a cube geek, I found myself trying to figure out how to solve this programmatically. Like everyone, my first intuition for this problem was brute force. I have tried and implemented the brute force algorithm in this code.

The idea behind brute force is to divide the cube into six individual sides, each of these sides further divided into 2 rows, and each of these divided into left and right cells. In other words, each cube has six sides: up, down, left, right, front, back; each side has two rows: upper and lower rows; and each of these rows have a left and a right cell. We can further note that every side is capable of three types of twists: clockwise, anticlockwise and one-eighty degree twists. As we have sides, this turns out to be eighteen different possible twists for every move.

In this method, you can find me define three classes:
- Row.h : to define the left and the right cells along with the function to flip the left and the right sides of a row when going between the non corresponding halves and correct the alignment. 
- Side.h : to define the upper and lower rows along with the functions to define the configuration of the sides when subjected to clockwise or anticlockwise twists.
- Cube.h : to define the six different sides along with the functions to define the configuration of the entire cube when subjected to any of the eighteen twists.

Finally, the solver.cpp has the main program which takes an input configuration of the cube and solves it layer by layer by looking for the correct orientation of the individual cubies (A cubie is defined as one of the 8 mini cubes). The program calculates the solution in 3 main steps: solving the first layer, orienting the last layer, and solving the last layer. In the first step, I chose to solve the white face on the upper face first. The "middle layer" has to be aligned in this order (going left to right): red, blue, orange, green. Again I chose to make the front face red, which means that the rest of the sides will be solved according to this pattern. I have chosen to keep the cube and the colors constant. So the algorithms here are the ones I typically use that can be applied to many permutations while solving the first layer. The second step consists of determining which of the 7 possible states the cube is in and using the corresponding algorithm to solve the yellow face(down face)  (these states and algorithms can be found here: http://www.cubewhiz.com/ortegaoll.php). Similarly, the third step involves determining which of the states the cube is in and using the corresponding algorithm to solve the middle layers, effectively solving the entire cube (states and algorithms available here: http://www.cubewhiz.com/ortegapbl.php).

MATHEMATICS:
Since we have 8 corner cubies, they have 8! Permutations possible.
Each of the cubies have three possible orientations: actual, clockwise rotated, anticlockwise rotated (any of the three faces can face up). But the orientations of seven of the cubies dictate the orientation of the eighth, by the laws of the cube. Therefore, there are 37ways that a corner can be oriented.
Since I am keeping my cube stationary, there are 6 possible ways to select the ‘Up’ face and 4 possible ways to select the ‘Front’ face, reducing the number of permutations by a factor of 24.

Therefore, the total number of possible permutations of a 2x2 cube is:
8! * 37/ 24 = 36,74,160 permutations.


NOTATION:

The notation used is as follows: F corresponds to the front side, B to the back side, L to the left side, R to the right side, U to the up side, and D to the down side, with regards to how the user is holding the cube. Turns are assumed to be clockwise by default (F is a clockwise turn of the front side/face), but a counter-clockwise turn is denoted by a ' (prime). Likewise, a double-turn is denoted by a 2 (it does not matter which direction the user turns in). For example, a clockwise turn of the front face followed by a counter-clockwise turn of the front face followed by two turns of the front face would be written as F F' F2. It's important to keep in mind which direction is clockwise -- R corresponds to a downward turn on the right side as viewed from the front face, but L corresponds to an upward turn on the left side as viewed from the front face. Since these mistakes are easy to make, the program displays the current state the cube should be in along the way, so that the user can compare their cube to prevent any mistakes.
Color notation:  	
  0: white
	1: red
	2: blue
	3: orange
	4: green
	5: yellow


ACCURACY:

This Rubik’s cube solver is capable of solving a given cube in 10 - 40 moves. The solutions generated aren't even close to the fastest solutions possible (any 2x2 cube can actually be solved in only 11 or fewer turns), but the program reliably solves the cube every time, and makes the steps distinct and reasonably easy to follow. However, it still computes solutions in around 70 milliseconds on average, which is fast enough to not be noticeable by the user.

FUTURE SCOPE:

In the future, I plan to implement the cube with the help of the following algorithms:
- IDDFS (Iterative Deepening Depth First Search).
- A* algorithm.
- Korf’s algorithm.
