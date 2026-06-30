from ElectricityMeter import ElectricityMeter


class NonCommercialMeter(ElectricityMeter):
    def __init__(self):
        super().__init__()
        self._units = None

    def calculate_bill(self, units):
        bill = units * 3.0
        return bill

    def additional_function(self):
        print("additional function of non commercial meter")
        return

    def __add__(self, other):
        return self.calculate_bill(100) + other.calculate_bill(100)
