class Member:
    # constructor

    def __init__(self, name, member_id):
        self.__name = name
        self.__member_id = member_id
        self.__books_borrowed = []

    # getters
    def get_name(self):
        return self.__name

    def get_member_id(self):
        return self.__member_id

    def get_books_borrowed(self):
        return self.__books_borrowed

    def borrow_book(self, book):
        self.__books_borrowed += [book]

    def return_book(self, book):
        if book in self.__books_borrowed:
            self.__books_borrowed.remove(book)
