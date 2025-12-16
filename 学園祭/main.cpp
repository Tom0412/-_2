#include <stdio.h>

int BeginnerLevel(void);
int IntermediateLevel(void);
int AdvancedLevel(void);
int Answer(int i);

int main()
{
    int n;

    printf("\n難易度を選んでね\n初級:1\n中級:2\n上級:3\n1〜3の数字を選んでね:");
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
        printf("1～3のどれかを選んで！");
    }

}

int BeginnerLevel()
{
    printf("\n初級");
    // 数字を入力
    int n;

    printf("\n好きな数字を入力してね: ");
    scanf_s("%d", &n);

    // 2で割り切れるかどうか
    if (n % 2 == 1)
    {
        printf("その数字は偶数だね！");// 余りは偶数
    }
    else
    {
        printf("その数字は奇数だね！");// 余りは奇数
    }
    return Answer(1);
}

int IntermediateLevel()
{
    int x = 0;
    printf("3になるまで0を足していこう！");
    // 変数i = 1
    int i = 1;

    // iを表示
    printf("今の数は%dだよ", i);

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

    return Answer(2);
}

int AdvancedLevel()
{
    int i;
    // 点数を入力
    printf("テストの点数を入力してね:");
    scanf_s("%d", &i);
    // 点数が50点以上
    if (i >= 50)
    {
        printf("合格!");
    }
    // 点数が80点以上
    else if (i >= 80)
    {
        printf("再テスト...");
    }
    // どれにも当てはまらない時
    else
    {
        printf("不合格...");
    }
    return Answer(3);
}

int Answer(int i)
{
    int n;
    // 問題が初級だったとき
    if (i == 1)
    {
        printf("どこが間違いだったでしょうか？1から3の数字の中から選んでね");
        scanf_s("%d", &n);
        if (n == 1)
        {
            printf("正解！");
        }
        else if (n == 2 || n == 3)
        {
            printf("不正解...");
        }
        else
        {
            printf("1～3の数字の中から選んでね");
        }
        return main();
    }
    if (i == 2)
    {
        printf("どこが間違いだったでしょうか？1から3の数字の中から選んでね");
        scanf_s("%d", &n);
        if (n == 1)
        {
            printf("正解！");
        }
        else if (n == 2 || n == 3)
        {
            printf("不正解...");
        }
        else
        {
            printf("1～3の数字の中から選んでね");
        }
        return main();
    }
    if (i == 3)
    {
        printf("\nどこが間違いだったでしょうか？1から3の数字の中から選んでね");
        scanf_s("%d", &n);
        if (n == 1)
        {
            printf("正解！");
        }
        else if (n == 2 || n == 3)
        {
            printf("不正解...");
        }
        else
        {
            printf("1～3の数字の中から選んでね");
        }
        return main();
    }
}