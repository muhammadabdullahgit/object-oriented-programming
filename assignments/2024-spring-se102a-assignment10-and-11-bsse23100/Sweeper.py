from Staff import Staff


class Sweeper(Staff):
    def __init__(self, name, age, duty):
        Staff.__init__(name, age, "")
        self._duty = duty

    def getDuty(self):
        return self._duty

    def displayInfo(self):
        print("name=", self._name)
        print("age=", self._age)
        print("specialization=", self._duty)
