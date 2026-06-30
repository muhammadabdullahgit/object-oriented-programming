from Staff import Staff


class Receptionist(Staff):
    def __init__(self, name, age, deskNumber):
        Staff.__init__(name, age, "")
        self._deskNumber = deskNumber

    def getDeskNumber(self):
        return self._deskNumber

    def displayInfo(self):
        print("name=", self._name)
        print("age=", self._age)
        print("specialization=", self._deskNumber)
