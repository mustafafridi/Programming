# JTMS-14
# a7_p4.py
# Mustafa Owais
# Email: m.owais@jacobs-university.de

def main():
    lis = []
    i = 0
    while i < 7:
        tup = input("Enter tuple values separated by whitespace: ")
        sp = tup.split()
        lis.append(tuple(sp))
        i += 1

    print("Before removing the empty tuples:")
    print(lis)

    # There are two methods to remove empty tuples:
    # Method 1: Using list comprehension
    # lis = [t for t in lis if t] # Creates a list that contains elements t
    # where t is not an empty tuple (i.e., if t != ())

    # Method 2: Create a new list without the empty tuples
    lis2 = []

    for tuples in lis:
        if tuples != ():  
            # Checking if the tuple is not empty
            lis2.append(tuples)

    print("After removing the empty tuples:")
    print(lis2)

main()
