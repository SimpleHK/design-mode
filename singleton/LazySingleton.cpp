#pragma once

#include <mutex>

namespace singleton {

class LazySingleton {
public:
    LazySingleton* GetInstace()
    {
        if (instance_ == nullptr) {
            std::unique_lock<std::mutex> lock(mutex_);
        }

        return instance_;
    }

private:
    LazySingleton() {}
    static LazySingleton* instance_;
    static std::mutex mutex_;

};

}