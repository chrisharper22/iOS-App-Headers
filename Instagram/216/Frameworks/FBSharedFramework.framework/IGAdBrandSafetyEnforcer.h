//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAdPlatformToolbox, NSMutableDictionary;
@protocol IGAdBrandSafetySlotTrackerProtocol, IGAdInsertionBrandSafetyDataSource;

@interface IGAdBrandSafetyEnforcer : NSObject
{
    IGAdPlatformToolbox *_adPlatformToolbox;
    NSMutableDictionary *_brandSafetyStore;
    id <IGAdInsertionBrandSafetyDataSource> _adInsertionBrandSafetyDataSource;
    id <IGAdBrandSafetySlotTrackerProtocol> _brandSafetySlotTracker;
}

- (void).cxx_destruct;
- (void)_logSponsoredItemInsertionFailureEvent:(id)arg1 adPlatformEventCenter:(id)arg2 failureReason:(unsigned long long)arg3 insertionIndex:(long long)arg4 adPlatformLoggingDataSource:(id)arg5 adInsertionBrandSafetyDataSource:(id)arg6;
- (long long)brandSafetyAdInsertionPositionWithEarliestIndex:(long long)arg1 sponsoredItem:(id)arg2 adPlatformEventCenter:(id)arg3 adPlatformLoggingDataSource:(id)arg4 adInsertionBrandSafetyDataSource:(id)arg5;
- (void)updateBrandSafetyStore:(id)arg1;
- (id)initWithAdPlatformToolbox:(id)arg1 adInsertionBrandSafetyDataSource:(id)arg2 brandSafetySlotTracker:(id)arg3;

@end

