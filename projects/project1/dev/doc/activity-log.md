# Activity Log

## Week 1

### January 20, 2026
**Work completed:**
- Reviewed course syllabus and project requirements
- Set up GitHub repository structure for OPL projects
- Created directories for projects, templates, and notes
- Began outlining project documentation templates

**Issues / blockers:**
- Clarifying exact project submission requirements
- Determining how to organize logs and documentation effectively

**Next steps:**
- Finalize documentation templates
- Begin reviewing Project 1 specification in detail

**Time spent:** ~2.0 hours

---

### January 21, 2026
**Work completed:**
- Cleaned up and organized Lecture 1 notes
- Created and refined activity log, rubric checklist, and technical manual templates
- Set up SSH authentication and synchronized repository across devices
- Verified Git workflow (clone, commit, push, pull)

**Issues / blockers:**
- Initial SSH authentication issues between laptop and desktop
- Resolving Git identity differences across machines

**Next steps:**
- Begin designing class structure for Project 1
- Start implementing initial C++ project scaffolding
- Add first technical design notes to documentation

**Time spent:** ~2.5 hours

---

### January 22, 2026
**Work completed:**
- Organized and nearly finalized file structure
- Compiled all header files and cpp files in order to get a running executable longana file (./longana)
- Consulted ChatGPT in order to discuss where I believe the best place to begin is
    - Conclusion: Begin with constructing the tiles.
        ChatGPT - "We started with Tile because it is the smallest, most stable, and most depended upon concept in the entire project."

- Started work on the ***main.cpp,*** ***tile.h*** and ***tile.cpp*** files

***#pragma once Vs. #ifndef #define #endif ***
- both are methods of prevention for including a header file multiple times by mistake on compile time
- both are acceptable please note they may be interchanged throughout development

**Classes Created**
class Tile {
public:

***Public Functions Implemented*** 
- toString()
- flipped()
- isDouble()
- pipSum()
- left()
- right()

***Private Functions Implemented*** 
- a_left()
- a_right()

**Issues / blockers:**
- Understanding where to begin for each class is proving to be rather difficult
- Pushing and pulling from github repository from multiple devices is proving to be rather difficult

**Next steps:**
- Consider if tiles should be enums?
- 

**How to Run!**
- wsl -> g++ -std=c++17 -I headerFiles sourceFiles/*.cpp -o longana

**Time spent:** ~6.5 hours

