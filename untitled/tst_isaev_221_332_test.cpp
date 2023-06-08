#include "../server/func_for_server.cpp"
#include <QtTest>

// add necessary includes here

class Isaev_221_332_Test : public QObject
{
    Q_OBJECT

public:
    Isaev_221_332_Test();
    ~Isaev_221_332_Test();

private slots:
    void test_case1();
    void test_case2();
};

Isaev_221_332_Test::Isaev_221_332_Test()
{

}

Isaev_221_332_Test::~Isaev_221_332_Test()
{

}

void Isaev_221_332_Test::test_case1()
{
    QTcpSocket a;

    QString params1 = "perimeter@1,1@3,7@5,10@6,3@4,1";
    QByteArray result1 = parsing(params1, a);
    QByteArray expected1 = "Периметр: 22.8296";
    QCOMPARE(result1, expected1);

    QString params2 = "perimeter@1,1@3,4@5,2";
    QByteArray result2 = parsing(params2, a);
    QByteArray expected2 = "Периметр: 10.5571";
    QCOMPARE(result2, expected2);

    QString params3 = "perimeter@1,1@5,1@5,3@1,3";
    QByteArray result3 = parsing(params3, a);
    QByteArray expected3 = "Периметр: 12";
    QCOMPARE(result3, expected3);

    QString params4 = "perimeter@2,3@8,3@8,9@2,9";
    QByteArray result4 = parsing(params4, a);
    QByteArray expected4 = "Периметр: 24";
    QCOMPARE(result4, expected4);

    QString params5 = "perimeter@3,1@8,1@8,6";
    QByteArray result5 = parsing(params5, a);
    QByteArray expected5 = "Периметр: 17.0711";
    QCOMPARE(result5, expected5);

    QString params6 = "perimeter@5,5@3,4@10,7";
    QByteArray result6 = parsing(params6, a);
    QByteArray expected6 = "Периметр: 15.237";
    QCOMPARE(result6, expected6);

    QString params7 = "perimeter@2,2@5,2@5,5@2,5";
    QByteArray result7 = parsing(params7, a);
    QByteArray expected7 = "Периметр: 12";
    QCOMPARE(result7, expected7);

    QString params8 = "perimeter@1,1@9,1@9,5@1,5";
    QByteArray result8 = parsing(params8, a);
    QByteArray expected8 = "Периметр: 24";
    QCOMPARE(result8, expected8);

    QString params9 = "perimeter@1,1@5,1@3,2";
    QByteArray result9 = parsing(params9, a);
    QByteArray expected9 = "Периметр: 8.47214";
    QCOMPARE(result9, expected9);

    QString params10 = "perimeter@7,8@4,5@0,1";
    QByteArray result10 = parsing(params10, a);
    QByteArray expected10 = "Периметр: 19.799";
    QCOMPARE(result10, expected10);

}

void Isaev_221_332_Test::test_case2()
{
    QTcpSocket a;

    QString params1 = "square@1,1@3,7@5,10@6,3@4,1";
    QByteArray result1 = parsing(params1, a);
    QByteArray expected1 = "Площадь: 24.5";
    QCOMPARE(result1, expected1);

    QString params2 = "square@1,1@3,4@5,2";
    QByteArray result2 = parsing(params2, a);
    QByteArray expected2 = "Площадь: 5";
    QCOMPARE(result2, expected2);

    QString params3 = "square@1,1@5,1";
    QByteArray result3 = parsing(params3, a);
    QByteArray expected3 = "Площадь: 0";
    QCOMPARE(result3, expected3);

    QString params4 = "square@2,3";
    QByteArray result4 = parsing(params4, a);
    QByteArray expected4 = "Площадь: 0";
    QCOMPARE(result4, expected4);

    QString params5 = "square@3,1@8,1@8,6";
    QByteArray result5 = parsing(params5, a);
    QByteArray expected5 = "Площадь: 12.5";
    QCOMPARE(result5, expected5);

    QString params6 = "square@5,5@3,4@10,7";
    QByteArray result6 = parsing(params6, a);
    QByteArray expected6 = "Площадь: 0.5";
    QCOMPARE(result6, expected6);

    QString params7 = "square@2,2@5,2@5,5@2,5";
    QByteArray result7 = parsing(params7, a);
    QByteArray expected7 = "Площадь: 9";
    QCOMPARE(result7, expected7);

    QString params8 = "square@1,1@9,1@9,5@1,5";
    QByteArray result8 = parsing(params8, a);
    QByteArray expected8 = "Площадь: 32";
    QCOMPARE(result8, expected8);

    QString params9 = "square@1,1@5,1@3,2";
    QByteArray result9 = parsing(params9, a);
    QByteArray expected9 = "Площадь: 2";
    QCOMPARE(result9, expected9);

    QString params10 = "square@7,8@4,5@0,1";
    QByteArray result10 = parsing(params10, a);
    QByteArray expected10 = "Площадь: 0";
    QCOMPARE(result10, expected10);

}

QTEST_APPLESS_MAIN(Isaev_221_332_Test)

#include "tst_isaev_221_332_test.moc"
