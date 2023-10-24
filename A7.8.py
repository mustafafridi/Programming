# JTMS-14
# a7_p8.py
# Mustafa Owais
# Email: m.owais@jacobs-university.de

# Define the main function for stack operations.
def main():
    # Initialize an empty stack.
    stack = []

    # Enter an infinite loop for user interaction.
    while True:
        # Prompt the user for an operation ('s', 'p', 'e', 'q').
        ch = input()

        # If 's' is entered, push a value onto the stack.
        if ch == 's':
            n = int(input())
            push(stack, n)

        # If 'p' is entered, pop an element from the stack.
        elif ch == 'p':
            pop(stack)

        # If 'e' is entered, empty the stack.
        elif ch == 'e':
            empty(stack)

        # If 'q' is entered, exit the loop.
        elif ch == 'q':
            break

        # If an invalid value is entered, display an error message.
        else:
            print("Invalid value entered! Input again")

    # Display a farewell message when the program exits.
    print("Good Bye!")

# Check if the stack is empty.
def isEmpty(stack):
    if len(stack) == 0:
        return True
    else:
        return False

# Push a value onto the stack.
def push(stack, val):
    print("Pushing", val)
    stack.append(val)

# Pop an element from the stack.
def pop(stack):
    if isEmpty(stack):
        print("Stack underflow")
        return
    else:
        print("Popping element", stack.pop())
        return

# Empty the stack by popping all elements.
def empty(stack):
    print("Emptying stack")
    while not isEmpty(stack):
        pop(stack)
    return

# Call the main function to start the program.
main()
