/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_USERS_GD_DATA_PROJECTS_NETCOMPUTE_NCC_CMAKE_BUILD_DEBUG_PARSER_HH_INCLUDED
# define YY_YY_USERS_GD_DATA_PROJECTS_NETCOMPUTE_NCC_CMAKE_BUILD_DEBUG_PARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TIDENTIFIER = 258,
    TINTEGER = 259,
    TIP = 260,
    TMAC = 261,
    TYINT = 262,
    TLPAREN = 263,
    TRPAREN = 264,
    TLBRACE = 265,
    TRBRACE = 266,
    TCOMMA = 267,
    TEQUAL = 268,
    TIF = 269,
    TELSE = 270,
    TCEQ = 271,
    TCNE = 272,
    TCLT = 273,
    TCLE = 274,
    TCGT = 275,
    TCGE = 276,
    TPLUS = 277,
    TMINUS = 278,
    TMUL = 279,
    TDIV = 280,
    TRETURN = 281,
    TAND = 282,
    TOR = 283,
    TXOR = 284,
    TMOD = 285,
    TSHIFTR = 286,
    TSHIFTL = 287,
    TSTRUCT = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "src/parser.y" /* yacc.c:1919  */

  ncc::NBlock* block;
  ncc::NStatement* stmt;
  ncc::NExpression* expr;
  ncc::NIdentifier* ident;
  ncc::NVariableDeclaration* var_decl;
  std::vector<ncc::NVariableDeclaration*>* varvec;
  std::vector<ncc::NExpression*>* exprvec;
  std::string* string;
  int token;

#line 100 "/Users/gd/data/projects/netcompute/ncc/cmake-build-debug/parser.hh" /* yacc.c:1919  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_USERS_GD_DATA_PROJECTS_NETCOMPUTE_NCC_CMAKE_BUILD_DEBUG_PARSER_HH_INCLUDED  */
