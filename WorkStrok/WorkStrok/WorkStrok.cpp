#include "WorkStrok.h"
namespace WorkStrok
{
    int LengthSt(char* a)
    {
        int i = 0;
        for (;; i++)
        {
            if (a[i] == '\0')
            {
                return i;
            }
        }
    }
    char* CompositionSt(char* a, char* b, char* Result)
    {
        int Stroka_Lenght = LengthSt(a);
        int i = 0;
        for (;; i++)
        {
            Result[i] = a[i];
            if (a[i] == '\0') break;
        }
        i = 0;
        for (;; i++)
        {
            Result[i + Stroka_Lenght] = b[i];
            if (b[i] == '\0') break;
        }
        return Result;
    }
    char* CopySt(char* a, int b, int c, char* Result)
    {
        int lengh_Str = LengthSt(a);
        if (c <= 0 || b >= lengh_Str)
        {
            Result[0] = 0;
            return Result;
        }
        if (b < 0)
        {
            int i = 0;
            while (c != i)
            {
                Result[i] = a[i];
                i++;
            }
            Result[i++] = '\0';
            return Result;
        }
        else
        {
            if (lengh_Str - b <= c)
            {
                int i = b;
                int j = 0;
                while (a[i] != '\0')
                {
                    Result[j] = a[i];
                    j++;
                    i++;
                }
                Result[j++] = '\0';
                return Result;
            }
            else
            {
                int i = 0;
                int j = b;
                while (i != c)
                {
                    Result[i] = a[j];
                    j++;
                    i++;
                }
                Result[i++] = '\0';
                return Result;
            }
        }
    }
    char* DeleteSt(char* a, int b, int c, char* Result)
    {
        int length_Str = LengthSt(a);
        if (c <= 0 || b > length_Str)
        {
            Result[0] = 0;
            return Result;
        }
        if (b <= 0)
        {
            int j = 0;
            int i = 0;
            if (b + c >= length_Str)
            {
                Result[0] = 0;
                return Result;
            }
            else
            {
                while (c != j)
                {
                    for (i = 0; i < length_Str - j; i++)
                    {
                        a[i] = a[i + 1];
                    }
                    j++;
                }
            }
        }
        else
        {
            if (length_Str - b <= c)
            {
                int i = b;
                while (a[i] != '\0')
                {
                    a[i] = '\0';
                    i++;
                }
            }
            else
            {
                int i = 0;
                int z = 0;
                int j = b;
                while (z < c)
                {
                    for (i = 0; i <= c - z; i++)
                    {
                        a[j + i] = a[j + i + 1];
                    }
                    z++;
                }
            }
        }
        int z = 0;
        while (a[z] != '\0')
        {
            Result[z] = a[z];
            z++;
        }
        Result[z++] = '\0';
        return Result;
    }
    char* PasteSt(char* a, char* b, int c, char* Result)
    {
        int length_Str1 = LengthSt(a);
        if (c < 0)
        {
            int i = 0;
            int j = 0;
            while (b[i] != '\0')
            {
                for (j = length_Str1; j >= 0; j--)
                {
                    a[j + 1 + i] = a[j + i];
                }
                a[i] = b[i];
                i++;
            }
        }
        else
        {
            if (c > length_Str1)
            {
                int i = 0;
                while (b[i] != '\0')
                {
                    a[length_Str1 + i] = b[i];
                    i++;
                }
                a[i + length_Str1] = '\0';
            }
            else
            {
                int i = 0;
                int j = 0;
                while (b[i] != '\0')
                {
                    for (j = length_Str1; j >= c - 1; j--)
                    {
                        a[j + 1 + i] = a[j + i];
                    }
                    a[c + i] = b[i];
                    i++;
                }
                a[i + length_Str1] = '\0';
            }
        }
        int z = 0;
        while (a[z] != '\0')
        {
            Result[z] = a[z];
            z++;
        }
        Result[z++] = '\0';
        return Result;
    }
    int SearchSt(char* a, char* b)
    {
        int length_Str2 = LengthSt(b);
        int length_Str1 = LengthSt(a);
        int i = 0;
        int j = 0;
        int zap = -1;
        for (i; i <= length_Str1; i++)
        {
            if (a[i] == b[j])
            {
                if (zap == -1)
                {
                    zap = i;
                }
                j++;
                if (j == length_Str2)
                {
                    break;
                }
            }
            else
            {
                if (zap != -1)
                {
                    if (length_Str1 - i < length_Str2 && j != length_Str2)
                    {
                        zap = -1;
                        break;
                    }
                    else
                    {
                        zap = -1;
                    }
                    i--;
                }
                j = 0;
            }
        }
        return zap;
    }
    int SearchStEnd(char* a, char* b)
    {
        int length_Str2 = LengthSt(b);
        int length_Str1 = LengthSt(a);
        int i = 0;
        int j = 0;
        int k = 1;
        int zap = -1;
        for (i; i <= length_Str1 - length_Str2; i++)
        {
            if (a[length_Str1 - length_Str2 - i] == b[j])
            {
                if (zap == -1)
                {
                    zap = length_Str1 - length_Str2 - i;
                }
                j++;
                for (k; k < length_Str2; k++)
                {
                    if (a[length_Str1 - length_Str2 - i + k] == b[j])
                    {
                        j++;
                    }
                    else
                    {
                        zap = -1;
                        j = 0;
                    }
                }
            }
            if (zap != -1)
            {
                break;
            }
        }
        return zap;
    }
    char* SubstitutionSt(char* a, char* b, char* c, char* Result)
    {
        int length_Str1 = LengthSt(a);
        int length_Str2 = LengthSt(b);
        int length_Str3 = LengthSt(c);
        int Pozition_Stroka1 = 0;
        int zap = -1;
        int j = 0;
        int z = 0;
        int Pozition_Stroka4 = 0;
        for (Pozition_Stroka1; Pozition_Stroka1 <= length_Str1; Pozition_Stroka1++)
        {
            if (a[Pozition_Stroka1] == b[j])
            {
                if (zap == -1)
                {
                    zap = Pozition_Stroka1;
                }
                j++;
                if (j == length_Str2)
                {
                    Pozition_Stroka1++;
                    int z = 0;
                    while (c[z] != '\0')
                    {
                        Result[Pozition_Stroka4] = c[z];
                        Pozition_Stroka4++;
                        z++;
                    }
                    zap = -1;
                    j = 0;
                    while (a[Pozition_Stroka1] != '\0')
                    {
                        Result[Pozition_Stroka4] = a[Pozition_Stroka1];
                        Pozition_Stroka4++;
                        Pozition_Stroka1++;
                    }
                    break;
                }
            }
            else
            {
                if (zap != -1)
                {
                    Pozition_Stroka1 = zap;
                    Result[Pozition_Stroka4] = a[Pozition_Stroka1];
                    Pozition_Stroka4++;
                    zap = -1;
                }
                else
                {
                    Result[Pozition_Stroka4] = a[Pozition_Stroka1];
                    Pozition_Stroka4++;
                }
                j = 0;
            }
        }
        Result[Pozition_Stroka4] = '\0';
        return Result;
    }
    char* SubstitutionStAll(char* a, char* b, char* c, char* Result)
    {
        int length_Str1 = LengthSt(a);
        int length_Str2 = LengthSt(b);
        int length_Str3 = LengthSt(c);
        int Pozition_Stroka1 = 0;
        int zap = -1;
        int j = 0;
        int z = 0;
        int Pozition_Stroka4 = 0;
        for (Pozition_Stroka1; Pozition_Stroka1 <= length_Str1; Pozition_Stroka1++)
        {
            if (a[Pozition_Stroka1] == b[j])
            {
                if (zap == -1)
                {
                    zap = Pozition_Stroka1;
                }
                j++;
                if (j == length_Str2)
                {
                    int z = 0;
                    while (c[z] != '\0')
                    {
                        Result[Pozition_Stroka4] = c[z];
                        Pozition_Stroka4++;
                        z++;
                    }
                    zap = -1;
                    j = 0;
                }
            }
            else
            {
                if (zap != -1)
                {
                    Pozition_Stroka1 = zap;
                    Result[Pozition_Stroka4] = a[Pozition_Stroka1];
                    Pozition_Stroka4++;
                    zap = -1;
                }
                else
                {
                    Result[Pozition_Stroka4] = a[Pozition_Stroka1];
                    Pozition_Stroka4++;
                }
                j = 0;
            }
        }
        Result[Pozition_Stroka4] = '\0';
        return Result;
    }
}