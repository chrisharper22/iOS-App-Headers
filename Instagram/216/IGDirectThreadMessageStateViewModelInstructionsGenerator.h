//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectThreadViewModelInstructionsGenerating-Protocol.h"

@class IGDirectNicknameManager, NSString;
@protocol IGDirectInteropFeatureGating;

@interface IGDirectThreadMessageStateViewModelInstructionsGenerator : NSObject <IGDirectThreadViewModelInstructionsGenerating>
{
    id <IGDirectInteropFeatureGating> _featureGating;
    NSString *_currentUserPk;
    IGDirectNicknameManager *_nicknameManager;
    NSString *_analyticsModule;
    _Bool _shouldUseMessageLevelSeenState;
    _Bool _shouldUseDeliveredFailedStates;
    _Bool _shouldSortByTimestamp;
    _Bool _shouldShowSeenTime;
    _Bool _shouldShowOnlyOneSeenUser;
    _Bool _shouldUseInboxContextForSeenTime;
    _Bool _shouldUseMessageLevelSeenStatesForGroups;
}

- (void).cxx_destruct;
- (id)_generateMessageLevelSeenStateInstructions:(id)arg1 thread:(id)arg2 seenStateLayoutSpec:(id)arg3 generationInput:(id)arg4;
- (id)_generateLastMessageSeenStateInstructions:(id)arg1 thread:(id)arg2 seenStateLayoutSpec:(id)arg3 generationInput:(id)arg4;
- (id)generateInstructionsForMessages:(id)arg1 generationInput:(id)arg2;
- (id)initWithFeatureGating:(id)arg1 currentUserPk:(id)arg2 nicknameManager:(id)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
