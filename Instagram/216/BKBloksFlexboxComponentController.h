//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/BKBloksComponentController.h>

#import "BKBloksFlexboxViewMountDelegate-Protocol.h"

@interface BKBloksFlexboxComponentController : BKBloksComponentController <BKBloksFlexboxViewMountDelegate>
{
}

- (void)componentWillRelinquishView:(id)arg1;
- (void)componentDidAcquireView:(id)arg1;
- (void)onMount:(id)arg1;
- (void)addMountListenerForView:(id)arg1 model:(id)arg2 context:(id)arg3;

@end

