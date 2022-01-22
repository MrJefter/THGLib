//!     @file       THGLib.h
//!     @mainpage
//!     @brief      Библиотека, отрисовывающая Gyate Gyate версии некоторых персонажей из серии игр TouHou Project. \n \n
//!     
//!     <b>Version:</b> 1.1 \n
//!     <b>Revision:</b> 1.0 \n
//!     <b>Date:</b> 2022-01-22 00:21:00 +0500 \n \n
//!
//!     TouHou Gyate Library -- небольшая библиотека для отрисовки готовых персонажей из серии игр
//!     TouHou Project, основанная на библиотеке <a href=http://storage.ded32.net.ru/Lib/TX/TXUpdate/Doc/HTML.ru/>TXLib</a> (Библиотека Тупого Художника) за авторством
//!     Ильи Дединского.
//!
//!     <img src="Gyate Characters.png" alt="This is how does characters looks at DC"/>
//!     
//!     В библиотеке доступны следующие персонажи: \n
//!             <b>Сатори Комейдзи</b> ("Satori") \n
//!             <b>Мариса Кирисаме</b> ("Marisa") \n
//!             <b>Чэнь</b> ("Chen") \n
//!             <b>Сирно</b> ("Cirno") \n
//!             <b>Назрин</b> ("Nazrin") \n
//!             <b>Румия</b> ("Rumia") \n
//!     \n
//!     Демо доступных в библиотеке эмоций и параметров внешности (помимо цвета):
//!     
//!     <img src="Emote test.gif" alt="This is how does characters looks at DC"/>
//!     <img src="Gyate Size.png" alt="This is how does characters looks at DC"/>
//!     
//!     См. также страницу оригинальной библиотеки (TXLib) на <a href=http://sourceforge.net/p/txlib>SourceForge.</a> \n
//!     \n
//!     <b>Установка библиотеки:</b> \n
//!     \n
//!     Поместите файлы 'TXLib.h' и 'THGLib.h' в корень папки вашего проекта и подключите их. Все максимально просто.
//!
//!
//!     @defgroup   Drawing Рисование
//!     @defgroup   Local Внутренние функции
//!     @defgroup   Arrays Локальные POINT массивы

#include "TXLib.h"
#include <iostream>

using namespace std;
 
//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT satoriProfile[63] = {
    {130, 177}, {112, 169}, {104, 170}, {100, 166},
    {91, 169}, {91, 161}, {91, 164}, {82, 164},
    {73, 159}, {70, 155}, {70, 164}, {63, 156},
    {58, 145}, {57, 138}, {51, 150}, {51, 135},
    {56, 123}, {56, 108}, {56, 111}, {39, 123},
    {56, 101}, {61, 79}, {69, 59}, {51, 73},
    {68, 49}, {94, 28}, {112, 19}, {123, 18},
    {151, 18}, {187, 19}, {213, 28}, {225, 45},
    {230, 62}, {229, 80}, {225, 62}, {218, 47},
    {225, 62}, {227, 72}, {225, 84}, {220, 92},
    {215, 90}, {220, 92}, {228, 96}, {233, 102},
    {233, 124}, {235, 127}, {241, 126}, {243, 118},
    {239, 112}, {246, 120}, {245, 129}, {234, 134},
    {226, 133}, {232, 136}, {236, 134}, {230, 142},
    {222, 146}, {223, 150}, {215, 148}, {212, 158},
    {201, 164}, {195, 168}, {150, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT marisaProfile[74] = {
    {110, 177}, {105, 162}, {100, 168}, {96, 177},
    {74, 177}, {70, 171}, {67, 163}, {65, 158},
    {67, 163}, {62, 170}, {56, 173}, {60, 167},
    {60, 162}, {58, 156}, {57, 150}, {51, 151},
    {44, 150}, {38, 144}, {43, 146}, {50, 145},
    {56, 140}, {61, 132}, {64, 115}, {58, 116},
    {58, 114}, {61, 108}, {71, 94}, {71, 85},
    {68, 78}, {69, 67}, {74, 50}, {86, 34},
    {103, 18}, {123, 11}, {151, 11}, {171, 15},
    {186, 19}, {200, 26}, {217, 38}, {223, 41},
    {229, 51}, {230, 64}, {231, 74}, {230, 80},
    {227, 67}, {226, 79}, {223, 86}, {220, 90},
    {228, 95}, {232, 100}, {234, 109}, {233, 122},
    {236, 126}, {240, 126}, {243, 124}, {243, 118},
    {239, 111}, {245, 119}, {246, 126}, {241, 131},
    {234, 134}, {235, 139}, {241, 146}, {247, 152},
    {248, 156}, {248, 160}, {243, 168}, {240, 173},
    {238, 177}, {200, 177}, {200, 166}, {195, 158},
    {194, 155}, {193, 166}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT chenProfile[67] = {
    {130, 177}, {112, 169}, {104, 170}, {100, 166},
    {91, 169}, {91, 161}, {91, 164}, {82, 164},
    {73, 159}, {70, 155}, {70, 164}, {67, 160},
    {65, 158}, {60, 157}, {58, 153}, {58, 148},
    {60, 143}, {55, 142}, {60, 138}, {64, 126},
    {63, 115}, {59, 104}, {58, 92}, {59, 81},
    {65, 65}, {62, 35}, {92, 38}, {128, 18},
    {149, 16}, {178, 17}, {200, 21}, {211, 26},
    {219, 35}, {225, 45}, {229, 55}, {231, 66},
    {230, 74}, {229, 80}, {225, 62}, {218, 47},
    {225, 62}, {227, 72}, {225, 84}, {220, 92},
    {215, 90}, {220, 92}, {228, 96}, {233, 102},
    {233, 124}, {235, 127}, {241, 126}, {243, 118},
    {239, 112}, {246, 120}, {245, 129}, {234, 134},
    {226, 133}, {232, 136}, {236, 134}, {230, 142},
    {222, 146}, {223, 150}, {215, 148}, {212, 158},
    {201, 164}, {195, 168}, {150, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT cirnoProfile[75] = {
    {125, 170}, {107, 170}, {104, 170}, {100, 165},
    {91, 169}, {91, 160}, {91, 163}, {85, 165},
    {78, 162}, {70, 155}, {70, 162}, {67, 162},
    {64, 159}, {60, 158}, {56, 154}, {56, 148},
    {58, 143}, {57, 137}, {53, 130}, {48, 120},
    {48, 110}, {51, 99}, {60, 85}, {67, 74},
    {73, 59}, {77, 45}, {84, 35}, {94, 26},
    {106, 20}, {115, 18}, {123, 18}, {129, 12},
    {139, 7}, {148, 7}, {155, 8}, {159, 10},
    {161, 8}, {172, 7}, {184, 10}, {198, 16},
    {210, 24}, {221, 37}, {229, 52}, {231, 66},
    {230, 77}, {228, 67}, {224, 58}, {220, 48},
    {224, 58}, {228, 67}, {225, 82}, {220, 90},
    {229, 94}, {231, 100}, {234, 108}, {233, 123},
    {236, 126}, {240, 126}, {244, 122}, {243, 117},
    {246, 124}, {242, 130}, {235, 133}, {233, 138},
    {227, 143}, {222, 145}, {223, 149}, {219, 149},
    {215, 147}, {214, 153}, {212, 157}, {207, 161},
    {201, 163}, {197, 167}, {192, 168}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT nazrinProfile[65] = {
    {125, 168}, {110, 168}, {103, 169}, {99, 167},
    {96, 167}, {91, 169}, {91, 160}, {91, 164},
    {82, 164}, {74, 160}, {69, 155}, {68, 161},
    {65, 159}, {58, 159}, {54, 155}, {53, 146},
    {55, 138}, {55, 117}, {59, 103}, {64, 87},
    {66, 78}, {67, 65}, {74, 47}, {84, 34},
    {96, 25}, {109, 19}, {118, 17}, {122, 18},
    {133, 9}, {143, 7}, {154, 8}, {160, 9},
    {168, 8}, {181, 10}, {201, 18}, {216, 31},
    {225, 42}, {231, 58}, {232, 70}, {229, 79},
    {228, 66}, {222, 50}, {228, 66}, {226, 79},
    {221, 91}, {229, 96}, {233, 101}, {233, 108},
    {232, 122}, {236, 128}, {242, 126}, {245, 119},
    {246, 126}, {241, 131}, {236, 133}, {232, 140},
    {227, 143}, {223, 145}, {223, 149}, {214, 146},
    {214, 152}, {209, 158}, {203, 162}, {194, 167},
    {182, 169}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT faceShape[68] = {
    {139, 170}, {139, 155}, {144, 155}, {139, 155},
    {126, 148}, {122, 146}, {128, 140}, {128, 138},
    {124, 142}, {119, 141}, {114, 135}, {115, 116},
    {111, 106}, {105, 101}, {100, 99}, {100, 109},
    {100, 99}, {105, 87}, {101, 87}, {105, 87},
    {122, 71}, {126, 56}, {124, 39}, {128, 56},
    {127, 71}, {125, 78}, {133, 68}, {134, 59},
    {133, 45}, {127, 32}, {144, 53}, {150, 68},
    {150, 79}, {155, 73}, {155, 59}, {150, 43},
    {156, 62}, {159, 78}, {166, 71}, {168, 73},
    {170, 70}, {172, 75}, {177, 70}, {177, 53},
    {172, 38}, {180, 56}, {182, 70}, {182, 51},
    {178, 40}, {182, 51}, {184, 71}, {191, 70},
    {196, 63}, {195, 50}, {186, 32}, {195, 50},
    {201, 76}, {205, 70}, {205, 61}, {203, 53},
    {205, 61}, {205, 70}, {209, 96}, {216, 111},
    {216, 127}, {193, 146}, {170, 154}, {170, 170}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT satoriClothes[21] = {
    {104, 177}, {112, 169}, {112, 164}, {116, 162},
    {116, 159}, {123, 155}, {130, 152}, {139, 155},
    {145, 162}, {159, 161}, {161, 154}, {177, 150},
    {178, 154}, {177, 158}, {184, 154}, {188, 157},
    {188, 159}, {185, 160}, {186, 163}, {193, 169},
    {198, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT marisaClothes[26] = {
    {101, 177}, {104, 174}, {104, 167}, {117, 161},
    {130, 154}, {130, 152}, {136, 152}, {140, 153},
    {140, 156}, {143, 156}, {144, 161}, {146, 161},
    {154, 166}, {159, 168}, {165, 154}, {172, 152},
    {177, 152}, {177, 154}, {181, 155}, {185, 157},
    {186, 161}, {189, 164}, {199, 165}, {202, 169},
    {203, 173}, {202, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT collar[27] = {
    {116, 162}, {116, 160}, {131, 152}, {139, 155},
    {145, 162}, {159, 161}, {161, 154}, {177, 150},
    {178, 154}, {177, 158}, {184, 154}, {188, 157},
    {188, 159}, {185, 160}, {186, 163}, {186, 167},
    {184, 167}, {184, 169}, {181, 170}, {181, 174},
    {177, 177}, {126, 177}, {125, 173}, {126, 171},
    {120, 171}, {117, 169}, {119, 165}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT collarLines1[8] = {
    {122, 156}, {132, 167}, {147, 173}, {156, 176},
    {159, 170}, {145, 162}, {139, 155}, {131, 152}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT collarLines2[8] = {
    {178, 154}, {177, 158}, {173, 165}, {164, 173},
    {156, 176}, {159, 170}, {161, 154}, {177, 150}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT leftEyeOpened[11] = {
    {109, 101}, {111, 89}, {120, 79}, {132, 78},
    {142, 80}, {146, 89}, {145, 100}, {140, 108},
    {127, 111}, {118, 110}, {111, 106}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT leftEyebrow[15] = {
    {109, 103}, {111, 93}, {115, 85}, {121, 81},
    {127, 80}, {136, 80}, {140, 81}, {140, 79},
    {135, 77}, {128, 76}, {120, 78}, {113, 83},
    {110, 89}, {108, 95}, {108, 101}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT leftPupil[18] = {
    {128, 83}, {135, 83}, {139, 86}, {143, 90},
    {144, 96}, {142, 104}, {137, 108}, {129, 110},
    {123, 107}, {120, 101}, {120, 94}, {122, 90},
    {123, 92}, {126, 92}, {127, 90}, {128, 87},
    {126, 86}, {124, 86}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT leftEyeClosed[13] = {
    {110, 101}, {117, 98}, {127, 94}, {135, 93},
    {145, 94}, {145, 91}, {147, 90}, {138, 88},
    {128, 87}, {119, 89}, {113, 93}, {109, 96},
    {110, 99}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rightEyeOpened[11] = {
    {203, 82}, {196, 74}, {185, 71}, {175, 76},
    {174, 87}, {178, 97}, {184, 104}, {192, 105},
    {202, 101}, {205, 94}, {205, 87}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rightEyebrow[15] = {
    {174, 79}, {174, 74}, {181, 71}, {188, 69},
    {198, 73}, {204, 79}, {206, 85}, {206, 94},
    {205, 96}, {205, 89}, {201, 80}, {195, 75},
    {187, 72}, {180, 74}, {174, 79}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rightPupil[16] = {
    {185, 76}, {191, 77}, {196, 82}, {198, 89},
    {198, 98}, {190, 104}, {183, 102}, {176, 93},
    {177, 85}, {179, 80}, {179, 82}, {181, 84},
    {183, 84}, {185, 81}, {184, 79}, {182, 77}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rightEyeClosed[12] = {
    {178, 92}, {185, 89}, {193, 89}, {200, 90},
    {205, 92}, {203, 89}, {205, 88}, {198, 85},
    {191, 83}, {184, 84}, {175, 88}, {177, 90}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT leftBlush[10] = {
    {128, 113}, {118, 116}, {116, 120}, {119, 125},
    {124, 126}, {131, 123}, {136, 122}, {139, 119},
    {140, 115}, {136, 112}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rightBlush[10] = {
    {199, 105}, {207, 105}, {210, 107}, {212, 111},
    {209, 115}, {203, 117}, {197, 117}, {192, 114},
    {191, 110}, {193, 107}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT mouth[19] = {
    {142, 118}, {145, 119}, {151, 120}, {156, 120},
    {165, 117}, {170, 117}, {179, 118}, {187, 116},
    {189, 115}, {187, 116}, {189, 120}, {189, 128},
    {183, 140}, {170, 148}, {155, 148}, {145, 141},
    {141, 131}, {142, 123}, {145, 119}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT leftTooth[3] = {
    {146, 119}, {148, 124}, {151, 121}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rightTooth[3] = {
    {181, 118}, {183, 121}, {185, 117}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT yellowHeart[16] = {
    {91, 59}, {83, 58}, {76, 55}, {69, 50},
    {65, 41}, {63, 34}, {65, 31}, {68, 30},
    {77, 31}, {81, 24}, {85, 21}, {89, 22},
    {93, 27}, {95, 37}, {94, 49}, {92, 56}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT floatingEye[15] = {
    {269, 127}, {278, 131}, {285, 141}, {288, 149},
    {288, 157}, {284, 165}, {277, 172}, {268, 174},
    {258, 172}, {249, 165}, {245, 155}, {244, 145},
    {248, 136}, {253, 130}, {259, 127}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT cornea[15] = {
    {247, 151}, {255, 151}, {262, 148}, {269, 145},
    {274, 145}, {278, 147}, {282, 147}, {287, 148},
    {282, 153}, {279, 157}, {274, 159}, {267, 159},
    {260, 156}, {253, 154}, {248, 153}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT floatingEyePupil[10] = {
    {266, 147}, {269, 145}, {274, 145}, {278, 147},
    {279, 150}, {279, 154}, {278, 157}, {274, 159},
    {267, 159}, {266, 153}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT marisaSlings1[4] = {
    {123, 177}, {117, 159}, {124, 157}, {132, 176}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT marisaSlings2[6] = {
    {174, 177}, {178, 155}, {180, 155}, {185, 158},
    {185, 168}, {183, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT marisaHat[71] = {
    {63, 104}, {48, 102}, {31, 102}, {14, 99},
    {5, 97}, {1, 91}, {9, 83}, {19, 73},
    {28, 64}, {38, 54}, {50, 44}, {64, 35},
    {70, 30}, {63, 22}, {79, 17}, {81, 8},
    {81, 4}, {78, 0}, {66, 0}, {55, 9},
    {48, 17}, {44, 24}, {17, 38}, {30, 22},
    {31, 0}, {214, 0}, {222, 3}, {223, 4},
    {221, 10}, {244, 17}, {266, 22}, {281, 27},
    {291, 28}, {293, 29}, {294, 33}, {292, 35},
    {280, 45}, {261, 54}, {242, 62}, {231, 66},
    {230, 58}, {227, 47}, {225, 42}, {217, 38},
    {210, 33}, {204, 28}, {199, 26}, {193, 25},
    {189, 28}, {171, 28}, {167, 26}, {163, 24},
    {158, 24}, {149, 25}, {145, 26}, {135, 33},
    {135, 30}, {128, 34}, {118, 37}, {111, 38},
    {110, 37}, {100, 42}, {97, 48}, {93, 53},
    {87, 58}, {80, 62}, {72, 66}, {69, 66},
    {68, 78}, {71, 85}, {71, 94}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT marisaBow[71] = {
    {71, 86}, {64, 86}, {67, 79}, {65, 76},
    {61, 79}, {54, 75}, {57, 66}, {60, 61},
    {63, 58}, {71, 55}, {77, 53}, {73, 51},
    {74, 41}, {74, 35}, {69, 29}, {63, 22},
    {74, 19}, {96, 14}, {115, 11}, {126, 12},
    {130, 12}, {132, 9}, {141, 12}, {149, 7},
    {151, 7}, {152, 8}, {163, 4}, {173, 1},
    {192, 0}, {209, 1}, {222, 3}, {221, 9},
    {219, 16}, {222, 31}, {229, 33}, {234, 36},
    {235, 39}, {234, 42}, {231, 46}, {235, 51},
    {236, 54}, {231, 61}, {230, 58}, {227, 47},
    {225, 42}, {217, 38}, {210, 33}, {204, 28},
    {199, 26}, {193, 25}, {189, 28}, {171, 28},
    {167, 26}, {163, 24}, {158, 24}, {149, 25},
    {145, 26}, {135, 33}, {135, 30}, {128, 34},
    {118, 37}, {111, 38}, {110, 37}, {100, 42},
    {97, 48}, {93, 53}, {87, 58}, {80, 62},
    {72, 66}, {69, 66}, {68, 78}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT chenEarLeft[50] = {
    {67, 83}, {65, 82}, {64, 80}, {60, 80},
    {60, 76}, {61, 73}, {56, 75}, {55, 74},
    {56, 71}, {59, 67}, {53, 68}, {45, 67},
    {38, 61}, {46, 63}, {52, 63}, {46, 61},
    {41, 56}, {36, 47}, {37, 47}, {37, 41},
    {39, 41}, {36, 33}, {32, 15}, {31, 4},
    {31, 0}, {55, 0}, {66, 5}, {78, 8},
    {90, 12}, {100, 16}, {108, 23}, {115, 31},
    {109, 36}, {97, 40}, {87, 41}, {78, 39},
    {75, 39}, {69, 39}, {65, 37}, {70, 43},
    {76, 46}, {80, 47}, {73, 51}, {69, 57},
    {67, 62}, {68, 65}, {72, 62}, {77, 59},
    {72, 67}, {68, 75}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT chenEarRight[19] = {
    {229, 55}, {235, 48}, {231, 48}, {238, 43},
    {240, 41}, {235, 41}, {237, 35}, {238, 25},
    {235, 14}, {234, 22}, {232, 28}, {231, 11},
    {230, 0}, {205, 0}, {200, 8}, {200, 21},
    {211, 26}, {219, 35}, {225, 45}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT chenHatLittlePiece[13] = {
    {58, 96}, {55, 95}, {52, 87}, {52, 76},
    {53, 68}, {59, 67}, {56, 71}, {55, 74},
    {56, 75}, {61, 73}, {60, 76}, {60, 81},
    {58, 92}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT chenHat[32] = {
    {115, 31}, {108, 23}, {100, 16}, {90, 12},
    {78, 8}, {83, 2}, {87, 0}, {200, 0},
    {205, 5}, {208, 12}, {208, 17}, {211, 18},
    {213, 22}, {215, 28}, {214, 29}, {210, 25},
    {207, 23}, {203, 24}, {197, 22}, {188, 20},
    {182, 20}, {176, 22}, {169, 25}, {162, 27},
    {157, 26}, {154, 22}, {150, 22}, {143, 25},
    {136, 30}, {130, 32}, {124, 31}, {119, 31}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT chenClothes[21] = {
    {104, 177}, {112, 169}, {112, 164}, {116, 162},
    {116, 159}, {123, 155}, {130, 152}, {141, 154},
    {149, 163}, {156, 167}, {159, 175}, {160, 167},
    {166, 154}, {176, 153}, {184, 154}, {188, 157},
    {188, 159}, {185, 160}, {186, 163}, {193, 169},
    {198, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT cirnoBow[4] = {
    {146, 177}, {153, 169}, {159, 169}, {165, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT cirnoHat1[17] = {
    {67, 74}, {73, 59}, {77, 45}, {84, 35},
    {94, 26}, {106, 20}, {115, 18}, {123, 18},
    {129, 12}, {128, 13}, {106, 7}, {81, 1},
    {78, 19}, {78, 37}, {47, 60}, {19, 73},
    {55, 92}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT cirnoHat2[9] = {
    {142, 7}, {148, 7}, {155, 8}, {159, 10},
    {161, 8}, {172, 7}, {177, 8}, {177, 0},
    {151, 0}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT cirnoHat3[5] = {
    {210, 24}, {221, 37}, {229, 52}, {239, 39},
    {224, 31}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT cirnoIce1[6] = {
    {49, 126}, {22, 125}, {4, 98}, {37, 94},
    {48, 106}, {47, 116}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT cirnoIce2[7] = {
    {60, 159}, {33, 177}, {7, 163}, {35, 145},
    {47, 146}, {55, 149}, {56, 155}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT cirnoIce3[7] = {
    {224, 92}, {230, 87}, {268, 82}, {247, 112},
    {235, 114}, {234, 105}, {230, 98}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT cirnoIce4[4] = {
    {211, 158}, {249, 136}, {280, 149}, {261, 169}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT nazrinClothes[15] = {
    {104, 177}, {112, 168}, {112, 164}, {127, 151},
    {133, 152}, {138, 153}, {144, 158}, {150, 160},
    {156, 160}, {159, 158}, {161, 155}, {165, 155},
    {177, 152}, {193, 166}, {197, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT nazrinClothesLines[23] = {
    {133, 152}, {138, 153}, {144, 158}, {150, 160},
    {156, 160}, {159, 158}, {161, 155}, {165, 155},
    {163, 160}, {160, 163}, {160, 169}, {163, 174},
    {165, 177}, {158, 177}, {155, 170}, {154, 165},
    {155, 170}, {153, 177}, {147, 177}, {149, 170},
    {149, 164}, {142, 162}, {136, 158}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT nazrinEarLeft[18] = {
    {64, 87}, {66, 78}, {67, 65}, {74, 47},
    {84, 34}, {96, 25}, {109, 19}, {114, 17},
    {108, 6}, {99, 0}, {67, 0}, {53, 7},
    {43, 17}, {36, 31}, {36, 46}, {39, 60},
    {44, 73}, {51, 80}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT nazrinEarLeftInside[12] = {
    {67, 70}, {74, 47}, {84, 34}, {98, 24},
    {89, 17}, {78, 14}, {66, 17}, {57, 25},
    {51, 38}, {50, 47}, {51, 53}, {59, 63}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT nazrinEarRight[12] = {
    {174, 8}, {201, 18}, {216, 31}, {225, 42},
    {231, 58}, {232, 64}, {241, 52}, {244, 37},
    {242, 21}, {238, 6}, {235, 0}, {177, 0}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT nazrinEarRightInside[12] = {
    {187, 11}, {201, 18}, {216, 31}, {226, 44},
    {230, 33}, {230, 21}, {224, 8}, {216, 2},
    {208, 0}, {198, 1}, {191, 5}, {189, 8},
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rumiaClothes[16] = {
    {107, 177}, {112, 170}, {114, 167}, {114, 164},
    {124, 155}, {130, 151}, {140, 153}, {147, 161},
    {163, 160}, {165, 154}, {175, 153}, {179, 152},
    {185, 158}, {192, 165}, {195, 172}, {197, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rumiaSlings1[6] = {
    {123, 177}, {120, 167}, {117, 160}, {123, 156},
    {131, 164}, {139, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rumiaSlings2[6] = {
    {178, 177}, {179, 165}, {179, 154}, {186, 160},
    {186, 169}, {185, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rumiaBow1[4] = {
    {213, 27}, {221, 17}, {234, 33}, {223, 41}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rumiaBow2[4] = {
    {225, 44}, {238, 41}, {240, 62}, {231, 61}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rumiaBow1W[4] = {
    {221, 17}, {226, 11}, {241, 28}, {234, 33}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rumiaBow2W[4] = {
    {238, 41}, {244, 39}, {247, 63}, {240, 62}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
const POINT rumiaRedTriangle[3] = {
    {159, 168}, {150, 177}, {168, 177}
};

//!     @ingroup Arrays
//!     \brief  POINT массив
POINT satoriProfileT[63];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT marisaProfileT[74];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT chenProfileT[67];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT cirnoProfileT[75];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT faceShapeT[68];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT satoriClothesT[21];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT marisaClothesT[26];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT collarT[27];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT collarLines1T[8];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT collarLines2T[8];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT leftEyeOpenedT[11];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT leftEyebrowT[15];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT leftPupilT[18];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT leftEyeClosedT[13];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rightEyeOpenedT[11];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rightEyebrowT[15];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rightPupilT[16];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rightEyeClosedT[12];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT leftBlushT[10];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rightBlushT[10];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT mouthT[19];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT leftToothT[3];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rightToothT[3];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT yellowHeartT[16];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT floatingEyeT[15];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT corneaT[15];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT floatingEyePupilT[10];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT marisaSlings1T[4];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT marisaSlings2T[6];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT marisaHatT[71];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT marisaBowT[71];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT chenEarLeftT[50];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT chenEarRightT[19];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT chenHatLittlePieceT[13];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT chenHatT[32];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT chenClothesT[21];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT cirnoBowT[4];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT cirnoHat1T[17];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT cirnoHat2T[9];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT cirnoHat3T[5];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT cirnoIce1T[6];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT cirnoIce2T[7];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT cirnoIce3T[7];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT cirnoIce4T[4];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT nazrinProfileT[65];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT nazrinClothesT[15];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT nazrinClothesLinesT[23];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT nazrinEarLeftT[18];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT nazrinEarLeftInsideT[12];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT nazrinEarRightT[12];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT nazrinEarRightInsideT[12];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rumiaClothesT[16];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rumiaSlings1T[6];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rumiaSlings2T[6];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rumiaBow1T[4];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rumiaBow2T[4];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rumiaBow1WT[4];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rumiaBow2WT[4];
//!     @ingroup Arrays
//!     \brief  POINT массив
POINT rumiaRedTriangleT[3];

/*!
    @ingroup Drawing
	\brief Функция отрисовки персонажа

    Данная функция используется для отрисовки персонажа с указанием его имени, координат на полотне, размера и пеерключаемых параметров
    по вашему желанию.
*/
//! @param   characterName              Имя персонажа из списка на главной странице.
//! @param   x                          Координата X начальной точки изображения.
//! @param   y                          Координата Y начальной точки изображения.
//! @param   size                       Множитель размера персонажа относительно стандартного (300x177).
//! @param   accessoiresAreVisible      <i>Переключаемый параметр отображения аксессуаров. Необязателен.
//!                                     Если не указан - присваивается значение true (отрисовка аксессуаров).</i>
//! @param   eyesClosed                 <i>Переключаемый параметр состояния глаз. Необязателен.
//!                                     Если не указан - присваивается значение false (отрисовка открытых глаз).</i>
//! @param   mouthOpened                <i>Переключаемый параметр состояния рта. Необязателен.
//!                                     Если не указан - присваивается значение true (отрисовка открытого рта).</i>
//! @param   eyebrowVisible             <i>Переключаемый параметр отображения бровей. Необязателен.
//!                                     Если не указан - присваивается значение true (отрисовка бровей).</i>
//! @param   blushVisible               <i>Переключаемый параметр отображения румянца. Необязателен.
//!                                     Если не указан - присваивается значение true (отрисовка румянца).</i>
//! @param   hairColor                  <i>Параметр цвета волос. Необязателен.
//!                                     Если не указан - присваивается стандартное значение для персонажа.</i>
//! @param   clotherColor               <i>Параметр цвета одежды. Необязателен.
//!                                     Если не указан - присваивается стандартное значение для персонажа.</i>
//! @param   eyesColor                  <i>Параметр цвета глаз. Необязателен.
//!                                     Если не указан - присваивается стандартное значение для персонажа.</i>
//! @param   yMultiplierAbs             <b>(НОВОЕ)</b> <i>Переключаемый параметр отражения Y оси при отрицательном значении size. Необязателен.
//!                                     Если не указан - присваивается true (Y ось не отражается).</i>
//!
//! @note   Используйте отрицательное значение параметра size и изменяйте параметр yMultiplierAbs для поворота персонажа относительно начальной точки.
//!
//! @code
//!         #include "TXLib.h"
//!         #include "THGLib.h"
//!
//!         using namespace std;
//!
//!         int main() {
//!             txCreateWindow(600, 354); //Создаем окно 600x354 пикселей
//!             clearScreen(); //Очищаем экран
//!             drawCharacter("Cirno", 0, 0, 1); //Рисуем стандартную Сирно на координатах x = 0, y = 0
//!             Sleep(1000);
//!             clearScreen();
//!             drawCharacter("Chen", 0, 0, 2, true, false, false, true, true, RGB (134, 212, 76), RGB (0, 183, 164), RGB (172, 123, 193)); //Рисуем кастомную Чэнь
//!         }
//! @endcode
void drawCharacter(
    string characterName,
    int x,
    int y,
    double size,
    bool accessoiresAreVisible = true,
    bool eyesClosed = false,
    bool mouthOpened = true,
    bool eyebrowVisible = true,
    bool blushVisible = true,
    COLORREF hairColor = 0,
    COLORREF clothesColor = 0,
    COLORREF eyesColor = 0,
    bool yMultiplierAbs = false
    );

/*!
    @ingroup Drawing
	\brief Функция очистки экрана

    Данная функция используется быстрой очистки экрана в определенный цвет.
*/
//! @param   fillColor                  <i>Параметр цвета фона после очистки. Необязателен.
//!                                     Если не указан - фон окрашивается в белый цвет.</i>
//! @param   brushColor                  <i>Параметр цвета кисти после очистки. Необязателен.
//!                                     Если не указан - кисть красит в черный цвет.</i>
//!
//! @code
//!         #include "TXLib.h"
//!         #include "THGLib.h"
//!
//!         using namespace std;
//!
//!         int main() {
//!             txCreateWindow(600, 354); //Создаем окно 600x354 пикселей
//!             clearScreen(); //Очищаем экран
//!             drawCharacter("Cirno", 0, 0, 1);
//!             Sleep(1000);
//!             clearScreen(RGB (123, 194, 148), RGB (124, 43, 207)); //Очищаем экран в кастомный цвет фона и меняем цвет кисти
//!             drawCharacter("Chen", 0, 0, 2);
//!         }
//! @endcode
void clearScreen(
    COLORREF fillColor = RGB (255, 255, 255),
    COLORREF brushColor = RGB (0, 0, 0)
    );

/*!
    @ingroup Local
	\brief Функция изменения размера и расположения персонажа на полотне

    Данная функция является внутренней и используется для изменения размера изображения с персонажем и перемещения его на полотне.
    @warning Вызывать данную функцию вручную не рекомендуется (да и не имеет смысла).
*/
//! @param   x                  Наследуемая от drawCharacter координата X начальной точки изображения.
//! @param   y                  Наследуемая от drawCharacter координата Y начальной точки изображения.
//! @param   size               Наследуемый от drawCharacter множитель размера персонажа относительно стандартного (300x177).
//! @param   yMultiplierAbs     <b>(НОВОЕ)</b> Наследуемый от drawCharacter переключаемый параметр отражения Y оси при отрицательном значении size.
void replaceAndResizeCharacter(int x, int y, double size, bool yMultiplierAbs);

/*!
    @ingroup Local
	\brief Функция отрисовки заготовки "тела" Сатори Комейдзи

    Данная функция является внутренней и используется для отрисовки тела Сатори Комейдзи для последующего наложения остальных элементов.
    @warning Вызывать данную функцию вручную не рекомендуется (да и не имеет смысла).
*/
//! @param   hairColor          Наследуемый от drawCharacter цвет волос персонажа.
//! @param   clothesColor       Наследуемый от drawCharacter цвет одежды персонажа.
//! @param   x                  Наследуемая от drawCharacter координата X начальной точки изображения.
//! @param   y                  Наследуемая от drawCharacter координата Y начальной точки изображения.
//! @param   size               Наследуемый от drawCharacter множитель размера персонажа относительно стандартного (300x177).
//! @param   yMultiplierAbs     <b>(НОВОЕ)</b> Наследуемый от drawCharacter переключаемый параметр отражения Y оси при отрицательном значении size.
void satoriBody(COLORREF hairColor, COLORREF clothesColor, int x, int y, double size, bool yMultiplierAbs);

/*!
    @ingroup Local
	\brief Функция отрисовки заготовки "тела" Марисы Кирисаме

    Данная функция является внутренней и используется для отрисовки тела Марисы Кирисаме для последующего наложения остальных элементов.
    @warning Вызывать данную функцию вручную не рекомендуется (да и не имеет смысла).
*/
//! @param   hairColor          Наследуемый от drawCharacter цвет волос персонажа.
//! @param   clothesColor       Наследуемый от drawCharacter цвет одежды персонажа.
//! @param   x                  Наследуемая от drawCharacter координата X начальной точки изображения.
//! @param   y                  Наследуемая от drawCharacter координата Y начальной точки изображения.
//! @param   size               Наследуемый от drawCharacter множитель размера персонажа относительно стандартного (300x177).
//! @param   yMultiplierAbs     <b>(НОВОЕ)</b> Наследуемый от drawCharacter переключаемый параметр отражения Y оси при отрицательном значении size.
void marisaBody(COLORREF hairColor, COLORREF clothesColor, int x, int y, double size, bool yMultiplierAbs);

/*!
    @ingroup Local
	\brief Функция отрисовки заготовки "тела" Чэнь

    Данная функция является внутренней и используется для отрисовки тела Чэнь для последующего наложения остальных элементов.
    @warning Вызывать данную функцию вручную не рекомендуется (да и не имеет смысла).
*/
//! @param   hairColor          Наследуемый от drawCharacter цвет волос персонажа.
//! @param   clothesColor       Наследуемый от drawCharacter цвет одежды персонажа.
//! @param   x                  Наследуемая от drawCharacter координата X начальной точки изображения.
//! @param   y                  Наследуемая от drawCharacter координата Y начальной точки изображения.
//! @param   size               Наследуемый от drawCharacter множитель размера персонажа относительно стандартного (300x177).
//! @param   yMultiplierAbs     <b>(НОВОЕ)</b> Наследуемый от drawCharacter переключаемый параметр отражения Y оси при отрицательном значении size.
void chenBody(COLORREF hairColor, COLORREF clothesColor, int x, int y, double size, bool yMultiplierAbs);

/*!
    @ingroup Local
	\brief Функция отрисовки заготовки "тела" Сирно

    Данная функция является внутренней и используется для отрисовки тела Сирно для последующего наложения остальных элементов.
    @warning Вызывать данную функцию вручную не рекомендуется (да и не имеет смысла).
*/
//! @param   hairColor          Наследуемый от drawCharacter цвет волос персонажа.
//! @param   clothesColor       Наследуемый от drawCharacter цвет одежды персонажа.
//! @param   x                  Наследуемая от drawCharacter координата X начальной точки изображения.
//! @param   y                  Наследуемая от drawCharacter координата Y начальной точки изображения.
//! @param   size               Наследуемый от drawCharacter множитель размера персонажа относительно стандартного (300x177).
//! @param   yMultiplierAbs     <b>(НОВОЕ)</b> Наследуемый от drawCharacter переключаемый параметр отражения Y оси при отрицательном значении size.
void cirnoBody(COLORREF hairColor, COLORREF clothesColor, int x, int y, double size, bool yMultiplierAbs);

/*!
    @ingroup Local
	\brief Функция отрисовки заготовки "тела" Назрин

    Данная функция является внутренней и используется для отрисовки тела Назрин для последующего наложения остальных элементов.
    @warning Вызывать данную функцию вручную не рекомендуется (да и не имеет смысла).
*/
//! @param   hairColor          Наследуемый от drawCharacter цвет волос персонажа.
//! @param   clothesColor       Наследуемый от drawCharacter цвет одежды персонажа.
void nazrinBody(COLORREF hairColor, COLORREF clothesColor);

/*!
    @ingroup Local
	\brief Функция отрисовки заготовки "тела" Румии

    Данная функция является внутренней и используется для отрисовки тела Румии для последующего наложения остальных элементов.
    @warning Вызывать данную функцию вручную не рекомендуется (да и не имеет смысла).
*/
//! @param   hairColor          Наследуемый от drawCharacter цвет волос персонажа.
//! @param   clothesColor       Наследуемый от drawCharacter цвет одежды персонажа.
//! @param   x                  Наследуемая от drawCharacter координата X начальной точки изображения.
//! @param   y                  Наследуемая от drawCharacter координата Y начальной точки изображения.
//! @param   size               Наследуемый от drawCharacter множитель размера персонажа относительно стандартного (300x177).
//! @param   yMultiplierAbs     <b>(НОВОЕ)</b> Наследуемый от drawCharacter переключаемый параметр отражения Y оси при отрицательном значении size.
void rumiaBody(COLORREF hairColor, COLORREF clothesColor, int x, int y, double size, bool yMultiplierAbs);

/*!
    @ingroup Local
	\brief Функция отрисовки глаз персонажа.

    Данная функция является внутренней и используется для отрисовки глаз персонажа.
    @warning Вызывать данную функцию вручную не рекомендуется (да и не имеет смысла).
*/
//! @param   eyesClosed        Наследуемый от drawCharacter переключаемый параметр состояния глаз.
//! @param   eyesColor         Наследуемый от drawCharacter параметр цвета глаз.
void drawEyes(bool eyesClosed, COLORREF eyesColor);

void clearScreen(COLORREF fillColor, COLORREF brushColor) {
    txSetFillColor(fillColor);
    txSetColor(brushColor);
    txClear();
}

void drawCharacter(
    string characterName,
    int x,
    int y,
    double size,
    bool accessoiresAreVisible,
    bool eyesClosed,
    bool mouthOpened,
    bool eyebrowVisible,
    bool blushVisible,
    COLORREF hairColor,
    COLORREF clothesColor,
    COLORREF eyesColor,
    bool yMultiplierAbs
    ) {
    int characterNum = 0;
    txSetFillColor(RGB (255, 255, 255));
    txSetColor(RGB (0, 0, 0));

    replaceAndResizeCharacter(x, y, size, yMultiplierAbs);
    if (characterName == "Satori") characterNum = 0;
    if (characterName == "Marisa") characterNum = 1;
    if (characterName == "Chen") characterNum = 2;
    if (characterName == "Cirno") characterNum = 3;
    if (characterName == "Nazrin") characterNum = 4;
    if (characterName == "Rumia") characterNum = 5; 

    switch (characterNum) {
        case 0:
            if (hairColor == 0) hairColor = RGB (255, 214, 253);
            if (clothesColor == 0) clothesColor = RGB (202, 255, 252);
            if (eyesColor == 0) eyesColor = RGB (189, 109, 255);
            satoriBody(hairColor, clothesColor, x, y, size, yMultiplierAbs);
            break;
        case 1:
            if (hairColor == 0) hairColor = RGB (253, 223, 11);
            if (clothesColor == 0) clothesColor = RGB (83, 86, 86);
            if (eyesColor == 0) eyesColor = RGB (255, 201, 14);
            marisaBody(hairColor, clothesColor, x, y, size, yMultiplierAbs);
            break;
        case 2:
            if (hairColor == 0) hairColor = RGB (137, 59, 0);
            if (clothesColor == 0) clothesColor = RGB (255, 14, 0);
            if (eyesColor == 0) eyesColor = RGB (80, 22, 0);
            chenBody(hairColor, clothesColor, x, y, size, yMultiplierAbs);
            break;
        case 3:
            if (hairColor == 0) hairColor = RGB (143, 234, 244);
            if (clothesColor == 0) clothesColor = RGB (130, 153, 225);
            if (eyesColor == 0) eyesColor = RGB (95, 224, 239);
            cirnoBody(hairColor, clothesColor, x, y, size, yMultiplierAbs);
            break;
        case 4:
            if (hairColor == 0) hairColor = RGB (166, 153, 149);
            if (clothesColor == 0) clothesColor = RGB (175, 238, 236);
            if (eyesColor == 0) eyesColor = RGB (255, 13, 34);
            nazrinBody(hairColor, clothesColor);
            break;
        case 5:
            if (hairColor == 0) hairColor = RGB (253, 180, 32);
            if (clothesColor == 0) clothesColor = RGB (68, 45, 48);
            if (eyesColor == 0) eyesColor = RGB (255, 13, 34);
            rumiaBody(hairColor, clothesColor, x, y, size, yMultiplierAbs);
            break;
        default:
            break;
    }

    drawEyes(eyesClosed, eyesColor);

    txSetPixel(x+(167*size), y+(105*((yMultiplierAbs)?size:abs(size))), RGB (0, 0, 0));

    if (blushVisible) {
        txSetFillColor(RGB (255, 206, 187));
        txSetColor(RGB (255, 206, 187));
        txPolygon(leftBlushT, 10);
        txPolygon(rightBlushT, 10);
    }

    txSetColor(RGB (0, 0, 0));
    if (mouthOpened) {
        txSetFillColor(RGB (231, 121, 90));
        txPolygon(mouthT, 19);
        txSetFillColor(RGB (255, 255, 255));
        txPolygon(leftToothT, 3);
        txPolygon(rightToothT, 3);
    }
    else {
        txLine(x+(155*size), y+(123*((yMultiplierAbs)?size:abs(size))), x+(157*size), y+(125*((yMultiplierAbs)?size:abs(size))));
        txLine(x+(157*size), y+(125*((yMultiplierAbs)?size:abs(size))), x+(158*size), y+(130*((yMultiplierAbs)?size:abs(size))));
        txLine(x+(158*size), y+(130*((yMultiplierAbs)?size:abs(size))), x+(156*size), y+(132*((yMultiplierAbs)?size:abs(size))));
        txLine(x+(158*size), y+(127*((yMultiplierAbs)?size:abs(size))), x+(164*size), y+(127*((yMultiplierAbs)?size:abs(size))));
        txLine(x+(164*size), y+(127*((yMultiplierAbs)?size:abs(size))), x+(168*size), y+(126*((yMultiplierAbs)?size:abs(size))));
        txLine(x+(168*size), y+(126*((yMultiplierAbs)?size:abs(size))), x+(169*size), y+(124*((yMultiplierAbs)?size:abs(size))));
    }

    if (eyebrowVisible) {
        txSetColor(RGB (47, 47, 47), 1);
        txLine(x+(107*size), y+(55*((yMultiplierAbs)?size:abs(size))), x+(139*size), y+(75*((yMultiplierAbs)?size:abs(size))));
        txLine(x+(196*size), y+(47*((yMultiplierAbs)?size:abs(size))), x+(168*size), y+(75*((yMultiplierAbs)?size:abs(size))));
    }
    txSetColor(RGB (0, 0, 0));

    if (accessoiresAreVisible) {
        switch (characterNum) {
            case 0:
                txSetColor(RGB (172, 138, 140), 2);
                txLine(x+(56*size), y+(177*((yMultiplierAbs)?size:abs(size))), x+(56*size), y+(166*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(56*size), y+(166*((yMultiplierAbs)?size:abs(size))), x+(58*size), y+(159*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(58*size), y+(159*((yMultiplierAbs)?size:abs(size))), x+(62*size), y+(156*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(56*size), y+(92*((yMultiplierAbs)?size:abs(size))), x+(47*size), y+(88*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(47*size), y+(88*((yMultiplierAbs)?size:abs(size))), x+(41*size), y+(82*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(41*size), y+(82*((yMultiplierAbs)?size:abs(size))), x+(34*size), y+(62*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(34*size), y+(62*((yMultiplierAbs)?size:abs(size))), x+(33*size), y+(47*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(33*size), y+(47*((yMultiplierAbs)?size:abs(size))), x+(37*size), y+(33*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(37*size), y+(33*((yMultiplierAbs)?size:abs(size))), x+(46*size), y+(22*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(46*size), y+(22*((yMultiplierAbs)?size:abs(size))), x+(52*size), y+(19*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(52*size), y+(19*((yMultiplierAbs)?size:abs(size))), x+(57*size), y+(19*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(57*size), y+(19*((yMultiplierAbs)?size:abs(size))), x+(67*size), y+(22*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(67*size), y+(22*((yMultiplierAbs)?size:abs(size))), x+(73*size), y+(26*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(73*size), y+(26*((yMultiplierAbs)?size:abs(size))), x+(77*size), y+(30*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(234*size), y+(108*((yMultiplierAbs)?size:abs(size))), x+(242*size), y+(109*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(242*size), y+(109*((yMultiplierAbs)?size:abs(size))), x+(253*size), y+(107*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(253*size), y+(107*((yMultiplierAbs)?size:abs(size))), x+(265*size), y+(101*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(265*size), y+(101*((yMultiplierAbs)?size:abs(size))), x+(275*size), y+(93*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(275*size), y+(93*((yMultiplierAbs)?size:abs(size))), x+(288*size), y+(71*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(288*size), y+(71*((yMultiplierAbs)?size:abs(size))), x+(290*size), y+(59*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(290*size), y+(59*((yMultiplierAbs)?size:abs(size))), x+(287*size), y+(53*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(287*size), y+(53*((yMultiplierAbs)?size:abs(size))), x+(280*size), y+(50*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(280*size), y+(50*((yMultiplierAbs)?size:abs(size))), x+(274*size), y+(52*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(274*size), y+(52*((yMultiplierAbs)?size:abs(size))), x+(270*size), y+(57*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(270*size), y+(57*((yMultiplierAbs)?size:abs(size))), x+(270*size), y+(50*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(270*size), y+(50*((yMultiplierAbs)?size:abs(size))), x+(265*size), y+(46*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(265*size), y+(46*((yMultiplierAbs)?size:abs(size))), x+(257*size), y+(46*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(257*size), y+(46*((yMultiplierAbs)?size:abs(size))), x+(250*size), y+(54*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(250*size), y+(54*((yMultiplierAbs)?size:abs(size))), x+(248*size), y+(64*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(248*size), y+(64*((yMultiplierAbs)?size:abs(size))), x+(248*size), y+(76*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(248*size), y+(76*((yMultiplierAbs)?size:abs(size))), x+(252*size), y+(90*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(252*size), y+(90*((yMultiplierAbs)?size:abs(size))), x+(257*size), y+(100*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(257*size), y+(100*((yMultiplierAbs)?size:abs(size))), x+(266*size), y+(116*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(266*size), y+(116*((yMultiplierAbs)?size:abs(size))), x+(274*size), y+(123*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(274*size), y+(123*((yMultiplierAbs)?size:abs(size))), x+(278*size), y+(128*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(278*size), y+(128*((yMultiplierAbs)?size:abs(size))), x+(279*size), y+(132*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(218*size), y+(177*((yMultiplierAbs)?size:abs(size))), x+(227*size), y+(162*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(227*size), y+(162*((yMultiplierAbs)?size:abs(size))), x+(236*size), y+(150*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(236*size), y+(150*((yMultiplierAbs)?size:abs(size))), x+(242*size), y+(143*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(242*size), y+(143*((yMultiplierAbs)?size:abs(size))), x+(244*size), y+(142*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(229*size), y+(177*((yMultiplierAbs)?size:abs(size))), x+(238*size), y+(165*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(238*size), y+(165*((yMultiplierAbs)?size:abs(size))), x+(243*size), y+(161*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(243*size), y+(161*((yMultiplierAbs)?size:abs(size))), x+(246*size), y+(160*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(263*size), y+(177*((yMultiplierAbs)?size:abs(size))), x+(264*size), y+(174*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(290*size), y+(176*((yMultiplierAbs)?size:abs(size))), x+(287*size), y+(167*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(287*size), y+(167*((yMultiplierAbs)?size:abs(size))), x+(284*size), y+(165*((yMultiplierAbs)?size:abs(size))));
                txSetColor(RGB (172, 138, 140), 1);
                txSetFillColor(RGB (255, 255, 1));
                txPolygon(yellowHeartT, 16);
                txSetColor(RGB (0, 0, 0));
                txSetFillColor(RGB (225, 71, 91));
                txPolygon(floatingEyeT, 15);
                txSetFillColor(RGB (255, 255, 255));
                txPolygon(corneaT, 15);
                txSetFillColor(RGB (192, 111, 247));
                txPolygon(floatingEyePupilT, 10);
                break;
            case 1:
                txSetFillColor(RGB (83, 86, 86));
                txPolygon(marisaHatT, 71);
                txSetFillColor(RGB (232, 243, 255));
                txPolygon(marisaBowT, 71);
                txLine(x+(69*size), y+(81*((yMultiplierAbs)?size:abs(size))), x+(65*size), y+(76*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(65*size), y+(76*((yMultiplierAbs)?size:abs(size))), x+(68*size), y+(74*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(68*size), y+(66*((yMultiplierAbs)?size:abs(size))), x+(63*size), y+(58*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(77*size), y+(53*((yMultiplierAbs)?size:abs(size))), x+(86*size), y+(53*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(86*size), y+(53*((yMultiplierAbs)?size:abs(size))), x+(91*size), y+(50*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(91*size), y+(50*((yMultiplierAbs)?size:abs(size))), x+(94*size), y+(52*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(91*size), y+(50*((yMultiplierAbs)?size:abs(size))), x+(89*size), y+(47*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(89*size), y+(47*((yMultiplierAbs)?size:abs(size))), x+(94*size), y+(40*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(94*size), y+(40*((yMultiplierAbs)?size:abs(size))), x+(103*size), y+(32*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(103*size), y+(32*((yMultiplierAbs)?size:abs(size))), x+(110*size), y+(29*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(110*size), y+(29*((yMultiplierAbs)?size:abs(size))), x+(111*size), y+(36*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(110*size), y+(29*((yMultiplierAbs)?size:abs(size))), x+(126*size), y+(30*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(126*size), y+(30*((yMultiplierAbs)?size:abs(size))), x+(134*size), y+(28*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(134*size), y+(28*((yMultiplierAbs)?size:abs(size))), x+(134*size), y+(31*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(134*size), y+(28*((yMultiplierAbs)?size:abs(size))), x+(135*size), y+(23*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(135*size), y+(23*((yMultiplierAbs)?size:abs(size))), x+(133*size), y+(20*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(133*size), y+(20*((yMultiplierAbs)?size:abs(size))), x+(131*size), y+(24*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(131*size), y+(24*((yMultiplierAbs)?size:abs(size))), x+(104*size), y+(20*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(133*size), y+(20*((yMultiplierAbs)?size:abs(size))), x+(129*size), y+(16*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(129*size), y+(16*((yMultiplierAbs)?size:abs(size))), x+(130*size), y+(12*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(135*size), y+(23*((yMultiplierAbs)?size:abs(size))), x+(140*size), y+(21*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(140*size), y+(21*((yMultiplierAbs)?size:abs(size))), x+(140*size), y+(13*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(140*size), y+(21*((yMultiplierAbs)?size:abs(size))), x+(145*size), y+(20*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(145*size), y+(20*((yMultiplierAbs)?size:abs(size))), x+(144*size), y+(15*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(144*size), y+(15*((yMultiplierAbs)?size:abs(size))), x+(141*size), y+(13*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(145*size), y+(20*((yMultiplierAbs)?size:abs(size))), x+(153*size), y+(17*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(153*size), y+(17*((yMultiplierAbs)?size:abs(size))), x+(152*size), y+(9*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(153*size), y+(17*((yMultiplierAbs)?size:abs(size))), x+(166*size), y+(13*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(166*size), y+(13*((yMultiplierAbs)?size:abs(size))), x+(176*size), y+(12*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(153*size), y+(17*((yMultiplierAbs)?size:abs(size))), x+(167*size), y+(17*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(167*size), y+(17*((yMultiplierAbs)?size:abs(size))), x+(167*size), y+(26*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(167*size), y+(23*((yMultiplierAbs)?size:abs(size))), x+(173*size), y+(25*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(173*size), y+(25*((yMultiplierAbs)?size:abs(size))), x+(193*size), y+(18*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(193*size), y+(18*((yMultiplierAbs)?size:abs(size))), x+(194*size), y+(22*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(194*size), y+(22*((yMultiplierAbs)?size:abs(size))), x+(193*size), y+(25*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(193*size), y+(18*((yMultiplierAbs)?size:abs(size))), x+(203*size), y+(20*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(203*size), y+(20*((yMultiplierAbs)?size:abs(size))), x+(214*size), y+(23*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(214*size), y+(23*((yMultiplierAbs)?size:abs(size))), x+(215*size), y+(27*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(215*size), y+(27*((yMultiplierAbs)?size:abs(size))), x+(215*size), y+(30*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(215*size), y+(30*((yMultiplierAbs)?size:abs(size))), x+(214*size), y+(35*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(215*size), y+(30*((yMultiplierAbs)?size:abs(size))), x+(222*size), y+(32*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(224*size), y+(41*((yMultiplierAbs)?size:abs(size))), x+(231*size), y+(34*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(228*size), y+(48*((yMultiplierAbs)?size:abs(size))), x+(231*size), y+(46*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(230*size), y+(53*((yMultiplierAbs)?size:abs(size))), x+(235*size), y+(52*((yMultiplierAbs)?size:abs(size))));
                break;
            case 2:
                txSetFillColor(RGB (0, 142, 0));
                txPolygon(chenHatLittlePieceT, 13);
                txPolygon(chenHatT, 32);
                txLine(x+(210*size), y+(18*((yMultiplierAbs)?size:abs(size))), x+(204*size), y+(18*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(204*size), y+(18*((yMultiplierAbs)?size:abs(size))), x+(196*size), y+(17*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(196*size), y+(17*((yMultiplierAbs)?size:abs(size))), x+(190*size), y+(12*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(190*size), y+(12*((yMultiplierAbs)?size:abs(size))), x+(184*size), y+(12*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(184*size), y+(12*((yMultiplierAbs)?size:abs(size))), x+(169*size), y+(20*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(169*size), y+(20*((yMultiplierAbs)?size:abs(size))), x+(164*size), y+(21*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(164*size), y+(21*((yMultiplierAbs)?size:abs(size))), x+(160*size), y+(21*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(160*size), y+(21*((yMultiplierAbs)?size:abs(size))), x+(152*size), y+(15*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(152*size), y+(15*((yMultiplierAbs)?size:abs(size))), x+(147*size), y+(14*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(147*size), y+(14*((yMultiplierAbs)?size:abs(size))), x+(138*size), y+(25*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(138*size), y+(25*((yMultiplierAbs)?size:abs(size))), x+(129*size), y+(30*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(129*size), y+(30*((yMultiplierAbs)?size:abs(size))), x+(123*size), y+(29*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(123*size), y+(29*((yMultiplierAbs)?size:abs(size))), x+(117*size), y+(25*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(117*size), y+(25*((yMultiplierAbs)?size:abs(size))), x+(115*size), y+(25*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(115*size), y+(25*((yMultiplierAbs)?size:abs(size))), x+(113*size), y+(27*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(210*size), y+(18*((yMultiplierAbs)?size:abs(size))), x+(206*size), y+(22*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(196*size), y+(17*((yMultiplierAbs)?size:abs(size))), x+(197*size), y+(20*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(197*size), y+(20*((yMultiplierAbs)?size:abs(size))), x+(200*size), y+(22*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(184*size), y+(12*((yMultiplierAbs)?size:abs(size))), x+(171*size), y+(23*((yMultiplierAbs)?size:abs(size))));
                txLine(x+(160*size), y+(21*((yMultiplierAbs)?size:abs(size))), x+(166*size), y+(26*((yMultiplierAbs)?size:abs(size))));
                break;
            case 3:
                txSetFillColor(clothesColor);
                txPolygon(cirnoHat1T, 17);
                txPolygon(cirnoHat2T, 9);
                txPolygon(cirnoHat3T, 5);
                txLine(x+(78*size), y+(37*((yMultiplierAbs)?size:abs(size))), x+(79*size), y+(42*((yMultiplierAbs)?size:abs(size))));

                txSetFillColor(RGB (198, 243, 254));
                txPolygon(cirnoIce1T, 6);
                txPolygon(cirnoIce2T, 7);
                txPolygon(cirnoIce3T, 7);
                txPolygon(cirnoIce4T, 4);
                break;
            case 5:
                txSetFillColor(RGB (255, 122, 92));
                txPolygon(rumiaBow1T, 4);
                txPolygon(rumiaBow2T, 4);
                txSetFillColor(RGB (255, 255, 255));
                txPolygon(rumiaBow1WT, 4);
                txPolygon(rumiaBow2WT, 4);
                break;
            default:
                break;
        }
    }
}

void replaceAndResizeCharacter(int x, int y, double size, bool yMultiplierAbs) {
    for (int count = 0; count < 63; count++) {
        satoriProfileT[count].x = (long)(x + ((double)satoriProfile[count].x * size));
        satoriProfileT[count].y = (long)(y + ((double)satoriProfile[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 68; count++) {
        faceShapeT[count].x = (long)(x + ((double)faceShape[count].x * size));
        faceShapeT[count].y = (long)(y + ((double)faceShape[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 21; count++) {
        satoriClothesT[count].x = (long)(x + ((double)satoriClothes[count].x * size));
        satoriClothesT[count].y = (long)(y + ((double)satoriClothes[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 27; count++) {
        collarT[count].x = (long)(x + ((double)collar[count].x * size));
        collarT[count].y = (long)(y + ((double)collar[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 8; count++) {
        collarLines1T[count].x = (long)(x + ((double)collarLines1[count].x * size));
        collarLines1T[count].y = (long)(y + ((double)collarLines1[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 8; count++) {
        collarLines2T[count].x = (long)(x + ((double)collarLines2[count].x * size));
        collarLines2T[count].y = (long)(y + ((double)collarLines2[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 11; count++) {
        leftEyeOpenedT[count].x = (long)(x + ((double)leftEyeOpened[count].x * size));
        leftEyeOpenedT[count].y = (long)(y + ((double)leftEyeOpened[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 15; count++) {
        leftEyebrowT[count].x = (long)(x + ((double)leftEyebrow[count].x * size));
        leftEyebrowT[count].y = (long)(y + ((double)leftEyebrow[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 11; count++) {
        rightEyeOpenedT[count].x = (long)(x + ((double)rightEyeOpened[count].x * size));
        rightEyeOpenedT[count].y = (long)(y + ((double)rightEyeOpened[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 15; count++) {
        rightEyebrowT[count].x = (long)(x + ((double)rightEyebrow[count].x * size));
        rightEyebrowT[count].y = (long)(y + ((double)rightEyebrow[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 18; count++) {
        leftPupilT[count].x = (long)(x + ((double)leftPupil[count].x * size));
        leftPupilT[count].y = (long)(y + ((double)leftPupil[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 16; count++) {
        rightPupilT[count].x = (long)(x + ((double)rightPupil[count].x * size));
        rightPupilT[count].y = (long)(y + ((double)rightPupil[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 10; count++) {
        leftBlushT[count].x = (long)(x + ((double)leftBlush[count].x * size));
        leftBlushT[count].y = (long)(y + ((double)leftBlush[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 10; count++) {
        rightBlushT[count].x = (long)(x + ((double)rightBlush[count].x * size));
        rightBlushT[count].y = (long)(y + ((double)rightBlush[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 19; count++) {
        mouthT[count].x = (long)(x + ((double)mouth[count].x * size));
        mouthT[count].y = (long)(y + ((double)mouth[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 3; count++) {
        leftToothT[count].x = (long)(x + ((double)leftTooth[count].x * size));
        leftToothT[count].y = (long)(y + ((double)leftTooth[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 3; count++) {
        rightToothT[count].x = (long)(x + ((double)rightTooth[count].x * size));
        rightToothT[count].y = (long)(y + ((double)rightTooth[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 16; count++) {
        yellowHeartT[count].x = (long)(x + ((double)yellowHeart[count].x * size));
        yellowHeartT[count].y = (long)(y + ((double)yellowHeart[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 15; count++) {
        floatingEyeT[count].x = (long)(x + ((double)floatingEye[count].x * size));
        floatingEyeT[count].y = (long)(y + ((double)floatingEye[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 15; count++) {
        corneaT[count].x = (long)(x + ((double)cornea[count].x * size));
        corneaT[count].y = (long)(y + ((double)cornea[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 10; count++) {
        floatingEyePupilT[count].x = (long)(x + ((double)floatingEyePupil[count].x * size));
        floatingEyePupilT[count].y = (long)(y + ((double)floatingEyePupil[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 13; count++) {
        leftEyeClosedT[count].x = (long)(x + ((double)leftEyeClosed[count].x * size));
        leftEyeClosedT[count].y = (long)(y + ((double)leftEyeClosed[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 12; count++) {
        rightEyeClosedT[count].x = (long)(x + ((double)rightEyeClosed[count].x * size));
        rightEyeClosedT[count].y = (long)(y + ((double)rightEyeClosed[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 74; count++) {
        marisaProfileT[count].x = (long)(x + ((double)marisaProfile[count].x * size));
        marisaProfileT[count].y = (long)(y + ((double)marisaProfile[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 26; count++) {
        marisaClothesT[count].x = (long)(x + ((double)marisaClothes[count].x * size));
        marisaClothesT[count].y = (long)(y + ((double)marisaClothes[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 4; count++) {
        marisaSlings1T[count].x = (long)(x + ((double)marisaSlings1[count].x * size));
        marisaSlings1T[count].y = (long)(y + ((double)marisaSlings1[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 6; count++) {
        marisaSlings2T[count].x = (long)(x + ((double)marisaSlings2[count].x * size));
        marisaSlings2T[count].y = (long)(y + ((double)marisaSlings2[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 71; count++) {
        marisaHatT[count].x = (long)(x + ((double)marisaHat[count].x * size));
        marisaHatT[count].y = (long)(y + ((double)marisaHat[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 71; count++) {
        marisaBowT[count].x = (long)(x + ((double)marisaBow[count].x * size));
        marisaBowT[count].y = (long)(y + ((double)marisaBow[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 67; count++) {
        chenProfileT[count].x = (long)(x + ((double)chenProfile[count].x * size));
        chenProfileT[count].y = (long)(y + ((double)chenProfile[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 50; count++) {
        chenEarLeftT[count].x = (long)(x + ((double)chenEarLeft[count].x * size));
        chenEarLeftT[count].y = (long)(y + ((double)chenEarLeft[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 19; count++) {
        chenEarRightT[count].x = (long)(x + ((double)chenEarRight[count].x * size));
        chenEarRightT[count].y = (long)(y + ((double)chenEarRight[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 13; count++) {
        chenHatLittlePieceT[count].x = (long)(x + ((double)chenHatLittlePiece[count].x * size));
        chenHatLittlePieceT[count].y = (long)(y + ((double)chenHatLittlePiece[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 32; count++) {
        chenHatT[count].x = (long)(x + ((double)chenHat[count].x * size));
        chenHatT[count].y = (long)(y + ((double)chenHat[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 21; count++) {
        chenClothesT[count].x = (long)(x + ((double)chenClothes[count].x * size));
        chenClothesT[count].y = (long)(y + ((double)chenClothes[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 75; count++) {
        cirnoProfileT[count].x = (long)(x + ((double)cirnoProfile[count].x * size));
        cirnoProfileT[count].y = (long)(y + ((double)cirnoProfile[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 4; count++) {
        cirnoBowT[count].x = (long)(x + ((double)cirnoBow[count].x * size));
        cirnoBowT[count].y = (long)(y + ((double)cirnoBow[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 17; count++) {
        cirnoHat1T[count].x = (long)(x + ((double)cirnoHat1[count].x * size));
        cirnoHat1T[count].y = (long)(y + ((double)cirnoHat1[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 9; count++) {
        cirnoHat2T[count].x = (long)(x + ((double)cirnoHat2[count].x * size));
        cirnoHat2T[count].y = (long)(y + ((double)cirnoHat2[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 5; count++) {
        cirnoHat3T[count].x = (long)(x + ((double)cirnoHat3[count].x * size));
        cirnoHat3T[count].y = (long)(y + ((double)cirnoHat3[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 6; count++) {
        cirnoIce1T[count].x = (long)(x + ((double)cirnoIce1[count].x * size));
        cirnoIce1T[count].y = (long)(y + ((double)cirnoIce1[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 7; count++) {
        cirnoIce2T[count].x = (long)(x + ((double)cirnoIce2[count].x * size));
        cirnoIce2T[count].y = (long)(y + ((double)cirnoIce2[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 7; count++) {
        cirnoIce3T[count].x = (long)(x + ((double)cirnoIce3[count].x * size));
        cirnoIce3T[count].y = (long)(y + ((double)cirnoIce3[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 4; count++) {
        cirnoIce4T[count].x = (long)(x + ((double)cirnoIce4[count].x * size));
        cirnoIce4T[count].y = (long)(y + ((double)cirnoIce4[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 65; count++) {
        nazrinProfileT[count].x = (long)(x + ((double)nazrinProfile[count].x * size));
        nazrinProfileT[count].y = (long)(y + ((double)nazrinProfile[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 15; count++) {
        nazrinClothesT[count].x = (long)(x + ((double)nazrinClothes[count].x * size));
        nazrinClothesT[count].y = (long)(y + ((double)nazrinClothes[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 23; count++) {
        nazrinClothesLinesT[count].x = (long)(x + ((double)nazrinClothesLines[count].x * size));
        nazrinClothesLinesT[count].y = (long)(y + ((double)nazrinClothesLines[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 18; count++) {
        nazrinEarLeftT[count].x = (long)(x + ((double)nazrinEarLeft[count].x * size));
        nazrinEarLeftT[count].y = (long)(y + ((double)nazrinEarLeft[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 12; count++) {
        nazrinEarLeftInsideT[count].x = (long)(x + ((double)nazrinEarLeftInside[count].x * size));
        nazrinEarLeftInsideT[count].y = (long)(y + ((double)nazrinEarLeftInside[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 12; count++) {
        nazrinEarRightT[count].x = (long)(x + ((double)nazrinEarRight[count].x * size));
        nazrinEarRightT[count].y = (long)(y + ((double)nazrinEarRight[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 12; count++) {
        nazrinEarRightInsideT[count].x = (long)(x + ((double)nazrinEarRightInside[count].x * size));
        nazrinEarRightInsideT[count].y = (long)(y + ((double)nazrinEarRightInside[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 16; count++) {
        rumiaClothesT[count].x = (long)(x + ((double)rumiaClothes[count].x * size));
        rumiaClothesT[count].y = (long)(y + ((double)rumiaClothes[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 6; count++) {
        rumiaSlings1T[count].x = (long)(x + ((double)rumiaSlings1[count].x * size));
        rumiaSlings1T[count].y = (long)(y + ((double)rumiaSlings1[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 6; count++) {
        rumiaSlings2T[count].x = (long)(x + ((double)rumiaSlings2[count].x * size));
        rumiaSlings2T[count].y = (long)(y + ((double)rumiaSlings2[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 4; count++) {
        rumiaBow1T[count].x = (long)(x + ((double)rumiaBow1[count].x * size));
        rumiaBow1T[count].y = (long)(y + ((double)rumiaBow1[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 4; count++) {
        rumiaBow2T[count].x = (long)(x + ((double)rumiaBow2[count].x * size));
        rumiaBow2T[count].y = (long)(y + ((double)rumiaBow2[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 3; count++) {
        rumiaRedTriangleT[count].x = (long)(x + ((double)rumiaRedTriangle[count].x * size));
        rumiaRedTriangleT[count].y = (long)(y + ((double)rumiaRedTriangle[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 4; count++) {
        rumiaBow1WT[count].x = (long)(x + ((double)rumiaBow1W[count].x * size));
        rumiaBow1WT[count].y = (long)(y + ((double)rumiaBow1W[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
    for (int count = 0; count < 4; count++) {
        rumiaBow2WT[count].x = (long)(x + ((double)rumiaBow2W[count].x * size));
        rumiaBow2WT[count].y = (long)(y + ((double)rumiaBow2W[count].y * ((yMultiplierAbs)?size:abs(size))));
    }
}

void drawEyes(bool eyesClosed, COLORREF eyesColor) {
    if (!eyesClosed) {
        txSetFillColor(RGB (255, 255, 255));
        txPolygon(leftEyeOpenedT, 11);
        txPolygon(rightEyeOpenedT, 11);
        txSetFillColor(RGB (0, 0, 0));
        txPolygon(leftEyebrowT, 15);
        txPolygon(rightEyebrowT, 15);
        txSetFillColor(eyesColor);
        txPolygon(leftPupilT, 18);
        txPolygon(rightPupilT, 16);
    }
    else {
        txSetFillColor(RGB (0, 0, 0));
        txPolygon(leftEyeClosedT, 13);
        txPolygon(rightEyeClosedT, 12);
    }
}

void satoriBody(COLORREF hairColor, COLORREF clothesColor, int x, int y, double size, bool yMultiplierAbs) {
    txSetFillColor (hairColor);
    txPolygon (satoriProfileT, 63);

    txSetFillColor(RGB (255, 235, 206));
    txPolygon (faceShapeT, 68);
    
    txSetFillColor(clothesColor);
    txPolygon (satoriClothesT, 21);
    txSetFillColor (RGB (225, 222, 225));
    txPolygon (collarT, 27);
    txSetFillColor (TX_TRANSPARENT);
    txPolygon (collarLines1T, 8);
    txLine(x+(127*size), y+(157*((yMultiplierAbs)?size:abs(size))), x+(129*size), y+(160*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(131*size), y+(162*((yMultiplierAbs)?size:abs(size))), x+(134*size), y+(164*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(139*size), y+(167*((yMultiplierAbs)?size:abs(size))), x+(141*size), y+(169*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(146*size), y+(170*((yMultiplierAbs)?size:abs(size))), x+(150*size), y+(171*((yMultiplierAbs)?size:abs(size))));
    txPolygon (collarLines2T, 8);
    txLine(x+(175*size), y+(156*((yMultiplierAbs)?size:abs(size))), x+(174*size), y+(158*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(172*size), y+(162*((yMultiplierAbs)?size:abs(size))), x+(171*size), y+(164*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(168*size), y+(166*((yMultiplierAbs)?size:abs(size))), x+(166*size), y+(168*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(164*size), y+(171*((yMultiplierAbs)?size:abs(size))), x+(161*size), y+(172*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(183*size), y+(155*((yMultiplierAbs)?size:abs(size))), x+(185*size), y+(161*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(183*size), y+(168*((yMultiplierAbs)?size:abs(size))), x+(181*size), y+(160*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(181*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(179*size), y+(160*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(179*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(179*size), y+(166*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(179*size), y+(166*((yMultiplierAbs)?size:abs(size))), x+(181*size), y+(171*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(179*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(173*size), y+(166*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(180*size), y+(175*((yMultiplierAbs)?size:abs(size))), x+(175*size), y+(170*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(175*size), y+(170*((yMultiplierAbs)?size:abs(size))), x+(172*size), y+(169*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(172*size), y+(169*((yMultiplierAbs)?size:abs(size))), x+(170*size), y+(172*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(170*size), y+(172*((yMultiplierAbs)?size:abs(size))), x+(170*size), y+(177*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(170*size), y+(172*((yMultiplierAbs)?size:abs(size))), x+(165*size), y+(173*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(138*size), y+(176*((yMultiplierAbs)?size:abs(size))), x+(137*size), y+(169*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(135*size), y+(169*((yMultiplierAbs)?size:abs(size))), x+(133*size), y+(170*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(133*size), y+(170*((yMultiplierAbs)?size:abs(size))), x+(129*size), y+(177*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(126*size), y+(170*((yMultiplierAbs)?size:abs(size))), x+(128*size), y+(166*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(128*size), y+(166*((yMultiplierAbs)?size:abs(size))), x+(126*size), y+(165*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(126*size), y+(165*((yMultiplierAbs)?size:abs(size))), x+(124*size), y+(166*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(124*size), y+(166*((yMultiplierAbs)?size:abs(size))), x+(116*size), y+(171*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(119*size), y+(164*((yMultiplierAbs)?size:abs(size))), x+(121*size), y+(160*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(121*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(119*size), y+(159*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(119*size), y+(159*((yMultiplierAbs)?size:abs(size))), x+(116*size), y+(161*((yMultiplierAbs)?size:abs(size))));
}

void marisaBody(COLORREF hairColor, COLORREF clothesColor, int x, int y, double size, bool yMultiplierAbs) {
    txSetFillColor (hairColor);
    txPolygon (marisaProfileT, 74);

    txSetFillColor(RGB (255, 235, 206));
    txPolygon (faceShapeT, 68);

    txSetFillColor(RGB (232, 243, 255));
    txPolygon (marisaClothesT, 26);
    txLine(x+(130*size), y+(154*((yMultiplierAbs)?size:abs(size))), x+(132*size), y+(156*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(132*size), y+(156*((yMultiplierAbs)?size:abs(size))), x+(137*size), y+(153*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(132*size), y+(156*((yMultiplierAbs)?size:abs(size))), x+(134*size), y+(160*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(134*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(141*size), y+(157*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(134*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(137*size), y+(165*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(137*size), y+(165*((yMultiplierAbs)?size:abs(size))), x+(139*size), y+(167*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(139*size), y+(167*((yMultiplierAbs)?size:abs(size))), x+(142*size), y+(167*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(141*size), y+(164*((yMultiplierAbs)?size:abs(size))), x+(145*size), y+(169*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(141*size), y+(164*((yMultiplierAbs)?size:abs(size))), x+(145*size), y+(162*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(145*size), y+(169*((yMultiplierAbs)?size:abs(size))), x+(151*size), y+(165*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(142*size), y+(167*((yMultiplierAbs)?size:abs(size))), x+(145*size), y+(172*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(145*size), y+(172*((yMultiplierAbs)?size:abs(size))), x+(152*size), y+(173*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(152*size), y+(166*((yMultiplierAbs)?size:abs(size))), x+(153*size), y+(177*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(153*size), y+(171*((yMultiplierAbs)?size:abs(size))), x+(157*size), y+(174*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(157*size), y+(174*((yMultiplierAbs)?size:abs(size))), x+(161*size), y+(174*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(161*size), y+(174*((yMultiplierAbs)?size:abs(size))), x+(165*size), y+(171*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(166*size), y+(164*((yMultiplierAbs)?size:abs(size))), x+(165*size), y+(177*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(159*size), y+(168*((yMultiplierAbs)?size:abs(size))), x+(159*size), y+(174*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(159*size), y+(168*((yMultiplierAbs)?size:abs(size))), x+(165*size), y+(164*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(163*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(166*size), y+(168*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(166*size), y+(168*((yMultiplierAbs)?size:abs(size))), x+(172*size), y+(169*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(172*size), y+(169*((yMultiplierAbs)?size:abs(size))), x+(174*size), y+(160*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(174*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(162*size), y+(160*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(174*size), y+(162*((yMultiplierAbs)?size:abs(size))), x+(176*size), y+(162*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(174*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(176*size), y+(159*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(176*size), y+(159*((yMultiplierAbs)?size:abs(size))), x+(170*size), y+(152*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(176*size), y+(159*((yMultiplierAbs)?size:abs(size))), x+(178*size), y+(157*((yMultiplierAbs)?size:abs(size))));
    txSetFillColor(clothesColor);
    txPolygon(marisaSlings1T, 4);
    txPolygon(marisaSlings2T, 6);
}

void chenBody(COLORREF hairColor, COLORREF clothesColor, int x, int y, double size, bool yMultiplierAbs) {
    txSetFillColor(hairColor);
    txPolygon(chenProfileT, 67);
    txSetFillColor(RGB (80, 22, 0));
    txPolygon(chenEarLeftT, 50);
    txLine(x+(66*size), y+(5*((yMultiplierAbs)?size:abs(size))), x+(78*size), y+(11*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(78*size), y+(11*((yMultiplierAbs)?size:abs(size))), x+(88*size), y+(16*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(88*size), y+(16*((yMultiplierAbs)?size:abs(size))), x+(97*size), y+(24*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(97*size), y+(24*((yMultiplierAbs)?size:abs(size))), x+(104*size), y+(32*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(81*size), y+(40*((yMultiplierAbs)?size:abs(size))), x+(76*size), y+(37*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(76*size), y+(37*((yMultiplierAbs)?size:abs(size))), x+(66*size), y+(27*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(66*size), y+(27*((yMultiplierAbs)?size:abs(size))), x+(55*size), y+(15*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(55*size), y+(15*((yMultiplierAbs)?size:abs(size))), x+(40*size), y+(3*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(48*size), y+(9*((yMultiplierAbs)?size:abs(size))), x+(44*size), y+(10*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(44*size), y+(10*((yMultiplierAbs)?size:abs(size))), x+(43*size), y+(11*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(43*size), y+(11*((yMultiplierAbs)?size:abs(size))), x+(43*size), y+(15*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(43*size), y+(15*((yMultiplierAbs)?size:abs(size))), x+(46*size), y+(17*((yMultiplierAbs)?size:abs(size))));
    txPolygon(chenEarRightT, 19);
    txLine(x+(215*size), y+(30*((yMultiplierAbs)?size:abs(size))), x+(218*size), y+(28*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(218*size), y+(28*((yMultiplierAbs)?size:abs(size))), x+(221*size), y+(23*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(221*size), y+(23*((yMultiplierAbs)?size:abs(size))), x+(222*size), y+(11*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(222*size), y+(11*((yMultiplierAbs)?size:abs(size))), x+(221*size), y+(0*((yMultiplierAbs)?size:abs(size))));

    txSetFillColor(RGB (255, 235, 206));
    txPolygon(faceShapeT, 68);

    txSetFillColor(clothesColor);
    txPolygon(chenClothesT, 21);
    txLine(x+(118*size), y+(161*((yMultiplierAbs)?size:abs(size))), x+(127*size), y+(170*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(127*size), y+(170*((yMultiplierAbs)?size:abs(size))), x+(138*size), y+(177*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(185*size), y+(161*((yMultiplierAbs)?size:abs(size))), x+(177*size), y+(170*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(177*size), y+(170*((yMultiplierAbs)?size:abs(size))), x+(168*size), y+(177*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(120*size), y+(169*((yMultiplierAbs)?size:abs(size))), x+(124*size), y+(177*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(184*size), y+(168*((yMultiplierAbs)?size:abs(size))), x+(184*size), y+(177*((yMultiplierAbs)?size:abs(size))));
    txSetColor(RGB (252, 219, 0), 1.5);
    txLine(x+(183*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(176*size), y+(167*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(176*size), y+(167*((yMultiplierAbs)?size:abs(size))), x+(168*size), y+(173*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(168*size), y+(173*((yMultiplierAbs)?size:abs(size))), x+(166*size), y+(170*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(166*size), y+(170*((yMultiplierAbs)?size:abs(size))), x+(166*size), y+(167*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(166*size), y+(167*((yMultiplierAbs)?size:abs(size))), x+(167*size), y+(165*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(167*size), y+(156*((yMultiplierAbs)?size:abs(size))), x+(163*size), y+(167*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(163*size), y+(167*((yMultiplierAbs)?size:abs(size))), x+(163*size), y+(176*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(137*size), y+(155*((yMultiplierAbs)?size:abs(size))), x+(146*size), y+(164*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(146*size), y+(164*((yMultiplierAbs)?size:abs(size))), x+(154*size), y+(169*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(154*size), y+(169*((yMultiplierAbs)?size:abs(size))), x+(155*size), y+(176*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(120*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(131*size), y+(169*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(131*size), y+(169*((yMultiplierAbs)?size:abs(size))), x+(141*size), y+(175*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(141*size), y+(175*((yMultiplierAbs)?size:abs(size))), x+(148*size), y+(176*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(148*size), y+(176*((yMultiplierAbs)?size:abs(size))), x+(149*size), y+(172*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(149*size), y+(172*((yMultiplierAbs)?size:abs(size))), x+(148*size), y+(169*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(189*size), y+(167*((yMultiplierAbs)?size:abs(size))), x+(191*size), y+(172*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(191*size), y+(172*((yMultiplierAbs)?size:abs(size))), x+(191*size), y+(176*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(116*size), y+(165*((yMultiplierAbs)?size:abs(size))), x+(116*size), y+(176*((yMultiplierAbs)?size:abs(size))));
    txSetColor(RGB (0, 0, 0));
}

void cirnoBody(COLORREF hairColor, COLORREF clothesColor, int x, int y, double size, bool yMultiplierAbs) {
    txSetFillColor(hairColor);
    txPolygon(cirnoProfileT, 75);

    txSetFillColor(RGB (255, 235, 206));
    txPolygon(faceShapeT, 68);

    txSetFillColor(RGB (232, 243, 255));
    txPolygon (marisaClothesT, 26);

    txSetFillColor(clothesColor);
    txPolygon(marisaSlings1T, 4);
    txPolygon(marisaSlings2T, 6);
    txSetFillColor(RGB (255, 143, 143));
    txPolygon(cirnoBowT, 4);
    txLine(x+(152*size), y+(170*((yMultiplierAbs)?size:abs(size))), x+(152*size), y+(174*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(152*size), y+(174*((yMultiplierAbs)?size:abs(size))), x+(154*size), y+(175*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(154*size), y+(175*((yMultiplierAbs)?size:abs(size))), x+(158*size), y+(175*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(158*size), y+(175*((yMultiplierAbs)?size:abs(size))), x+(160*size), y+(171*((yMultiplierAbs)?size:abs(size))));
}

void nazrinBody(COLORREF hairColor, COLORREF clothesColor) {
    txSetFillColor(hairColor);
    txPolygon(nazrinProfileT, 65);

    txSetFillColor(RGB (253, 254, 247));
    txPolygon(faceShapeT, 68);

    txSetFillColor(clothesColor);
    txPolygon(nazrinClothesT, 15);
    txSetFillColor(RGB (181, 232, 0));
    txPolygon(nazrinClothesLinesT, 23);

    txSetFillColor(RGB (121, 112, 105));
    txPolygon(nazrinEarLeftT, 18);
    txPolygon(nazrinEarRightT, 12);
    txSetFillColor(RGB (186, 183, 179));
    txPolygon(nazrinEarLeftInsideT, 12);
    txPolygon(nazrinEarRightInsideT, 12);
}

void rumiaBody(COLORREF hairColor, COLORREF clothesColor, int x, int y, double size, bool yMultiplierAbs) {
    txSetFillColor(hairColor);
    txPolygon(cirnoProfileT, 75);

    txSetFillColor(RGB (255, 235, 206));
    txPolygon(faceShapeT, 68);

    txSetFillColor(RGB (255, 255, 255));
    txPolygon(rumiaClothesT, 16);
    txSetFillColor(clothesColor);
    txPolygon(rumiaSlings1T, 6);
    txPolygon(rumiaSlings2T, 6);
    txLine(x+(148*size), y+(162*((yMultiplierAbs)?size:abs(size))), x+(159*size), y+(168*((yMultiplierAbs)?size:abs(size))));
    txLine(x+(163*size), y+(160*((yMultiplierAbs)?size:abs(size))), x+(159*size), y+(168*((yMultiplierAbs)?size:abs(size))));
    txSetFillColor(RGB (255, 122, 92));
    txPolygon(rumiaRedTriangleT, 3);
}