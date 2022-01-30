#include "mutantstack.hpp"
template <typename T>
MutantStack<T>::MutantStack() : MutantStack<T>::stack() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &other) : MutantStack<T>::stack(other) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &other)
{
	MutantStack<T>::stack::operator=(other);
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {	return this->c.begin(); }

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() { return this->c.end(); }

template <typename T>
typename MutantStack<T>::riterator MutantStack<T>::rbegin() { return this->c.rbegin(); }

template <typename T>
typename MutantStack<T>::riterator MutantStack<T>::rend() { return this->c.rend(); }