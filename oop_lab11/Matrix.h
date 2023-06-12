#pragma once
#include <iostream>
#include <fstream>
#include <msclr/marshal_cppstd.h>

using namespace System;
using  namespace System::Windows::Forms;

public ref class Matrix {
private:
    int** matrix;
    int rows;
    int columns;

public:

    Matrix() : matrix(nullptr), rows(0), columns(0) {}

    Matrix(int rows, int columns) : rows(rows), columns(columns) {
        matrix = new int* [rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[columns];
            for (int j = 0; j < columns; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    int GetRows() {
        if (rows > 99) {
            throw std::invalid_argument("Error! Index is out if range");
        }
        else {
            return rows;
        }
    }

    int GetColumns() {
        if (columns > 99) {
            throw std::invalid_argument("Error! Index is out if range");
        }
        else {
            return columns;
        }

    }

    int GetValue(int row, int column) {
        return matrix[row][column];
    }

    void SetValuesToZero() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    std::pair<int, int> ReadFromFile(String^ filePath) {
        if (matrix != nullptr) {
            for (int i = 0; i < rows; i++) {
                delete[] matrix[i];
            }
            delete[] matrix;
        }

        System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);

        String^ line = reader->ReadLine();
        array<String^>^ dimensions = line->Split(' ');
        rows = Convert::ToInt32(dimensions[0]);
        columns = Convert::ToInt32(dimensions[1]);
        matrix = new int* [rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[columns];
            line = reader->ReadLine();
            array<String^>^ values = line->Split(' ');
            for (int j = 0; j < columns; j++) {
                matrix[i][j] = Convert::ToInt32(values[j]);
            }
        }
        std::pair<int, int> size;
        size.first = rows;
        size.second = columns;
        reader->Close();
        return size;
    };

    void WriteToFile(String^ filePath) {
        System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath);

        for (int row = 0; row < rows; row++) {
            for (int column = 0; column < columns; column++) {
                writer->Write(matrix[row][column].ToString() + " ");
            }
            writer->WriteLine();
        }

        writer->Close();
    }

    void DefaultMatrixFill(std::pair<int, int> size) {
        if (matrix != nullptr) {
            for (int i = 0; i < rows; i++) {
                delete[] matrix[i];
            }
            delete[] matrix;
        }

        rows = size.first;
        columns = size.second;
        matrix = new int* [rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[columns];
            for (int j = 0; j < columns; j++) {
                if ((i < (size.first/5) || j < (size.second/5)) || (i >= rows - (size.first / 5) || j >= columns - (size.second / 5))) {
                    matrix[i][j] = 1;
                }
                else {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    void TableFill(TableLayoutPanel^ tableLayoutPanel, std::pair<int, int> size)
    {
        tableLayoutPanel->Controls->Clear();
        tableLayoutPanel->RowCount = size.first;
        tableLayoutPanel->ColumnCount = size.second;

        for (int i = 0; i < size.first; i++) {
            tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
        }
        for (int j = 0; j < size.second; j++) {
            tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
        }

        if (matrix == nullptr) {
            DefaultMatrixFill(size);
        }

        tableLayoutPanel->Visible = false;

        for (int row = 0; row < size.first; row++)
        {
            for (int column = 0; column < size.second; column++)
            {
                Panel^ panel = gcnew Panel();
                panel->Dock = DockStyle::Fill;

                if (matrix[row][column] == 1)
                {
                    panel->BackColor = System::Drawing::Color::Red;
                }
                else if (matrix[row][column] == 0)
                {
                    panel->BackColor = System::Drawing::Color::Black;
                }

                tableLayoutPanel->Controls->Add(panel, column, row);
            }
        }

        tableLayoutPanel->Visible = true;
    }

    void SetNewValue(TableLayoutPanel^ tableLayoutPanel, int row, int column, int value) {
        if (row > GetRows() || column > GetColumns()) {
            throw std::invalid_argument("Error! Index is out if range");
        }
        matrix[row][column] = value;

        Control^ cellControl = tableLayoutPanel->GetControlFromPosition(column, row);

        if (cellControl != nullptr) {
            if (value == 1) {
                cellControl->BackColor = System::Drawing::Color::Black;
            }
            else if (value == 0) {
                cellControl->BackColor = System::Drawing::Color::Red;
            }
            else {
                throw std::invalid_argument("Error! Only 1 or 0 could be entered");
            }
        }
    }

    ~Matrix() {
        if (matrix != nullptr) {
            for (int i = 0; i < rows; i++) {
                delete[] matrix[i];
            }
            delete[] matrix;
        }
    }
};