# JTMS-14
# a7_p7.py
# Mustafa Owais
# Email: m.owais@jacobs-university.de

def main():
    sampleDict = {'Physics': 82, 'Math': 85, 'History': 75, 'Management': 70, 'Chemistry': 72}

    key = input("Enter the key value: ")

    value = sampleDict.get(key, None)

    if value is None:
        print("The key does not exist!")
    else:
        print(f"The key '{key}' has the following value: {value}")

    # Print all the string keys and their corresponding values
    print("All keys and their values in the dictionary:")
    for k, v in sampleDict.items():
        print(f"{k}: {v}")

main()
