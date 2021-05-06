#ifndef QFIXLIST_H
#define QFIXLIST_H
#include <QtCore/qlist.h>

template <class T>
class QFixList : public QList<T>
{
private:
    int m_nfix=0;

public:
    QFixList()
    {

    }
    QFixList(int nfix)
    {
        m_nfix=nfix;
    }

    inline void setfix(int nfix)
    {
        m_nfix=nfix;
    }

    inline int size()
    {
        return QList<T>::size();
    }

    inline void enList(const T &t)
    {
        if(size()<m_nfix)
            QList<T>::append(t);
        else
        {
            QList<T>::removeFirst();
            QList<T>::append(t);
        }
    }

    inline T getat(int i) { return QList<T>::at(i); }
};
#endif // QFIXLIST_H
