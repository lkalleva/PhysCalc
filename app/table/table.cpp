#include "table.h"

Table::Table(QString tablename)
{

}

Table::Table(QString tablename, QString filename)
{
    std::ifstream inputfile;
    std::vector<std::vector<QVariant*>> lines;
    inputfile.open(filename.c_str());

    std::string line = "";

    while (getline(inputfile, line)) {

        Table.parse
    }
}

Table::~Table()
{

}

std::vector<QVariant *> Table::parse(std::string line, char delimiter)
{
    std::vector<QVariant *> values;
    std::stringstream inLine(line);

    std::string tempColumn = "";
    while (getline(inLine, tempColumn, delimiter))
    {
        auto* temp = new QVariant(QString::fromStdString(tempColumn));
        values.push_back(temp);
    }
    return values;
}

std::vector<QVariant *> Table::getColumn(int columnNumber)
{
    return std::vector<QVariant *> {};
}

std::vector<QVariant *> Table::getRow(int rowNumber)
{
    return std::vector<QVariant *> {};
}

std::vector<std::vector<QVariant *> > Table::getMatrix(int beginColumn, int beginRow, int endColumn, int endRow)
{
    return std::vector<std::vector<QVariant *>> {{}};
}

std::vector<std::vector<QVariant *> > Table::getMatrix()
{
    return std::vector<std::vector<QVariant *>> {{}};
}

void Table::writeColumn(std::vector<QVariant *> Column, int columnNumber, int beginRow)
{

}

void Table::writeRow(std::vector<QVariant *> Row, int rowNumber, int beginColumn)
{

}

void Table::writeCell(QVariant *value, int columnNumber, int rowNumber)
{

}

QVariant *Table::getCell(int columnNumber, int rowNumber)
{
    return new QVariant();
}
