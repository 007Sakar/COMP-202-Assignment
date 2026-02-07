# Program 1: Balanced Parentheses Checker

## Data Structures Used
- **Stack**: Implemented using an array of characters.
  - `data[MAX]` holds the stack elements.
  - `top` keeps track of the top index of the stack.

## Functions

### `push(Stack *s, char c)`
- Pushes character `c` onto the stack.

### `pop(Stack *s)`
- Pops and returns the top character of the stack.
- Returns `'\0'` if the stack is empty.

### `isMatching(char open, char close)`
- Checks if the opening and closing brackets match.
- Supports `()`, `[]`, `{}`.

### `isBalanced(char *expr)`
- Iterates through the expression:
  - Pushes opening brackets.
  - Pops and checks matching when encountering closing brackets.
- Returns `1` if balanced, `0` otherwise.

## main() Workflow
1. Defines an array of sample expressions.
2. Iterates through each expression.
3. Calls `isBalanced()` and prints whether the expression is balanced.

## Sample Output
