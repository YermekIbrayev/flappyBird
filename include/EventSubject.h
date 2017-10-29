#ifndef EVENTSUBJECT_H_INCLUDED
#define EVENTSUBJECT_H_INCLUDED
class EventSubject{
    public:
        EventSubject();
        virtual ~EventSubject();

        void attach(EventObserver observer);
}
#endif // EVENTSUBJECT_H_INCLUDED
