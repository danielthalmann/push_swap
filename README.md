# PUSH SWAP

## Install

```bash
git clone repo
cd repo
make
```

## Usage

```bash
./build/ps 2 8 4 3
```
## algo

direction : -> \
test : first > second \
A: [1] [5] [3] [8] [2] \
B:

direction : -> \
test : first > second \
A: [5] [3] [8] [2] [1] \
B:

direction : -> \
A: [3] [8] [2] [1] \
B: [5]

direction : -> \
test : first A > first B \
A: [8] [2] [1] [3] \
B: [5]

direction : <- \
A: [5] [8] [2] [1] [3] \
B:

direction : <- \
test : first < last  \
A: [5] [8] [2] [1] [3] \
B:

direction : <- \
test : first < last  \
A: [3] [5] [8] [2] [1] \
B:

direction : <- \
test : first < last  \
A: [1] [3] [5] [8] [2] \
B:

direction : <- \
A: [3] [5] [8] [2] \
B: [1]

direction : <- \
test : first A > first B \
A: [2] [3] [5] [8] \
B: [1]

direction : -> \
A: [1] [2] [3] [5] [8] \
B:
