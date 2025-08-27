/*

#include <stdio.h>

int main()
{
    int *p, i, size;

    printf("Enter Array Size: ");
    scanf("%d", &size);

    p = (int*) malloc(size * sizeof(int));

    for( i = 0; i <= size+2; i++ )
    {
        scanf("%d", p+i);
    }

    for( i = 0; i <= size+2; i++ )
    {
        printf("%d", *(p+i));
    }

    return 0;
}
*/






/*


#include <stdio.h>
#include <math.h>

int digit(int n);

int main()
{
    int test_case;

    scanf("%d", &test_case);

    while( test_case != 0 )
    {
        int num, sum, size, count = 0, array[1000], i = 0;

        scanf("%d", &num);

        while( num != 0 )
        {
            sum = digit(num);
            num = num - sum;
            array[i] = sum;
            i++;
        }

        printf("%d\n", i);

        for( int j = 0; j < i; j++ )
        {
            printf("%d ", array[j]);
        }

        printf("\n");

        test_case--;
    }

    return 0;
}

int digit(int n)
{
    int size, round, count;

    size = log10(n)+1;

    switch(size)
    {
    case 1:
        round = n;
        break;
    case 2:
        count = n / 10;
        round = count * 10;
        break;
    case 3:
        count = n / 100;
        round = count * 100;
        break;
    case 4:
        count = n / 1000;
        round = count * 1000;
        break;
    case 5:
        count = n / 10000;
        round = count * 10000;
        break;
    }

    return round;
}




*/




















/*


#include <stdio.h>


int main()
{
    char string[1000];

    int i, j, k;

    scanf("%s", string);

    char str_copy[1000];

    for( i = 0; string[i] != '\0'; i++ )
    {
        if( string[i] == 'i' )
        {
            for( j = i - 1, k = 0; j >= 0; j--, k++ )
            {
                str_copy[k] = string[j];
            }
        }
        else
        {
            str_copy[i] = string[i];
        }
    }

    for( i = 0; str_copy[i] != '\0'; i++ )
    {
        if( str_copy[i] != 'i' )
        {
            printf("%c", str_copy[i]);
        }

    }


    return 0;
}

*/



/*


#include <stdio.h>

int main()
{
    long long int num;

    scanf("%lld", &num);

    if( num % 2 != 0 )
    {
        printf("-%d\n", ( num + 1 ) / 2);
    }
    else if( num % 2 == 0 )
    {
        printf("%lld\n", num / 2);
    }

    return 0;
}

*/


/*
6

-1+2-3+4-5+6

9 12 = 3

5

9 6 = -3

11

-1+2-3+4-5+6-7+8-9+10-11+12

36 42 -6
*/




/*


#include <stdio.h>

int main()
{
    char string[1000];

    int count = -1, i;

    fgets(string, 1000, stdin);

    printf("%s", string);

    for( i = 0; string[i] != '\0'; i++ )
    {
        count++;
    }

    printf("%d", count);

    return 0;
}
*/





















/*



#include <stdio.h>

int main()
{
    int x 5, sum, i, count = 0;

    scanf("%d", &x);

    for( i = 1; ; i++ )
    {
        sum = i;

        while( true )
        {
            sum = sum * 2;
            count++;

            if( (sum * 2 == x) || (sum * 2 > x ) )
                break;
        }

        int ans;

        ans = x - sum + i;
    }

    return 0;
}


*/




/*


#include <stdio.h>
#include <string.h>


int main()
{
    int size;

    printf("Enter Length Of String: ");
    scanf("%d", &size);

    getchar();

    char string[size];

    printf("Input: ");

    fgets(string, sizeof(string), stdin);

    printf("Enter A Letter To Find It's Frequency: ");

    char target;

    scanf("%c", &target);

    int count = 0;

    for( int i = 0; string[i] != '\0'; i++ )
    {
        if( string[i] == target )
            count++;
    }

    printf("Result: %d", count);

    return 0;
}


*/





/*
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
*/




/*

#include <stdio.h>

int v_c_check(char ch);

int main()
{
    int length;

    printf("Enter Length Of String: ");
    scanf("%d", &length);

    char box[length];

    getchar();

    printf("Input: ");
    fgets(box, sizeof(box), stdin);

    int c_vowel = 0, c_consonant = 0, c_digit = 0, c_space = 0;

    for( int i = 0; box[i] != '\0'; i++ )
    {
        if( (box[i] >= 65 && box[i] <= 90) || (box[i] >= 97 && box[i] <= 122) )
        {
            if( v_c_check(box[i]) == 1 )
                c_vowel++;

            else if( v_c_check(box[i]) == 0 )
                c_consonant++;
        }

        else if( box[i] >= 48 && box[i] <= 57 )
            c_digit++;

        else if( box[i] == 32 )
            c_space++;
    }

    printf("\nVowels: %d", c_vowel);
    printf("\nConsonants: %d", c_consonant);
    printf("\nDigits: %d", c_digit);
    printf("\nSpaces: %d", c_space);

    getchar();
}

int v_c_check(char ch)
{
    switch(ch)
    {
    case 'a':
        return 1;
        break;
    case 'A':
        return 1;
        break;
    case 'e':
        return 1;
        break;
    case 'E':
        return 1;
        break;
    case 'i':
        return 1;
        break;
    case 'I':
        return 1;
        break;
    case 'o':
        return 1;
        break;
    case 'O':
        return 1;
        break;
    case 'u':
        return 1;
        break;
    case 'U':
        return 1;
        break;
    }

    return 0;
}


*/











/*


#include <stdio.h>

int main()
{
    int capacity;

    printf("Enter The Capacity Of The String: ");
    scanf("%d", &capacity);

    char string[capacity];

    getchar();

    printf("Input: ");

    fgets(string, sizeof(string), stdin);

    printf("Length Of The String Is: %d", strlen(string));

    return 0;
}
*/



/*

#include <stdio.h>

int main()
{
    int size1, size2;

    printf("Capacity Of String_1: ");
    scanf("%d", &size1);

    printf("Capacity Of String_2: ");
    scanf("%d", &size2);

    char string_1[size1], string_2[size2];

    getchar();

    printf("Input String_1: ");
    fgets(string_1, sizeof(string_1), stdin);

    printf("Input String_2: ");
    fgets(string_2, sizeof(string_2), stdin);

    strcat(string_1, string_2);

    printf("After Merging: ");

    puts(string_1);

    return 0;
}


*/








/*

#include <stdio.h>

int main()
{
    char str1[] = "Md Imran", str2[] = " Khan Siam";

    strcat(str1, str2);

    puts(str1);

    return 0;
}


*/

/*


#include <stdio.h>

int main()
{
    int size;

    scanf("%d", &size);

    char str[size];

    getchar();

    fgets(str, sizeof(str), stdin);

    printf("String_1: ");
    puts(str);

    char str2[size];

    strcpy(str2, str);

    printf("String_2: ");
    puts(str2);

    return 0;
}

*/

/*
#include <stdio.h>

int main()
{
    int capacity;

    printf("Capacity Of String: ");
    scanf("%d", &capacity);

    getchar();

    char string[capacity];

    printf("Input: ");

    fgets(string, sizeof(string), stdin);

    char string_copy[capacity];

    int index = 0;

    for( int i = 0; string[i] != '\0'; i++ )
    {
        if( (string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122) || string[i] == '\0' || string[i] == 32 )
        {
            string_copy[index] = string[i];

            index++;
        }
    }

    printf("Output: ");

    puts(string_copy);

    return 0;
}

*/





/*

//String Sorting

#include <stdio.h>

int main()
{
    int lines, length;

    printf("How Many Lines?\n");
    scanf("%d", &lines);

    printf("Length Of Each Line?\n");
    scanf("%d", &length);

    char word[lines][length];

    getchar();

    for( int i = 0; i < lines; i++ )
    {
        printf("Input Line %d: ", i+1);
        fgets(word[i], sizeof(word[i]), stdin);
    }

    for( int i = 0; i < lines-1; i++ )
    {
        for( int j = i+1; j < lines; j++ )
        {
            if( word[i][0] > word[j][0] )
            {
                char temp[strlen(word[i])];

                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    printf("\n<<After Sorting In Lexicographical Order>>\n");

    for( int i = 0; i < lines; i++ )
    {
        puts(word[i]);
    }

    return 0;
}

*/






/*

#include <stdio.h>

struct person {
    char name[30];
    int cityno;
    float salary;
};

int main()
{
    struct person person_1, person_2, persons[3];

    printf("Enter Person_1 Name: ");
    scanf("%s", person_1.name);

    printf("Enter Person_1 City No: ");
    scanf("%d", &person_1.cityno);
    printf("Enter Person_1 Salary: ");
    scanf("%f", &person_1.salary);

    printf("\nName: %s", person_1.name);
    printf("\nCityNo: %d", person_1.cityno);
    printf("\nSalary: %f", person_1.salary);

3    printf("\nNow Do It For Multiple Persons\n\n");

    for( int i = 0; i < 3; i++ )
    {
        printf("Person[%d] Name: ", i);
        scanf("%s", persons[i].name);
        printf("Person[%d] CityNo: ", i);
        scanf("%d", &persons[i].cityno);
        printf("Person[%d] Salary: ", i);
        scanf("%f", &persons[i].salary);
    }

    for( int i = 0; i < 3; i++ )
    {
        printf("\nPerson[%d] Name: %s", i, persons[i].name);
        printf("\nPerson[%d] CityNo: %d", i, persons[i].cityno);
        printf("\nPerson[%d] Salary: %f", i, persons[i].salary);
    }
}

*/








/*

#include <stdio.h>

typedef struct person {
    char name[30];
    int id;
    float salary;
}person_1;

int main()
{
    person_1 p1, p[3];

    printf("P1 Name: ");
    scanf("%s", p1.name);
    printf("P1 ID: ");
    scanf("%d", &p1.id);
    printf("P1 Salary: ");
    scanf("%f", &p1.salary);

    printf("\nP1 Name: %s", p1.name);
    printf("\nP1 ID: %d", p1.id);
    printf("\nP1 Salary: %f", p1.salary);

    printf("\n\nNow For P[]\n");

    for( int i = 0; i < 3; i++ )
    {
        printf("P[%d] Name: ", i);
        scanf("%s", p[i].name);
        printf("P[%d] ID: ", i);
        scanf("%d", &p[i].id);
        printf("P[%d] Salary: ", i);
        scanf("%f", &p[i].salary);
    }

    for( int i = 0; i < 3; i++ )
    {
        printf("\nP[%d] Name: %s", i, p[i].name);
        printf("\nP[%d] ID: %d", i, p[i].id);
        printf("\nP[%d] Salary: %f", i, p[i].salary);
    }

}


*/


/*

#include <stdio.h>

struct Student
{
    char s_name[30];
    int id;
    float cgpa;
};

struct Teacher
{
    char t_name[30];
    char department;
    float salary;
};

typedef struct University
{
    char name[50];

    struct Student st[3];
    struct Teacher th[3];

}univ;

int main()
{
    int count_univ;

    printf("Universities In Bangladesh: ");
    scanf("%d", &count_univ);

    univ university[count_univ];

    getchar();

    for( int i = 0; i < count_univ; i++ )
    {
        printf("University Name: ");
        scanf("%s", university[i].name);
    }

    int count;

    for( int i = 0; i < count_univ; i++ )
    {
        printf("\nNumber Of Student In %s University: ", university[i].name);
        scanf("%d", &count);

        university[i].st[i];
    }




    return 0;
}


*/

/*

#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);

    getchar();

    for( int i = 0; i < tc; i++ )
    {
        char input[10000];

        fgets(input, sizeof(input), stdin);

        puts("gzuz");

    }

    return 0;
}
*/




/*

#include <stdio.h>

int main()
{
    int att;

    while( scanf("%d", &att) != EOF )
    {
        float time = 11;

        for( int j = 0; j < att; j++ )
        {
            float t_time;

            scanf("%f", &t_time);

            if( t_time < time )
            {
                time = t_time;
            }
        }

        printf("%0.2f\n", time);
    }

    return 0;
}





*/
















/*


#include <iostream>

using namespace std;

class base_class
{
    public:
        void base_display()
        {
            cout<<"base Class:"<<endl;

        }

};

class driver1 : public base_class
{
    public:
          void driver1_display()
        {
            cout<<"driver Class 1:"<<endl;
        }
};


class driver2 : public base_class
{
    public:
          void driver2_display()
        {
            cout<<"driver Class 2:"<<endl;
        }
};






int main()
{
    driver2 oj;
    driver1 oj1;
    oj.base_display();
    oj1.base_display();

    return 0;
}



*/



























/*

//266B Codeforces

#include <stdio.h>

int main()
{
    int size, time;

    scanf("%d%d", &size, &time);

    char string[size];

    scanf("%s", string);

    for( int i = 1; i <= time; i++ )
    {
        int arr[size], index = 0;

        for( int j = 0; string[j] != '\0'; j++ )
        {
            if( string[j] == 'B' )
            {
                if( string[j+1] == 'G' )
                {
                    arr[index] = j;
                    index++;
                }
            }
        }

        for( int k = 0; k < index; k++ )
        {
            string[arr[k]] = 'G';
            string[arr[k]+1] = 'B';
        }
    }

    puts(string);

    return 0;
}

*/








/*

//25A Codeforces

#include <stdio.h>

int main()
{
    int size;

    scanf("%d", &size);

    int num[size], even = 0, odd = 0;

    for( int i = 0; i < size; i++ )
    {
        scanf("%d", &num[i]);

        if( num[i] % 2 == 0 )
            even++;
        else
            odd++;
    }

    int index;

    if( even > odd )
    {
        for( int i = 0; i < size; i++ )
        {
            if( num[i] % 2 != 0 )
            {
                index = i + 1;
            }
        }
    }
    else if( odd > even )
    {
        for( int i = 0; i < size; i++ )
        {
            if( num[i] % 2 == 0 )
            {
                index = i + 1;
            }
        }
    }

    printf("%d\n", index);

    return 0;
}

*/





/*

//1475A Codeforces

#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);

    while( tc != 0 )
    {
        long long int num;
        int flag = 0;

        scanf("%lld", &num);


        if( num > 2 && ( (num % 10) % 2 != 0 || ((num / 2) % 10) % 2 != 0 ) )
        {
            flag = 1;
        }
        else
        {
            int j = 2;

            while( 1 )
            {
                int i = num / j;

                if( (num / j) % 2 == 0 && ((num / j) % 10) % 2 != 0 )
                {
                    flag = 1;
                    break;
                }

                if( i <=1 )
                    break;

                j++;
            }
        }

        if( flag == 1 )
            printf("YES\n");
        else if( flag == 0 )
            printf("NO\n");

        tc--;
    }

    return 0;
}

*/














/*

//1475A Codeforces

#include <stdio.h>
#include <windows.h>

int main()
{
    int tc = 1;t

    while( tc <= 10000 )
    {
        //Sleep(1);

        long long int value = rand();

        long long int num = value;
        int flag = 0;

        if( num > 2 && ( (num % 10) % 2 != 0 || ((num / 2) % 10) % 2 != 0 ) )
        {
            flag = 1;
        }
        else
        {
            int j = 2;

            while( 1 )
            {
                int i = num / j;

                if( (num / j) % 2 == 0 && ((num / j) % 10) % 2 != 0 )
                {
                    flag = 1;
                    break;
                }

                if( i <=1 )
                    break;

                j++;
            }
        }

        if( flag == 1 )
            printf("YES\n");
        else if( flag == 0 )
            printf("NO\n");

        tc++;
    }

    return 0;
}



*/


/*

//1622A Codeforces

#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);

    while( tc != 0 )
    {
        int stick[3];

        for( int i = 0; i < 3; i++ )
        {
            scanf("%d", &stick[i]);
        }

        tc--;
    }

    return 0;
}

*/









#include <stdio.h>
#include <limits.h>

int push(int value);
int pop();
int isempty();

int stack[100000];
int top;

int main()
{
    int tc;

    scanf("%d", &tc);

    while( tc != 0 )
    {
        top = -1;

        int m_count;

        scanf("%d", &m_count);

        int monster[m_count];
        int temp[m_count];

        for( int i = 0; i < m_count; i++ )
        {
            scanf("%d", &monster[i]);
            temp[i] = -1;
        }

        for( int i = 0; i < m_count; i++ )
        {
            int loop = top + 1, count = 0;

            for( int j = 0; j < loop; j++ )
            {
                temp[j] = pop();
            }

            for( int z = 0; z < loop + 1; z++ )
            {
                count++;

                if( monster[i] >= temp[z] )
                {
                    temp[z] = monster[i];
                    break;
                }


            }

            for( int k = count - 1; k >= 0; k-- )
            {
                push(temp[k]);
            }

            printf("%d ", count);
        }

        printf("\n");

        tc--;
    }

    return 0;
}


int push(int value)
{
    stack[++top] = value;
    return 0;
}

int pop()
{
    if( isempty() == 0 )
    {
        return stack[top--];
    }
    else
        return 0;
}

int isempty()
{
    if( top == -1 )
        return 1;
    else
        return 0;
}




