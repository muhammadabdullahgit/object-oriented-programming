# main.py
from Book import Book
from Member import Member
from Library import Library


def main():
    l = Library()  # library object
    # display menu
    print("enter 1 to add book and remove book")
    print("enter 2 to register member and remove member")
    print("enter 3 to generate report")
    x = input("enter option you want to run")
    if x == "1":
        title = input("enter title of book")
        author = input("enter author of book")
        ISBN = input("enter ISBN of book")
        quantity = input("enter quantity of book")
        b = Book(title, author, ISBN, quantity)
        l.add_book(b)
        l.remove_book(ISBN)
    elif x == "2":
        name = input("enter member name")
        id = input("enter member id")
        m = Member(name, id)
        l.register_member(m)
        l.remove_member(id)
    elif x == "3":
        title = input("enter title of book")
        author = input("enter author of book")
        ISBN = input("enter ISBN of book")
        quantity = input("enter quantity of book")
        b = Book(title, author, ISBN, quantity)
        name = input("enter member name")
        id = input("enter member id")
        m = Member(name, id)
        print(l.generate_report(m, b))
    else:
        print("wrong option pressed in menu")


if __name__ == '__main__':
    main()
