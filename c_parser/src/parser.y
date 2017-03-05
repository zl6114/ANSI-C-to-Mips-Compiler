%code requires{
  #include "header.hpp"

  #include <cassert>

  extern const Program *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}

// Represents the value associated with any kind of
// AST node.
%union{
  const Program *prog;
  std::string *string;
  double number;
}

%token T_ELSE T_FOR T_IF T_INT T_RETURN T_WHILE
%token T_NUMBER T_VARIABLE
%token T_ELLIPSIS T_RIGHT_ASSIGN T_LEFT_ASSIGN T_ADD_ASSIGN
%token T_SUB_ASSIGN T_MUL_ASSIGN T_DIV_ASSIGN T_MOD_ASSIGN
%token T_AND_ASSIGN T_XOR_ASSIGN T_OR_ASSIGN T_RIGHT_OP T_LEFT_OP
%token T_INC_OP T_DEC_OP T_PTR_OP T_AND_OP T_OR_OP T_LE_OP T_GE_OP
%token T_EQ_OP T_NE_OP T_INEXCLUS_OR T_EXCLUS_OR
%token T_SIMICOLOUMN T_LCURLYBRACKET T_RCURLYBRACKET T_COMMA T_COLOUMN
%token T_EQUAL T_LBRACKET T_RBRACKET T_LSQUAREBRACKET T_RSQUAREBRACKET
%token T_DOT T_AMPERSAND T_EXCLAMATION T_TILDE
%token T_MINUS T_PLUS T_STAR T_DIVIDE T_MOD T_QUESTIONMARK

%type <prog> PROGRAM ALL_DECLEARARION DECLARATION DIRECT_DECLARATOR DECLARATOR
%type <prog> INIT_DECLARATOR INIT_DECLARATOR_LIST INITIALIZER ASSIGNMENT_EXPRESSION
%type <prog> UNARY_EXPRESSION POSTFIX_EXPRESSION PRIMARY_EXPRESSION RE_DECLARATION
%type <prog> FUNCTION COMPOUND_STATEMENT PARAM_DECLARATION_LIST
%type <prog> STATEMENT STATEMENT_LIST
%type <string> T_INT T_VARIABLE TYPE_SPECIFIER DECLARATION_SPECIFIERS OPERATOR
%type <number> T_NUMBER

%start ROOT

%%

ROOT : PROGRAM { g_root = $1; }

PROGRAM: ALL_DECLEARARION { $$ = $1;}
       | PROGRAM ALL_DECLEARARION { $$ = new Program_call($1,$2);}

ALL_DECLEARARION : DECLARATION { $$ = $1;}
                 | FUNCTION { $$ = $1; }

FUNCTION : DECLARATION_SPECIFIERS DECLARATOR T_LBRACKET PARAM_DECLARATION_LIST T_RBRACKET COMPOUND_STATEMENT
            { $$ = new Function($2,$4,$6);}
         | DECLARATION_SPECIFIERS DECLARATOR T_LBRACKET T_RBRACKET COMPOUND_STATEMENT
            { $$ = new FunctionNoParam($2,$5);}
         | DECLARATOR T_LBRACKET PARAM_DECLARATION_LIST T_RBRACKET COMPOUND_STATEMENT { $$ = new Function($1,$3,$5);}
         | DECLARATOR T_LBRACKET T_RBRACKET COMPOUND_STATEMENT {$$ = new FunctionNoParam($1,$4);}

COMPOUND_STATEMENT : T_LCURLYBRACKET T_RCURLYBRACKET {$$ = new EmptyScope();}
                   | T_LCURLYBRACKET DECLARATION T_RCURLYBRACKET {$$ = new Scope($2);}
                   | T_LCURLYBRACKET STATEMENT_LIST T_RCURLYBRACKET {$$ = new Scope($2);}
                   //| T_LCURLYBRACKET DECLARATION_LIST STATEMENT_LIST T_RCURLYBRACKET {$$ = new DoubleScope($2,$3);}*/

STATEMENT_LIST : STATEMENT { $$ = $1; }
               | STATEMENT_LIST STATEMENT { $$ = new Program_call($1,$2); }

STATEMENT : COMPOUND_STATEMENT { $$ = $1;}
          /*| IF_STATEMENT { $$ = $1;}
          | ITERATION_STATEMENT { $$ = $1;}
          | JUMP_STATEMENT { $$ = $1;}
          | LABELED_STATEMENT { $$ = $1;}
          | EXPRESSION_STATEMENT { $$ = $1;}*/

/*
DECLARATION_LIST : DECLARATION { $$ = $1; }
                 | DECLARATION_LIST DECLARATION { }*/

PARAM_DECLARATION_LIST : DECLARATION_SPECIFIERS DECLARATOR { $$ = new parameter($2); }
                       | DECLARATION_SPECIFIERS DECLARATOR T_COMMA PARAM_DECLARATION_LIST
                        { $$ = new MutiplyParameter($2,$4); }

DECLARATION : DECLARATION_SPECIFIERS T_SIMICOLOUMN { $$ = new Empty();}
            | DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST T_SIMICOLOUMN { $$ = new declaration($2);}
            | RE_DECLARATION { $$ = $1;}

RE_DECLARATION :  INIT_DECLARATOR_LIST T_SIMICOLOUMN { $$ = new Empty();}

DECLARATION_SPECIFIERS : TYPE_SPECIFIER { $$ = $1;}
                      // | TYPE_SPECIFIER DECLARATION_SPECIFIERS { $$ = new declaration_specifiers(*$1,*$2);}

INIT_DECLARATOR_LIST : INIT_DECLARATOR { $$ = $1;}
                     //| INIT_DECLARATOR T_COMMA INIT_DECLARATOR_LIST

INIT_DECLARATOR : DECLARATOR { $$ = $1; }
                | DECLARATOR T_EQUAL INITIALIZER { $$ = new init_declartor($1,$3); }
                //| INITIALIZER { $$ = new Empty();}

DECLARATOR : T_STAR DIRECT_DECLARATOR { $$ = $2;}
           | DIRECT_DECLARATOR {$$ = $1;}

DIRECT_DECLARATOR : T_VARIABLE { $$ = new Variable(*$1);}

TYPE_SPECIFIER : T_INT { $$ = new std::string("int"); }

INITIALIZER : ASSIGNMENT_EXPRESSION { $$ = $1;}
            //| T_LCURLYBRACKET INIT_DECLARATOR_LIST T_RCURLYBRACKET
            //| T_LCURLYBRACKET INIT_DECLARATOR_LIST T_COMMA T_RCURLYBRACKET

ASSIGNMENT_EXPRESSION : UNARY_EXPRESSION { $$ = $1; }
                     // | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION

UNARY_EXPRESSION : POSTFIX_EXPRESSION { $$ = $1; }
                 | PRIMARY_EXPRESSION OPERATOR UNARY_EXPRESSION { $$ = new unary_expression($3);}

OPERATOR : T_MINUS {$$ = new std::string("-");}
         | T_PLUS  {$$ = new std::string("+");}
         | T_STAR  {$$ = new std::string("*");}
         | T_DIVIDE  {$$ = new std::string("/");}
         | T_MOD  {$$ = new std::string("%%");}
/*CAST_EXPRESSION : UNARY_EXPRESSION { $$ = $1;}*/

POSTFIX_EXPRESSION : PRIMARY_EXPRESSION { $$ = $1; }

PRIMARY_EXPRESSION :  T_VARIABLE { $$ = new Variable(*$1); }
                   |  T_NUMBER { $$ = new Number($1);}
                    // |  T_LBRACKET EXPRESSION T_RBRACKET



/*EXPRESSION : ASSIGNMENT_EXPRESSION
           | EXPRESSION T_COMMA ASSIGNMENT_EXPRESSION
           assignment_operator
                  	: '='
                  	| MUL_ASSIGN
                  	| DIV_ASSIGN
                    | MOD_ASSIGN
                    | ADD_ASSIGN
                  	| SUB_ASSIGN
                  	| LEFT_ASSIGN
                  	| RIGHT_ASSIGN
                  	| AND_ASSIGN
                  	| XOR_ASSIGN
                  	| OR_ASSIGN*/



%%
const Program *g_root; // Definition of variable (to match declaration earlier)
const Program *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
