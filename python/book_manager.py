# SUPER SIMPLE BOOK SYSTEM

# List to store our books
books = []

def add_book():
    """Add a new book"""
    title = input("Enter book title: ")
    author = input("Enter author name: ")
    books.append({"title": title, "author": author})
    print(f"Added '{title}' to the library!")

def delete_book():
    """Remove a book"""
    if not books:
        print("No books to delete!")
        return
    
    print("\nCurrent books:")
    for i, book in enumerate(books, 1):
        print(f"{i}. {book['title']} by {book['author']}")
    
    try:
        num = int(input("Enter book number to delete: ")) - 1
        if 0 <= num < len(books):
            removed = books.pop(num)
            print(f"Removed '{removed['title']}'")
        else:
            print("Invalid number!")
    except:
        print("Please enter a number")

def show_books():
    """Display all books"""
    if not books:
        print("No books in the library yet!")
        return
    
    print("\nLIBRARY BOOKS:")
    for book in books:
        print(f"- {book['title']} by {book['author']}")

# Main menu
while True:
    print("\nBOOK MANAGEMENT")
    print("1. Add book")
    print("2. Delete book")
    print("3. View books")
    print("4. Exit")
    
    choice = input("Choose (1-4): ")
    
    if choice == "1":
        add_book()
    elif choice == "2":
        delete_book()
    elif choice == "3":
        show_books()
    elif choice == "4":
        print("Goodbye!")
        break
    else:
        print("Please choose 1-4")