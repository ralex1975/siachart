#pragma once

#include "axis.h"

namespace sia {
namespace charty {

/*!
 * \class VisualItem
 *
 * \brief ͼ�������пɼ�������Ԫ�ض�Ҫ�̳��ڴ���
 *
 */
class CalendarAxis : public Axis {
public:
    CalendarAxis(Panel* parent);

protected:
    virtual void onDraw(SkCanvas* canvas) override;
    virtual void preparePaints() override;

private:
    SkPaint* bk_ = nullptr;
    SkPaint* text_ = nullptr;
    SkPaint* border_ = nullptr;

};
}
}