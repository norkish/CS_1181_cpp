def print_row(row, columns):
    # the +1 to the rows (starting the counter at 0)
    curr_col = 0
    # Use while loops to establish  and also the columns.
    while curr_col < columns:
        print(row + curr_col, end="\t")
        curr_col = curr_col + 1


def print_addition_table(rows, columns):
    curr_row = 0
    while curr_row < rows:
        print_row(curr_row, columns)
        print() # prints a new line
        curr_row += 1


def main():
    print_addition_table(5, 6)


if __name__ == "__main__":
    main()
