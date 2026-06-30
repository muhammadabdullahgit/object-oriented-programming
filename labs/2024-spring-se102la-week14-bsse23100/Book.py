class Book:
    # constructor
    def __init__(self, title, author, ISBN, quantity):
        self.__title = title
        self.__author = author
        self.__ISBN = ISBN
        self.__quantity = quantity
        # getters

    def get_title(self):
        return self.__title

    def get_author(self):
        return self.__author

    def get_ISBN(self):
        return self.__ISBN

    def get_quantity(self):
        return self.__quantity
        # methods

    def update_quantity(self, new_quantity):
        self.__quantity = new_quantity
