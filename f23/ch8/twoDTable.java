package twoDTables;

public class Main {

	static void printRow(int row, int columns) {
	    // the +1 to the rows (starting the counter at 0)
	    int currCol = 0;
	    // Use while loops to establish  and also the columns.
	    while (currCol < columns) {
	    	System.out.print((row + currCol) + "\t");       
	        currCol = currCol + 1;
	    }
	}

	static void printAdditionTable (int rows, int columns) {
	    int currRow = 0;
	    while (currRow < rows) {
	        printRow(currRow, columns);
	        System.out.println();
	        currRow++;
	    }

	}
	
	public static void main(String[] args) {
	    printAdditionTable(5,6);
	}
}
