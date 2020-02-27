#ifndef GODOT_REQUEST_REVIEW_H
#define GODOT_REQUEST_REVIEW_H

#include "core/reference.h"

class GodotRequestReview : public Reference {
    GDCLASS(GodotRequestReview, Reference);

protected:
    static void _bind_methods();

public:
    void requestReview();

    GodotRequestReview();
};

#endif
