//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPayComponentDataMutatingRequest, FBPayComponentFormViewController;

@protocol FBPayComponentFormViewControllerDelegate <NSObject>
- (void)fbpayComponentFormViewController:(FBPayComponentFormViewController *)arg1 didHaveComponentDataMutatingRequest:(FBPayComponentDataMutatingRequest *)arg2 mutatingCallback:(void (^)(FBPayComponentDataMutatingResponse *, NSError *))arg3;
@end

