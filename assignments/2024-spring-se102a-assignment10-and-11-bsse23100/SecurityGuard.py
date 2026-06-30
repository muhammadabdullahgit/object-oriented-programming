from Staff import Staff


class SecurityGuard(Staff):
    def __init__(self, name, age, clearanceLevel):
        Staff.__init__(name, age, "")
        self._clearanceLevel = clearanceLevel

    def getClearanceLevel(self):
        return self._clearanceLevel

    def displayInfo(self):
        print("name=", self._name)
        print("age=", self._age)
        print("specialization=", self._clearanceLevel)
