#ifndef FONT3X3_H
#define FONT3X3_H

struct Font3x3 {
    char letter;
    char code[3][3];
};

struct Font3x3 font[] = {
{'A', {
" # ",
"###",
"# #"}},
{'B', {
"## ",
"###",
"###"}},
{'C', {
"###",
"#  ",
"###"}},
{'D', {
"## ",
"# #",
"## "}},
{'E', {
"###",
"## ",
"###"}},
{'F', {
"###",
"## ",
"#  "}},
{'G', {
"## ",
"# #",
"###"}},
{'H', {
"# #",
"###",
"# #"}},
{'I', {
"###",
" # ",
"###"}},
{'J', {
"  #",
"# #",
"###"}},
{'K', {
"# #",
"## ",
"# #"}},
{'L', {
"#  ",
"#  ",
"###"}},
{'M', {
"###",
"###",
"# #"}},
{'N', {
"###",
"# #",
"# #"}},
{'O', {
"###",
"# #",
"###"}},
{'P', {
"###",
"###",
"#  "}},
{'Q', {
"###",
"###",
"  #"}},
{'R', {
"###",
"#  ",
"#  "}},
{'S', {
" ##",
" # ",
"## "}},
{'T', {
"###",
" # ",
" # "}},
{'U', {
"# #",
"# #",
"###"}},
{'V', {
"# #",
"# #",
" # "}},
{'W', {
"# #",
"###",
"###"}},
{'X', {
"# #",
" # ",
"# #"}},
{'Y', {
"# #",
" # ",
" # "}},
{'Z', {
"## ",
" # ",
" ##"}},
{'!', {
"#  ",
"   ",
"#  "}},
{'>', {
"#  ",
" # ",
"#  "}},
{'<', {
" # ",
"#  ",
" # "}},
{'%', {
"  #",
"###",
"#  "}},
{'*', {
" # ",
"## ",
"   "}},
{'+', {
" # ",
"###",
" # "}},
{'-', {
"   ",
"###",
"   "}},
{'.', {
"   ",
"   ",
"#  "}},
{',', {
"   ",
"#  ",
"#  "}},
{'$', {
"###",
" # ",
"###"}},
{'|', {
"#  ",
"#  ",
"#  "}},
{'?', {
"###",
" ##",
" # "}},
{'^', {
" # ",
"# #",
"   "}}
};

#endif
