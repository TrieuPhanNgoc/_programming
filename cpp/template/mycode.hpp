#ifndef __TEMPLATE_H__
#define __TEMPLATE_H__

#include <math.h>

namespace tpn_lib {
    template<class _T>
    _T maxValue(_T _valA, _T _valB) {
        return _valA > _valB ? _valA : _valB;
    }

    template<class _T>
    _T minValue(_T _valA, _T _valB) {
        return _valA < _valB ? _valA : _valB;
    }
    
    template<class _T>
    _T distance(_T _valA, _T _valB) {
        return abs(_valA - _valB);
    }
}

#endif // __TEMPLATE_H__