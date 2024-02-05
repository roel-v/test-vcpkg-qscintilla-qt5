#include <QApplication>
#include <QMainWindow>
#include <Qsci/qsciscintilla.h>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QMainWindow window;

    // Create a QScintilla editor widget
    QsciScintilla *editor = new QsciScintilla();

    // Basic QScintilla configuration
    // Example: Set the default font
    QFont font;
    font.setFamily("Courier");
    font.setFixedPitch(true);
    font.setPointSize(10);

    editor->setFont(font);
    editor->setUtf8(true); // Enable UTF-8

    // Set QScintilla editor as the central widget of the QMainWindow
    window.setCentralWidget(editor);

    // Show the QMainWindow
    window.show();

    return app.exec();
}
