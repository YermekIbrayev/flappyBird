#ifndef APPLICATIONSUBJECT_H
#define APPLICATIONSUBJECT_H
#include <vector>
#include "ApplicationObserver.h"

class ApplicationSubject
{
    private:
        std::vector<ApplicationObserver> observerList;
    public:
        ApplicationSubject();
        virtual ~ApplicationSubject();

        void attach(ApplicationObserver observer);
        void closeApplication();
};

#endif // APPLICATIONSUBJECT_H
