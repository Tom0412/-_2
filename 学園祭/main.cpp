#include <stdio.h>

int BeginnerLevel(void);
int IntermediateLevel(void);
int AdvancedLevel(void);

int main()
{
    BeginnerLevel();
}

int BeginnerLevel()
{
    // 数字を入力
    int n;

    printf("好きな数字を入力してください: ");
    scanf_s("%d", &n);

    // 2で割り切れるかどうか
    if (n % 2 == 1)
    {
        printf("偶数");// 余りは偶数
    }
    else
    {
        printf("奇数");// 余りは奇数
    }
    return IntermediateLevel();
}

int IntermediateLevel()
{
    int x = 0;
    // 変数i = 1
    int i = 1;

    // iを表示
    printf("%d", i);

    // i >= 1なら終了
    do
    {
        if (i >= 3)
        {
            printf("OK!");
        }
        else
        {
            x++;
        }
    } while (i >= 3 || x < 5);

    return AdvancedLevel();
}

int AdvancedLevel()
{
    return 0;
}