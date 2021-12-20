//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashABRSwitchSmoothing-Protocol.h>

@class NSString;

@interface FNFDashABRSwitchSmoother : NSObject <FNFDashABRSwitchSmoothing>
{
    int _lastSelectedBitRate;
    int _lastDownswitchBitRate;
    long long _numSamplesSinceLastDownswitch;
    struct FNFDashConfig _config;
}

- (id)filteredRepListFromAvailableList:(id)arg1 fetchSizesInBytes:(id)arg2 bandwidthProvider:(id)arg3;
- (void)selectedRep:(id)arg1 availableReps:(id)arg2;
- (id)initWithConfig:(struct FNFDashConfig)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

