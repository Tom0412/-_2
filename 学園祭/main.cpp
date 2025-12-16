#include <stdio.h>

int BeginnerLevel(void);
int IntermediateLevel(void);
int AdvancedLevel(void);

int main()
{
    int n;
    
    printf("\n難易度を選び、ENTERキーを押してください。。\n");
    printf("\n初級:1\n中級:2\n上級:3\n\n");
    scanf_s("%d", &n);

    if (n == 1)
    {
        return BeginnerLevel();
    }
    if (n == 2)
    {
        return IntermediateLevel();
    }
    if (n == 3)
    {
        return AdvancedLevel();
    }
    else
    {
        printf("1～3のどれかを選んでください。");
        return main();
    }

}

int BeginnerLevel()
{
    printf("\n初級\n");
    // 数字を入力
    int n;

    printf("\n好きな数字を入力してください。: ");
    scanf_s("%d", &n);

    // 2で割り切れるかどうか ->ここが間違い
    if (n % 2 == 1)
    {
        printf("その数字は偶数です。\n");// 余りは偶数
    }
    else
    {
        printf("その数字は奇数です。\n");// 余りは奇数
    }
    return main();
}

int IntermediateLevel()
{
    printf("\n中級\n");
    int x = 0;
    printf("3になるまで0を足していきます。");
    // 変数i = 1
    int i = 1;

    // iを表示
    printf("今の数は%dです。", i);

    // i >= 1なら終了
    do
    {
        if (i >= 3)
        {
            printf("完了しました。今の数は%dです。",i);
        }
        else
        {
            printf("今の数は%dです。\n",i);
            x++;
        }
    } while (i >= 3 || x < 5);

    return main();
}

int AdvancedLevel()
{
    printf("\n上級\n");
    int i;
    // 点数を入力
    printf("テストの点数を入力してください。:");
    scanf_s("%d", &i);
    // 点数が50点以上
    if (i >= 50)
    {
        printf("合格です。\n");
    }
    // 点数が80点以上
    else if (i >= 80)
    {
        printf("再テストです。\n");
    }
    // どれにも当てはまらない時
    else
    {
        printf("不合格です。\n");
    }
    return main();
}