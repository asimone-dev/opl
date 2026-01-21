# Lecture 1

Today is the first day of class. I am expecting to learn and be asked difficult coding related questions. All of the information I do and do not know will hopefully be formated here.

Current Time: 1/20/2026 13:22 PM
Professor Amruth Kumar
CMPS 366 - OPL
Anthony Simone

## Review Syllabus

Theory - Design of programming languages, features of languages, what features make it useful
Practical Aspect - 4 paradigms of languages (C, C++, Java, C# | Same Paradigm)
    - Object Oriented Paradigm (programming): C++
    - Functional Paradigm (programming): Lisp
    - Logic Based (programming): Java/Andriod
    - Event Driven (programming): Prolog

    Note: Each paradigm requires a totally different way of thinking.

Textbook: R.W. Sebesta, Concepts of Programming Languages, 12th edition, Pearson, 2018.

Recommended:
    - P. Graham, ANSI Common Lisp, Prentice Hall, 1996, avialable for free download at http://www.paulgraham.com/onlisp.html
    - H.M. Deitel and P.J. Deitel, Java: How to Program, Early Objects Version, 11th edition, Pearson, 2018.
    - P. Deitel, H. Deitel and A. Wald, Andriod 6 for Programmers: An App-Driven Approach, 3rd edition, Pearson, 2016.
    - W.F. Clocksin and C.S. Mellish, Programming in Prolog, Springer Verlag, 5th Edition, 2003.

Preparing for Exam: 
    - Review and answer practice exam (Kumar will reply with correct or incorrect grading)

Grade:
    - Tests: 60% / 50%
    - Projects: 40% / 50%

### Project 1 - Assigned Today - Deadline Feb 12

7 to 8 Classes
2 Hours per day for the next 3 weeks
Don't leave the program broken
AI is allowed but must be documented prompts and understood
Log must be made (used to capture coding decisions):
    January 20th, Description of what you did + time spent
    Example: I decided to implement offset by 1 for the following reason
    Example: Document the debugging
    Example: A lot of time with no progress (all the things you tried that didn't work) + time spent

Key terms: Polymorphism, 10X phenomina

"If you can do it here, you can do it out there." - Kumar 1/20/2026 14:13 PM

Definition 10x: a great programmer is 10x as effective as a begineer programmer. The only way to become a 10x programmer is you practice.

Definition Ply: a turn or a segment??? RESEARCH THIS!!!
# RESEARCH THIS

## Project Submission

- Fill out rubric and submit it 1 day before the project is due.
- Demo Day (online office) 30-45 minutes
- Submission on Canvas: 
    1. Create folder "Anthony_Simone"
    2. Within this folder you have "src" and "doc"
    3. "doc" has manual and rubric
    4. "src" has all of src code

 (polymorphism)                      (MVC pattern)
      C++             LISP            Java/Andriod         Prolog
|--------------||---------------||--------------------||------------|
  Extend C++ Project to 7 Weeks    Extended Java/Andriod to 7 Weeks
|-------------------------------||----------------------------------|

## Assignments

Employers like to see details are always met
Sticking with it when the going gets tough (persistence)
Doing research on your own (self directed learning)

- Survey #3 (first week of classes)
- Survey #1 (consent form)
- Survey #2 (survey)

- Part 1,2,3 (C++ refreshers)


## Project Description | Longana
Requirements: polymorphism, serialization

Serialization: must read game data from a text file, and resume the game at that state.
        you should be able to save the game and reload it as if nothing ever happened

Double Six Set of dominos.

Insert list here:
|
|
|
---

21 tiles: each player draws 8 tiles each.

First round starts with a verticle 6-6. P1
Next move needs to have at least 1 6. 3-6 P2
Next move plays a 6-5. P1
Next move plays 5-5. P2

If the player has no other dominos that can be placed, they have to pick a tile, if they can play it they must play it, if they cannot play it they must pass.

Game ends: Player plays all of tiles.

Human Player: what do you want to play next, do they have that tile, does that placement count as a legal move?
Computer: must play accordingly, must try to win

Help option: 

The purpose of a class is to be reusable!
Must have classes:

Tile Class -

Boneyard: the 

Board Class --> Layout of the board

## WHAT?
Player Class --> inherit human class and computer class
    - HUMAN CLASS FUNCTIONS: pickTile(), pickSide(), play()

--- 

Note: for the above functions to be polymorphic they will need to be virtual.

Polymorphism
while ( !gameEnded() )
{
    nextPlayer -> pickTile();
    nextPlayer -> pickSide();
    nextPlayer -> play();
}

vs

if ( human )
{
    human.play();
}

else
    computer.play();

---

## HOW LARGE SHOULD THE ARRAY OF PLAYER POINTERS BE?

Use for loop
Array of player *

[ ] -> []Human
[ ] -> []Computer
[ ]
---

Inheritence use Polymorphism

---

Round Class (client for human and computer class)
NOTE: True polymorphism the client doesn't know if it is computer or human but that it is the current player.
    - contains game loop (while game not over) --> {nextPlayer --> play()} polymorphism
        while (game not over) {
            nextPlayer -> play()
        }

Tournament Class
    - Tournament score, creating human and computer classes, decide the engine and send that to round class as a parameter for 6-6, 5-5, 4-4

Game Loop
Concept of Round/Tournament
What players will play


