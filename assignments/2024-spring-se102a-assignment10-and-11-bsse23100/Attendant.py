from Patient import Patient


class Attendant(Patient):
    def __init__(self, name, age, relationToPatient):
        Patient.__init__(name, age, "")
        self._relationToPatient = relationToPatient

    def getCondition(self):
        return self._relationToPatient

    def displayInfo(self):
        print("name=", self._name)
        print("age=", self._age)
        print("relation=", self._relationToPatient)
