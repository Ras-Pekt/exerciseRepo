void main()
{
	printf ("Howdy, neighbor! This is my first C program.\n");
	return 0;
}

/* The errors returned after running this program include:
   return type of main is int (as opposed to void as the return type)
   implicit declaration of printf (missing header file)

   Thus, to fix the program, a header file should be included and the return type for the main function should be declared appropriately (as int)
*/
