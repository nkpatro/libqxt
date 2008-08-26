/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtCore module of the Qxt library.
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of the Common Public License, version 1.0, as published by
** IBM.
**
** This file is provided "AS IS", without WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
** WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR
** FITNESS FOR A PARTICULAR PURPOSE.
**
** You should have received a copy of the CPL along with this file.
** See the LICENSE file and the cpl1.0.txt file included with the source
** distribution for more information. If you did not receive a copy of the
** license, contact the Qxt Foundation.
**
** <http://libqxt.org>  <foundation@libqxt.org>
**
****************************************************************************/

#ifndef QXTALGORITHMS_H
#define QXTALGORITHMS_H

template<typename InputIterator>
InputIterator qxtMinimum(InputIterator begin, InputIterator end, LessThan lessThan) {
    InputIterator iter = begin, rv = begin;
    while((++iter) != end) {
        if(lessThan(*iter, *rv)) rv = iter;
    }
    return rv;
}

template<typename InputIterator>
InputIterator qxtMinimum(InputIterator begin, InputIterator end) {
    InputIterator iter = begin, rv = begin;
    while((++iter) != end) {
        if((*iter) < (*rv)) rv = iter;
    }
    return rv;
}

template<typename Container>
Container::iterator qxtMinimum(const Container& container) {
    return qxtMinimum(container.begin(), container.end(), qLess<Container::value_type>());
}

template<typename InputIterator>
InputIterator qxtMaximum(InputIterator begin, InputIterator end, GreaterThan greaterThan) {
    InputIterator iter = begin, rv = begin;
    while((++iter) != end) {
        if(greaterThan(*iter, *rv)) rv = iter;
    }
    return rv;
}

template<typename InputIterator>
InputIterator qxtMaximum(InputIterator begin, InputIterator end) {
    InputIterator iter = begin, rv = begin;
    while((++iter) != end) {
        if((*iter) > (*rv)) rv = iter;
    }
    return rv;
}

template<typename Container>
Container::iterator qxtMaximum(const Container& container) {
    return qxtMinimum(container.begin(), container.end(), qGreater<Container::value_type>());
}

#endif
