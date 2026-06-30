class Library:
    def __init__(self):
        self.__books_available = {}
        self.__members = []

    def add_book(self, book):
        self.__books_available[book.get_ISBN()] = book
        print("book is added")

    def remove_book(self, ISBN):
        if ISBN in self.__books_available:
            del self.__books_available[ISBN]
            print("book is removed")

    def register_member(self, member):
        self.__members.append(member)  # adding members in  array
        print("member is added")

    def remove_member(self, member_id):
        for i in self.__members:  # for loop
            if i.get_member_id() == member_id:
                self.__members.remove(i)
                print("member is removed")
            else:
                print("member is  not present")

    def generate_report(self, member, book):
        a = ""
        a += f"member name={member.get_name()},\n"
        a += f" member id={member.get_member_id()},\n"
        a += f"book title ={book.get_title()},\n"
        a += f"book author ={book.get_author()},\n"
        a += f"book ISBN ={book.get_ISBN()},\n"
        a += f"book quantity ={book.get_quantity()},\n"
        return a
