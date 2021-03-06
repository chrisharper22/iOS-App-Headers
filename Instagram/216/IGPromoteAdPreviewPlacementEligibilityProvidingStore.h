//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGPromoteAdPreviewDataStoreProviding-Protocol.h"

@class NSString;

@interface IGPromoteAdPreviewPlacementEligibilityProvidingStore : NSObject <IGPromoteAdPreviewDataStoreProviding>
{
    _Bool _isFeedPlacementEligible;
    _Bool _isStoryPlacementEligible;
    _Bool _isExplorePlacementEligible;
    _Bool _isReelsPlacementEligible;
    NSString *_mediaId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReelsPlacementEligible; // @synthesize isReelsPlacementEligible=_isReelsPlacementEligible;
@property(nonatomic) _Bool isExplorePlacementEligible; // @synthesize isExplorePlacementEligible=_isExplorePlacementEligible;
@property(nonatomic) _Bool isStoryPlacementEligible; // @synthesize isStoryPlacementEligible=_isStoryPlacementEligible;
@property(nonatomic) _Bool isFeedPlacementEligible; // @synthesize isFeedPlacementEligible=_isFeedPlacementEligible;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (long long)promotionType;
- (id)initWithMediaId:(id)arg1 feedEligibility:(_Bool)arg2 storyEligibility:(_Bool)arg3 exploreEligibility:(_Bool)arg4 reelsEligibility:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

