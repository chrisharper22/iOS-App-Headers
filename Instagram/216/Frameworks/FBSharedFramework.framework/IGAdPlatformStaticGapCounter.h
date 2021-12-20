//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAdGapRuleEnforcerDataSource-Protocol.h>

@class NSString;

@interface IGAdPlatformStaticGapCounter : NSObject <IGAdGapRuleEnforcerDataSource>
{
    long long _gapToLastNetego;
    long long _gapToLastAd;
    long long _lastEOFDemarcatorOffset;
    long long _lastSuggestedPostsHeaderOffset;
}

- (_Bool)isIndexBelowSuggestedPostHeader:(long long)arg1;
- (_Bool)isIndexBelowEOFDemarcator:(long long)arg1;
- (void)updateInsertedItem:(id)arg1 atIndex:(long long)arg2;
- (double)timeSinceLastSeenSponsoredItemForAdSlot;
- (double)timeSinceLastSeenSponsoredItem;
- (long long)consumedMediaContainerCountForAdSlotSincePreviousItemType:(unsigned long long)arg1;
- (long long)consumedMediaContainerCountSincePreviousItemType:(unsigned long long)arg1;
- (long long)consumedMediaCountForAdSlotSincePreviousItemType:(unsigned long long)arg1;
- (long long)consumedMediaCountSincePreviousItemType:(unsigned long long)arg1;
- (void)_analyzeInitialCurrentItems:(id)arg1;
- (id)initWithCurrentItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

