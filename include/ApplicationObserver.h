#ifndef APPLICATIONOBSERVER_H
#define APPLICATIONOBSERVER_H
#include <iostream>

class ApplicationObserver
{
    public:
        ApplicationObserver();
        virtual ~ApplicationObserver();
        virtual void closeApplication();
};

#endif // APPLICATIONOBSERVER_H
