/****************************************************************************
Copyright (c) 2010 cocos2d-x.org

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#include "CCStdC.h"


int gettimeofday(struct timeval * val, struct timezone *)
{
    if (val)
    {
        qint64 ms = QDateTime::currentMSecsSinceEpoch();
        val->tv_sec = ms / 1000;
        val->tv_usec = (ms % 1000) * 1000;
    }
    return 0;
}

// from 2dx
//static unsigned int _Hash(const char *key)
//{
//    unsigned int len = strlen(key);
//    const char *end=key+len;
//    unsigned int hash;

//    for (hash = 0; key < end; key++)
//    {
//        hash *= 16777619;
//        hash ^= (unsigned int) (unsigned char) toupper(*key);
//    }
//    return (hash);
//}

//size_t hash_code( const std::type_info& info )
//{
//    // hash name() to size_t value by pseudorandomizing transform
//    const char *_Keyval = info.name();
//    return _Hash(_Keyval);
//}
