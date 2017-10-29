#include "ApplicationSubject.h"

ApplicationSubject::ApplicationSubject()
{
}

ApplicationSubject::~ApplicationSubject()
{
}

void ApplicationSubject::attach(ApplicationObserver observer){
    observerList.push_back(observer);
}

void ApplicationSubject::closeApplication(){
    for(auto &observer: observerList){
        observer.closeApplication();
    }
}
