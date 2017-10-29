#ifndef EVENTOBSERVER_INCLUDED
#define EVENTOBSERVER_INCLUDED

class EventObserver{
    public:
        EventObserver();
        virtual ~EventObserver(){}

        void closeApplication();
};

#endif // EVENTOBSERVER_INCLUDED
