#include <iostream>
#include <thread>
#include <vector>

class threading {
    public:
        threading() {}

        threading(void func()) {
            m_threadContainer.push_back(std::thread(func));
        }

        threading(uint32_t func(uint32_t, uint32_t), uint32_t x, uint32_t y) {
            m_threadContainer.push_back(std::thread(func, x, y));
        }

        ~threading() {}
        
        void push(void func()) {
            m_threadContainer.push_back(std::thread(func));
        }

        void push(void (*func)(uint32_t, uint32_t), uint32_t x, uint32_t y) {
            m_threadContainer.push_back(std::thread(func, x, y));
        }

        void joinThread() {
            int size = m_threadContainer.size();
            for (int idx = 0; idx < size; ++idx) {
                m_threadContainer[idx].join();
            }
            std::cout << "Joined Theads!" << std::endl;
        }

        void operator()(uint32_t _var) {
            if (_var <= 0) {
                return;
            }
            std::cout << "val: " << _var << std::endl;
        }

        std::thread* operator[](uint32_t index) {
            if (index < 0) {
                std::cout << "Index is not correct!" << std::endl;  
                return nullptr;
            }
            else {
                return &m_threadContainer[index];
            }
        }

    private:
        std::vector<std::thread> m_threadContainer;

};

int main() {
    auto func = []() {
        std::cout << "Hello from thread!\n";
    };

    auto sum = [](uint32_t x, uint32_t y) {
        std::cout << "x + y = " << x + y << std::endl;
    };
    
    // Create an instance of thread
    threading myThread;
    
    // Pushing funcs to thread
    myThread.push(sum, 3, 5);
    myThread.push(func);


    myThread(125);

    // join all of threads
    myThread.joinThread();
        
    return 0;
}