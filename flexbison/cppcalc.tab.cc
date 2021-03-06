// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.
#line 15 "cppcalc.yy" // lalr1.cc:404

#include <iostream>
using namespace std;

#include "cppcalc-ctx.hh"

#line 43 "cppcalc.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "cppcalc.tab.hh"

// User implementation prologue.
#line 37 "cppcalc.yy" // lalr1.cc:412

  extern int yylex(yy::cppcalc::semantic_type *yylval,
       yy::cppcalc::location_type* yylloc,
       cppcalc_ctx &ctx);

void myout(int val, int radix);

#line 64 "cppcalc.tab.cc" // lalr1.cc:412


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 150 "cppcalc.tab.cc" // lalr1.cc:479

  /// Build a parser object.
  cppcalc::cppcalc (cppcalc_ctx &ctx_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      ctx (ctx_yyarg)
  {}

  cppcalc::~cppcalc ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  cppcalc::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  cppcalc::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  cppcalc::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
  cppcalc::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
  cppcalc::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
  cppcalc::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
  cppcalc::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  inline
  bool
  cppcalc::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
  cppcalc::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
  cppcalc::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  cppcalc::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  cppcalc::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  cppcalc::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  cppcalc::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  cppcalc::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
  cppcalc::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  cppcalc::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  cppcalc::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  cppcalc::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  cppcalc::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  cppcalc::symbol_number_type
  cppcalc::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  cppcalc::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  cppcalc::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  cppcalc::stack_symbol_type&
  cppcalc::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  cppcalc::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if YYDEBUG
  template <typename Base>
  void
  cppcalc::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  cppcalc::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  cppcalc::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  cppcalc::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  cppcalc::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  cppcalc::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  cppcalc::debug_level_type
  cppcalc::debug_level () const
  {
    return yydebug_;
  }

  void
  cppcalc::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline cppcalc::state_type
  cppcalc::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  cppcalc::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  cppcalc::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  cppcalc::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 45 "cppcalc.yy" // lalr1.cc:741
{
 // Filename for locations here
 yyla.location.begin.filename = yyla.location.end.filename = new std::string("stdin");
}

#line 491 "cppcalc.tab.cc" // lalr1.cc:741

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location, ctx));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 3:
#line 52 "cppcalc.yy" // lalr1.cc:859
    { cout << "= "; myout(ctx.getradix(), (yystack_[1].value.ival)); cout << "\n> "; }
#line 601 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 53 "cppcalc.yy" // lalr1.cc:859
    { cout <<  "> "; }
#line 607 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 57 "cppcalc.yy" // lalr1.cc:859
    { (yylhs.value.ival) = (yystack_[2].value.ival) + (yystack_[0].value.ival); }
#line 613 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 58 "cppcalc.yy" // lalr1.cc:859
    { (yylhs.value.ival) = (yystack_[2].value.ival) - (yystack_[0].value.ival); }
#line 619 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 59 "cppcalc.yy" // lalr1.cc:859
    { (yylhs.value.ival) = (yystack_[2].value.ival) | (yystack_[0].value.ival); }
#line 625 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 63 "cppcalc.yy" // lalr1.cc:859
    { (yylhs.value.ival) = (yystack_[2].value.ival) * (yystack_[0].value.ival); }
#line 631 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 64 "cppcalc.yy" // lalr1.cc:859
    { if((yystack_[0].value.ival) == 0) {
                         error(yystack_[0].location, "zero divide");
			 YYABORT;
                     }
                     (yylhs.value.ival) = (yystack_[2].value.ival) / (yystack_[0].value.ival); }
#line 641 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 72 "cppcalc.yy" // lalr1.cc:859
    { (yylhs.value.ival) = (yystack_[0].value.ival) >= 0? (yystack_[0].value.ival) : - (yystack_[0].value.ival); }
#line 647 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 73 "cppcalc.yy" // lalr1.cc:859
    { (yylhs.value.ival) = (yystack_[1].value.ival); }
#line 653 "cppcalc.tab.cc" // lalr1.cc:859
    break;


#line 657 "cppcalc.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  cppcalc::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  cppcalc::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const signed char cppcalc::yypact_ninf_ = -5;

  const signed char cppcalc::yytable_ninf_ = -1;

  const signed char
  cppcalc::yypact_[] =
  {
      -5,     6,    -5,    -5,    17,    17,    -5,    -3,     4,    -5,
      -5,    14,    17,    17,    17,    -5,    17,    17,    -5,     4,
       4,     4,    -5,    -5
  };

  const unsigned char
  cppcalc::yydefact_[] =
  {
       2,     0,     1,    12,     0,     0,     4,     0,     5,     9,
      13,     0,     0,     0,     0,     3,     0,     0,    14,     6,
       7,     8,    10,    11
  };

  const signed char
  cppcalc::yypgoto_[] =
  {
      -5,    -5,    -2,    15,    -4
  };

  const signed char
  cppcalc::yydefgoto_[] =
  {
      -1,     1,     7,     8,     9
  };

  const unsigned char
  cppcalc::yytable_[] =
  {
      10,    12,    13,    11,     0,    14,     2,     0,    15,     3,
      16,    17,    22,    23,     4,     5,     0,     6,    12,    13,
       3,     0,    14,     0,    18,     4,     5,    19,    20,    21
  };

  const signed char
  cppcalc::yycheck_[] =
  {
       4,     4,     5,     5,    -1,     8,     0,    -1,    11,     3,
       6,     7,    16,    17,     8,     9,    -1,    11,     4,     5,
       3,    -1,     8,    -1,    10,     8,     9,    12,    13,    14
  };

  const unsigned char
  cppcalc::yystos_[] =
  {
       0,    13,     0,     3,     8,     9,    11,    14,    15,    16,
      16,    14,     4,     5,     8,    11,     6,     7,    10,    15,
      15,    15,    16,    16
  };

  const unsigned char
  cppcalc::yyr1_[] =
  {
       0,    12,    13,    13,    13,    14,    14,    14,    14,    15,
      15,    15,    16,    16,    16
  };

  const unsigned char
  cppcalc::yyr2_[] =
  {
       0,     2,     0,     3,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     2,     3
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const cppcalc::yytname_[] =
  {
  "$end", "error", "$undefined", "NUMBER", "ADD", "SUB", "MUL", "DIV",
  "ABS", "OP", "CP", "EOL", "$accept", "calclist", "exp", "factor", "term", YY_NULLPTR
  };


  const unsigned char
  cppcalc::yyrline_[] =
  {
       0,    51,    51,    52,    53,    56,    57,    58,    59,    62,
      63,    64,    71,    72,    73
  };

  // Print the state stack on the debug stream.
  void
  cppcalc::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  cppcalc::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
  cppcalc::token_number_type
  cppcalc::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11
    };
    const unsigned int user_token_number_max_ = 266;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }


} // yy
#line 991 "cppcalc.tab.cc" // lalr1.cc:1167
#line 75 "cppcalc.yy" // lalr1.cc:1168

main()
{
  cppcalc_ctx ctx(8);      // work in octal today

  cout << "> "; 

  yy::cppcalc parser(ctx); // make a cppcalc parser

  int v = parser.parse();  // and run it

  return v;
}

// print an integer in given radix
void
myout(int radix, int val)
{
  if(val < 0) {
    cout << "-";
    val = -val;
  }
  if(val > radix) {
    myout(radix, val/radix);
    val %= radix;
  }
  cout << val;
}

int
myatoi(int radix, char *s)
{
  int v = 0;

  while(*s) {
    v = v*radix + *s++ - '0';
  }
  return v;
}
namespace yy {
void
cppcalc::error(location const &loc, const std::string& s)
{
  std::cerr << "error at " << loc << ": " << s << std::endl;
}
}

