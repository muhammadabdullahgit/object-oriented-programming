from abc import abstractmethod


class ElectricityMeter:
    def __init__(self):
        self._voltage = None

    @abstractmethod
    def calculate_bill(self, units):
        pass

    @abstractmethod
    def additional_function(self):
        pass

    @abstractmethod
    def __add__(self, other):
        pass

    def __mul__(self, multiplier):
        return self.calculate_bill(100) * multiplier.calculate_bill(100)

    def __eq__(self, other):
        return self.calculate_bill(100) == other.calculate_bill(100)

    def get_voltage(self):
        return self._voltage
