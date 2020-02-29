#include "core/class_db.h"
#include "core/engine.h"
#include "register_types.h"
#include "ios/request_review.h"

void register_godotrequestreview_types(){
    Engine::get_singleton()->add_singleton(Engine::Singleton("GodotRequestReview", memnew(GodotRequestReview)));
}
void unregister_godotrequestreview_types(){}

