#include <stdio.h>

struct person
{
    char name[30];
    int age;
    float weight;
};

struct person p[3];

int main()
{
    FILE *fp;
    int i;
    fp=fopen("test.bin", "rb");
    fread(p, sizeof(struct person), 2, fp);
    fclose(fp);
    for(i=0;i<2;i++)
    {
        printf("%s %d %f\n", p[i].name, p[i].age, p[i].weight);
    }
    
    return 0;
}