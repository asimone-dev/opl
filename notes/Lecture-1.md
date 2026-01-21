# Lecture 1 - Introduction to OPL

**Course:** CMPS 366 - Organization of Programming Lnaguages
**Professor:** Amruth Kumar
**Date:** January 20, 2026
**Author:** Anthony Simone

---

## Course Overview

### Theory
- Design of programming languages
- Features of languages
- Evaluating what makes a language useful or appropriate

### Practical Aspect 
Study of ***four programming paradigms***, each requiring a different way of thinking
    - ***Object-Oriented*** Paradigm (programming): C++
    - ***Functional Paradigm*** (programming): Lisp
    - ***Event-Driven*** (programming): Java/Andriod
    - ***Logic-Based*** (programming): Prolog

> **Note:** Each paradigm requires a fundamentally different mental model.

---

## Textbooks and References

### Required
- R.W. Sebesta, Concepts of Programming Languages, 12th edition, Pearson, 2018.

### Recommended
- P. Graham, ANSI Common Lisp, Prentice Hall, 1996, avialable for free download at http://www.paulgraham.com/onlisp.html
- H.M. Deitel and P.J. Deitel, Java: How to Program, Early Objects Version, 11th edition, Pearson, 2018.
- P. Deitel, H. Deitel and A. Wald, Andriod 6 for Programmers: An App-Driven Approach, 3rd edition, Pearson, 2016.
- W.F. Clocksin and C.S. Mellish, Programming in Prolog, Springer Verlag, 5th Edition, 2003.

---

## Grading Breakdown

- **Exams:** 60-50%
- **Projects:** 40-50%

> Exams are open-book and open-notes; emphasis on **comprehension and evaluation**, not memorizations.

---

## Preparing for Exams

- Review and complete practice exams
- Professor Kumar will respond to practice exam submissions with correct / incorrect grading feedback

### Project 1
- **Assigned:** January 20
- **Due:** February 12
- Estimated effort:
    - ~2 hours/day for 3 weeks

### Project Rules
- Do not leave the program broken
- AI is allowed *only if**:
    - Prompts are documented
    - You understand all aspects of the generated code

--- 

## Project Logs (Required)

A development log must be maintained, including:
- Date
- Description of work done
- Time spent
- Debugging attempts (even failed ones)

**Example entries:**
- Implemented offset by 1 (reason explained)
- Debugged serialization issue
- Spent time exploring approaches that did not work

---

## Key Concepts Introduced

### Polymorphism
> Writing code that works through a common interface, regardless of underlying object type.

### "10x Programmer"
> A great programmer is roughly **10x more effective** than a beginner.
> The only way to become one is **practice**.

> "If you can do it here, you can do it out there." - Kumar

---

## Open Questions / TODO

- **Definition of "Ply"** - research required
- Clarify use of the MVC pattern across paradigms

---

## Project Submission Requirements

### Canvas Submission

1. Create folder: `Anthony_Simone/`
2. Inside:
   - 'src/' – all source files (no executables)
   - 'doc/' – rubric + manual

### Final Submission
- Rubric emailed **one day before due date**
- Live demo (30–45 minutes)
- Reflection exercise required

--- 

## Project 1 – Game Description (Dominoes)

### Requirements
- Polymorphism
- Serialization (save/load game state)

**Serialization:**  
Game state must be saved to a file and reloaded as if uninterrupted.

---

## Game Rules (Double-Six Dominoes)

- 21 total tiles
- Each player draws 8 tiles
- First move: vertical 6–6

### Sample Play
- P1: 6–6
- P2: 3–6
- P1: 6–5
- P2: 5–5

If a player cannot play:
- Draw a tile
- If playable → must play
- Otherwise → pass

Game ends when a player runs out of tiles.

---

## Player Types

### Human Player
- Selects tile
- Chooses placement
- Validates legality of move

### Computer Player
- Plays according to rules
- Attempts to win

---

## Class Design (Polymorphism Focus)

### Required Classes
- `Tile`
- `Boneyard`
- `Board`
- `Player` (base class)
  - `HumanPlayer`
  - `ComputerPlayer`

### Virtual Functions
```cpp
virtual void pickTile();
virtual void pickSide();
virtual void play();
