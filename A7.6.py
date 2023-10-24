# JTMS-14
# a7_p6.py
# Mustafa Owais
# Email: m.owais@jacobs-university.de

def main():
    sampleDict = {
                  'Physics': 82, 
                  'Math': 85,
                  'History': 75, 
                  'Management': 70, 
                  'Chemistry': 72
                  }



    sampleDict2 = {
                  'Econ': 82, 
                  'Psych': 85,
                  'History': 75, 
                  'Calc': 70, 
                  'Chemistry': 72
                  }


    print("Min value key =", min_value_key(sampleDict))
    print("Min value key(in Dict2) =", min_value_key(sampleDict2))


def min_value_key(theDictionary):
    theMinimum = min(theDictionary.values())
    for key in theDictionary:
        if theDictionary[key] == theMinimum:
            return key


main()
