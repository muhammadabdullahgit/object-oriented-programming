from Staff import Staff


class Doctor(Staff):
    def __init__(self, name, age, specialization):
        Staff.__init__(name, age, "")
        self._specialization = specialization

    def getSpecialization(self):
        return self._specialization

    def displayInfo(self):
        print("name=", self._name)
        print("age=", self._age)
        print("specialization=", self._specialization)
