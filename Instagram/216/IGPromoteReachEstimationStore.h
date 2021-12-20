//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IGPromoteReachEstimationStore : NSObject
{
    NSString *_mediaId;
    NSString *_destination;
    NSString *_adAccountId;
    NSString *_audienceId;
    _Bool _isStoryPlacementEligible;
    NSMutableDictionary *_totalBudgetWithOffsetToReachEstimation;
}

- (void).cxx_destruct;
- (_Bool)_shouldInvalidateCacheWithMediaId:(id)arg1 destination:(id)arg2 adAccountId:(id)arg3 audienceId:(id)arg4 isStoryPlacementEligible:(_Bool)arg5;
- (id)reachEstimationWithMediaId:(id)arg1 destination:(id)arg2 adAccountId:(id)arg3 audienceId:(id)arg4 isStoryPlacementEligible:(_Bool)arg5 totalBudgetsWithOffset:(long long)arg6;
- (void)updateStoreWithDataModels:(id)arg1 mediaId:(id)arg2 destination:(id)arg3 adAccountId:(id)arg4 audienceId:(id)arg5 isStoryPlacementEligible:(_Bool)arg6;
- (id)init;

@end

