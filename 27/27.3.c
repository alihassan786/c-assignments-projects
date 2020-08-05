#include<stdio.h>
#include<string.h>
int main(){
    int numbers,vowels,consonants,space,other_characters;
    vowels=numbers=consonants=space=other_characters=0;
char string[100];
printf("Enter a string:");
gets(string);
puts(string);
for(int i=0;string[i]!='\0';i++){
 if(string[i]=='a'|| string[i]=='e'|| string[i]=='i'|| string[i]=='o'|| string[i]=='u'
    || string[i]=='A'|| string[i]=='E'|| string[i]=='I'|| string[i]=='O'|| string[i]=='U')
    {
        vowels++;
    }
    else if((string[i]>='a'&& string[i]<='z')  || (string[i]>='A'&& string[i]<='Z'))
    {
    consonants++;
    }
    else if(string[i]>='0' && string[i]<='9'){
        numbers++;
    }
    else if(string[i]==' '){
        space++;
    }
    else{
        other_characters++;
    }



}
printf("Vowels:%d\n",vowels);
printf("Consonants :%d\n",consonants);
printf("Numbers:%d\n",numbers);
printf("Space :%d\n",space);
printf("Special characters :%d\n",other_characters);
}
