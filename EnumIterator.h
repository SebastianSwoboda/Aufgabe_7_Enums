//
// Created by sebas on 02/06/2020.
//

#ifndef AUFGABEENUM_ENUMITERATOR_H
#define AUFGABEENUM_ENUMITERATOR_H
template< typename T >
class EnumIterator
{
public:
    class Iterator
    {
    public:
        Iterator( int value ) :
                m_value( value )
        { }

        T operator*( void ) const
        {
            return (T)m_value;
        }

        void operator++( void )
        {
            ++m_value;
        }

        bool operator!=( Iterator rhs )
        {
            return m_value != rhs.m_value;
        }

    private:
        int m_value;
    };

};

template< typename T >
typename EnumIterator<T>::Iterator begin(EnumIterator<T> )
{
    return typename EnumIterator<T>::Iterator((int)T::First );
}

template< typename T >
typename EnumIterator<T>::Iterator end(EnumIterator<T> )
{
    return typename EnumIterator<T>::Iterator(((int)T::Last) + 1 );
}


#endif //AUFGABEENUM_ENUMITERATOR_H
