//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IGFeedSectionControllerDimmingDelegate;

@protocol IGFeedSectionControllerDimmingProtocol <NSObject>
@property(nonatomic, getter=isDimmed) _Bool dimmed;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)enableDimmingWithDimmedAlpha:(double)arg1 delegate:(id <IGFeedSectionControllerDimmingDelegate>)arg2;
@end

