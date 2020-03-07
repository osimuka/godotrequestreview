#ifdef __OBJC__
#import <StoreKit/StoreKit.h>
#import "request_review.h"
#endif

GodotRequestReview::GodotRequestReview() {}

void GodotRequestReview::requestReview() {
    if (@available(iOS 10.3, *)) {
    [SKStoreReviewController requestReview];
    }
    else {NSLog(@"Not avaliable");
   }
}

void GodotRequestReview::_bind_methods() {
    ClassDB::bind_method(D_METHOD("requestReview"), &GodotRequestReview::requestReview);
}

