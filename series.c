//  0  1  3  7  15  31 . . . . . .  . WAP to generate and print the arithmetic series on users screen , value of n entered by the user.
main()
{
    int term = 0,diff = 1 , i = 1,n;     // 0  1  3  7  15  31 . . . . 
    clrscr();                           // difference  1  2  4  8  16  . . . . 
    printf("Enter the number of termd required:");
    scanf("%d",&n);
    while (i<=n){
        printf("%d",term);
        term = term + diff;
        diff = diff * 2;
        i = i + 1;
    }
    getch();
}
