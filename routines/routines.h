#ifndef ROUTINES_H
#define ROUTINES_H
#define FREEGLUT_STATIC // defined so you can link to freeglut_static.lib when compiling
#define GLEW_STATIC     // defined so you can link to glew's static .lib when compiling
#include <QCoreApplication>
#include <QTextStream>
#include <QTime>
#include <QDate>
#include "iostream"
# include <stdio.h>
# include <curses.h>
# include <stdlib.h>
# include <string.h>
#include <routines.h>
/* assert example */
#include <stdio.h>      /* printf */
#include <assert.h>     /* assert */
#include<iostream>
#include "boost/tokenizer.hpp"
#include <string>

#include <GL/glew.h>     // has to be included before gl.h, or any header that includes gl.h
#include <GLUT/glut.h>

int createWindow();
#endif // ROUTINES_H
