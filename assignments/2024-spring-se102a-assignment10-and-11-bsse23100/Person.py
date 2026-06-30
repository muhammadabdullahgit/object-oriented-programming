class Person:
    def __init__(self, name, age):
        self._name = name
        self._age = age

    def getName(self):
        return self._name

    def getAge(self):
        return self._age

    def displayInfo(self):
        print("name=", self._name)
        print("age=", self._age)
