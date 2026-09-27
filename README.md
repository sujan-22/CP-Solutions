# Codeforces solutions

202 accepted solutions to [Codeforces](https://codeforces.com) problems, written in C++ and collected in early 2024 while I practised algorithms and data structures.

## Layout

Solutions are grouped by the compiler they were submitted with, then by problem:

```
CodeForces/
  C++17 (GCC 7-32)/      33 solutions
  C++20 (GCC 11-64)/    169 solutions
    1490A | Dense Array/
      250874220.cpp      the accepted submission (named by submission id)
      __info.txt         problem name and a link to the statement
```

The folder name starts with the contest number and problem letter, so `1490A` is [problem A of contest 1490](https://codeforces.com/contest/1490/problem/A).

## Running a solution

Each file is a complete program that reads from standard input:

```bash
g++ -std=c++20 -O2 "CodeForces/C++20 (GCC 11-64)/<problem>/<submission>.cpp" -o solution
./solution < input.txt
```

Use `-std=c++17` for the files in the C++17 folder.

Built by [Sujan Rokad](https://sujanrokad.com).
