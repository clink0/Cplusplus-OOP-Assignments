#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int findRows();

char calculateLetterGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}

int main()
{
    //teacher answers array
    char teacherAnswers[] = "TTFTTTFFTFFFTFFTTFFT";
    const int answerLength = sizeof( teacherAnswers ) - 1;

    //allocate array for 30 columns and as many rows as are in the txt file
    int rows = findRows();
    int columns = 30;

    char **arr2d = new char*[ rows ];

    for ( int i = 0; i < rows; i++ ){
        arr2d[ i ] = new char[ columns ];
        std::fill_n(arr2d[i], columns, ' ');
    }

    //fill array from text file
    std::ifstream inFile( "ingrades.txt" );
    std::string line;
    int currentRow = 0;

    if ( inFile.is_open() ){
        while ( std::getline( inFile, line ))
        {
            std::stringstream ss( line );
            std::string studentID;
            ss >> studentID;

            for ( size_t i = 0; i < studentID.length(); ++i )
            {
                arr2d[ currentRow ][ i ] = studentID[ i ];
            }

            int startColumn = studentID.length() + 1;
            int currentColumn = startColumn;
            char answer;
            bool readingAnswers = false;

            while ( ss >> std::noskipws >> answer )
            {
                if ( answer != ' ' )
                {
                    arr2d[currentRow][currentColumn++] = answer;
                    readingAnswers = true;
                } else if ( readingAnswers )
                {
                    arr2d[currentRow][currentColumn++] = 'X';
                }
            }
            currentRow++;
        }
    } else 
    {
        std::cout << "Could not open file!" << std::endl;
    }    

    //find score and write grades to outgrades
    std::ofstream outFile( "outgrades.txt" );
    
    for (int i = 0; i < rows; i++) {
        int score = 0;
        for (int j = 0; j < answerLength; j++) {
            char studentAnswer = arr2d[i][8 + j];
            if (studentAnswer == teacherAnswers[j]) {
                score += 2;
            } else if (studentAnswer == 'X') {
            } else {
                score += 1;
            }
        }

        float percentage = static_cast<float>(score) / 40 * 100;
        char letterGrade = calculateLetterGrade(percentage);

        if (outFile.is_open()) {
            outFile << std::string(arr2d[i], arr2d[i] + 7) << " " 
                    << std::fixed << std::setprecision(2) << percentage << "% " 
                    << letterGrade << "\n";
        }
    }

    if (outFile.is_open()) {
        outFile.close();
    }

    //deallocate rows before columns
    for ( int i = 0; i < rows; i++ )
        delete []arr2d[i];
    
    delete []arr2d;
    arr2d = nullptr;
    return 0;
}

int findRows()
{
    int rows = 0;
    std::ifstream inFile("ingrades.txt");
    std::string ph;
    if (inFile.is_open())
    {
        while ( std::getline(inFile, ph))
            rows++;
        inFile.close();            
    }
    return rows;
}