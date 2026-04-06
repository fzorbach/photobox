#ifndef PHOTOBOX_DUMMYCAMERALED_H
#define PHOTOBOX_DUMMYCAMERALED_H
#include <CameraLed.hpp>

namespace Pbox
{
class DummyCameraLed : public CameraLed
{
public:
    Q_DISABLE_COPY_MOVE(DummyCameraLed);
    using CameraLed::CameraLed;
    ~DummyCameraLed() override = default;

    void playEffect(CameraLed::Effect effect) override
    {

    }
    void turnOff() override
    {

    }
};
}
#endif //PHOTOBOX_DUMMYCAMERALED_H
