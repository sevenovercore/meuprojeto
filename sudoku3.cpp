// essa e a base de dados do sudoku
void base(){
	FILE* arquivo;
	arquivo = fopen("sudoku.txt","wt");
		fprintf(arquivo,"sudoku1\n");
		fprintf(arquivo,"6 7 4 5 3 2 1 9 8\n");
		fprintf(arquivo,"5 2 8 1 9 7 3 6 4\n");
		fprintf(arquivo,"3 1 9 8 6 4 2 7 5\n");
		fprintf(arquivo,"1 5 6 7 8 9 4 3 2\n");
		fprintf(arquivo,"4 9 2 3 5 1 6 8 7\n");
		fprintf(arquivo,"8 3 7 4 2 6 5 1 9\n");
		fprintf(arquivo,"7 4 5 9 1 3 8 2 9\n");
		fprintf(arquivo,"2 8 3 6 7 5 9 4 1\n");
		fprintf(arquivo,"9 6 1 2 4 8 7 5 3\n");
		fprintf(arquivo,"sudoku2\n");
		fprintf(arquivo,"2 6 9 5 8 1 4 7 3\n");
		fprintf(arquivo,"4 5 8 9 3 7 6 1 2\n");
		fprintf(arquivo,"7 3 1 6 2 4 9 5 8\n");
		fprintf(arquivo,"6 8 3 4 5 2 7 9 1\n");
		fprintf(arquivo,"9 7 4 8 1 3 2 6 5\n");
		fprintf(arquivo,"5 1 2 7 6 9 3 8 4\n");
		fprintf(arquivo,"8 4 5 2 7 6 1 3 9\n");
		fprintf(arquivo,"3 2 7 1 9 5 8 4 6\n");
		fprintf(arquivo,"1 9 6 3 8 4 5 2 7\n");
	fclose(arquivo);

/*
fprintf(arquivo,"sudoku3\n");

fprintf(arquivo,"sudoku4\n");

fprintf(arquivo,"sudoku5\n");

fprintf(arquivo,"sudoku6\n");

fprintf(arquivo,"sudoku7\n");

fprintf(arquivo,"sudoku8\n");

fprintf(arquivo,"sudoku9\n");

fprintf(arquivo,"sudoku10\n");

fprintf(arquivo,"sudoku11\n");

fprintf(arquivo,"sudoku12\n");

fprintf(arquivo,"sudoku13\n");

fprintf(arquivo,"sudoku14\n");

fprintf(arquivo,"sudoku15\n");

fprintf(arquivo,"sudoku16\n");

fprintf(arquivo,"sudoku17\n");

fprintf(arquivo,"sudoku18\n");

fprintf(arquivo,"sudoku19\n");

fprintf(arquivo,"sudoku20\n");

fprintf(arquivo,"sudoku21\n");

fprintf(arquivo,"sudoku22\n");

fprintf(arquivo,"sudoku23\n");

fprintf(arquivo,"sudoku24\n");

fprintf(arquivo,"sudoku25\n");

fprintf(arquivo,"sudoku26\n");

fprintf(arquivo,"sudoku27\n");

fprintf(arquivo,"sudoku28\n");

fprintf(arquivo,"sudoku29\n");

fprintf(arquivo,"sudoku30\n");

fprintf(arquivo,"sudoku31\n");

fprintf(arquivo,"sudoku32\n");

fprintf(arquivo,"sudoku33\n");

fprintf(arquivo,"sudoku34\n");

fprintf(arquivo,"sudoku35\n");

fprintf(arquivo,"sudoku36\n");

fprintf(arquivo,"sudoku37\n");

fprintf(arquivo,"sudoku38\n");

fprintf(arquivo,"sudoku39\n");

fprintf(arquivo,"sudoku40\n");

fprintf(arquivo,"sudoku41\n");

fprintf(arquivo,"sudoku42\n");

fprintf(arquivo,"sudoku43\n");

fprintf(arquivo,"sudoku44\n");

fprintf(arquivo,"sudoku45\n");

fprintf(arquivo,"sudoku46\n");

fprintf(arquivo,"sudoku47\n");

fprintf(arquivo,"sudoku48\n");

fprintf(arquivo,"sudoku49\n");

fprintf(arquivo,"sudoku50\n");
*/
}