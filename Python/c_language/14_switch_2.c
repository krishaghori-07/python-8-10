/*write a program to do findout whaether the given number is vowel or not.
steps
------------------------------------------------------------------------
1.create variable letter
2.accept one letter fro user into letter
3.check letter is vowel or not.
4.if letter == 'a' then
    it is vowel
5.if letter == 'e' then
   it is vowel
6.if letter == 'i' then
  it is vowel
7.if letter == 'o' then
 it is vowel
8.if letter == 'u' then
  it is vowel
9.otherwise
 it is not vowel
*/
#include<stdio.h>
void main()
{
    char letter;
    printf("enter letter:");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'a':
        case 'A':
        printf("it is vowel");
        break;

        case 'e':
        case 'E':
        printf("it is vowel");
        break;

        case 'i':
        case 'I':
        printf("it is vowel");
        break;

        case 'o':
        case 'O':
        printf("it is vowel");
        break;

        case 'u':
        case 'U':
        printf("it is vowel");
        break;

        default:
        printf("it is not vowel");
    }
}