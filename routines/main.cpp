// main header
#include <routines.h>
using namespace std;

struct my_tokenizer_func
{
    template<typename It>
    bool operator()(It& next, It end, std::string & tok)
    {
        if (next == end)
            return false;
        char const * del = ">=";
        auto pos = std::search(next, end, del, del + 2);
        tok.assign(next, pos);
        next = pos;
        if (next != end)
            std::advance(next, 2);
        return true;
    }

    void reset() {}
};

void print_number(int* myInt) {
  assert (myInt!=NULL);
  printf ("%d\n",*myInt);
}



void draw()
{
    // code for rendering here
    glutSwapBuffers();   // swapping image buffer for double buffering
    glutPostRedisplay(); // redrawing. Omit this line if you don't want constant redraw
}


///
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream out(stdout);

    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();

    //createWindow();



    out << "Current date is: " << cd.toString() << endl;
    out << "Current time is: " << ct.toString() << endl;



    int d=10;
    int *b = NULL;
    int *c = NULL;

     b = &d;

     print_number (b);
     print_number (c);



     std::string to_be_parsed = "1) one>=2) two>=3) three>=4) four";
     for (auto i : boost::tokenizer<my_tokenizer_func>(to_be_parsed))
             std::cout << i << '\n';


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // enabling double buffering and RGBA
    glutInitWindowSize(600, 600);
    glutCreateWindow("OpenGL"); // creating the window
    glutFullScreen();           // making the window full screen
    glutDisplayFunc(draw);      // draw is your function for redrawing the screen

    glutMainLoop();



     printf("press any key to continue");
     getch();
     return a.exec();
}
